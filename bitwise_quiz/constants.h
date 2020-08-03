#include <cstdint>

#ifndef CONSTANTS_H
#define CONSTANTS_H

  constexpr std::uint_fast8_t option_viewed{ 0b0000'0001 };
  constexpr std::uint_fast8_t option_edited{ 0b0000'0010 };
  constexpr std::uint_fast8_t option_favorited{ 0b0000'0100 };
  constexpr std::uint_fast8_t option_shared{ 0b0000'1000 };
  constexpr std::uint_fast8_t option_deleted{ 0b0000'1010 };

#endif