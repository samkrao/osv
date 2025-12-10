#pragma once
#include <type_traits>

#if __cplusplus < 201402L
namespace std {
    template<bool B, class T, class F>
    using conditional_t = typename conditional<B, T, F>::type;
}
#endif