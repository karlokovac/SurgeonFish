#pragma once

#include <bit>
#include <cassert>
#include <concepts>
#include <cstdint>


constexpr uint8_t popcount(std::unsigned_integral auto b) {
    return std::popcount(b);
}

constexpr int least_significant_one(uint64_t b) {
    assert(b);
    return std::countr_zero(b);
}

constexpr int most_significant_one(uint64_t b) {
    assert(b);
    return 63 ^ std::countl_zero(b);
}

constexpr uint64_t pop_least_significant_one(uint64_t b) {
    assert(b);
    return b & (b - 1);
}

constexpr uint64_t isolate_least_significant_one(uint64_t b){
    assert(b);
    return b & -b;
}