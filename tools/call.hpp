#pragma once

namespace bullyapi {
    enum calling_convention {
        cdeclcall,
        stdcall,
        thiscall,
        fastcall
    };

    template<unsigned int Address, typename Ret = void, calling_convention cc = cdeclcall, typename... Args>
    inline Ret Call(Args... args) {
        if constexpr(cc == cdeclcall) return reinterpret_cast<ret(__cdecl*)(Args...)>(Address)(args...);
        else if constexpr(cc == stdcall) return reinterpret_cast<ret(__stdcall*)(Args...)>(Address)(args...);
        else if constexpr(cc == thiscall) return reinterpret_cast<ret(__thiscall*)(Args...)>(Address)(args...);
        else return reinterpret_cast<ret(__fastcall*)(Args...)>(Address)(args...);
    }

    template<unsigned int Address, typename Ret = void, typename... Args>
    inline Ret CallMethod(Args... args) {
        return Call<Address, Ret, thiscall, Args...>(args...);
    }
};