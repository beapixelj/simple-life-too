#pragma once

#include <cstdint>

namespace slt::consensus {

constexpr std::uint64_t MAX_MONEY = 21'000'000ULL * 100'000'000ULL;

constexpr std::uint64_t INITIAL_BLOCK_REWARD = 50ULL * 100'000'000ULL;

constexpr std::uint64_t HALVING_INTERVAL = 210'000;

constexpr std::uint64_t TARGET_BLOCK_TIME_SECONDS = 600;

constexpr std::uint64_t COIN = 100'000'000ULL;

constexpr std::uint64_t MAX_SUPPLY = 21'000'000ULL;

} // namespace slt::consensus
