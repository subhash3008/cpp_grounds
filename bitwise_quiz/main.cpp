//Given the following program:
//#include <cstdint>
// 
//int main()
//{
//    constexpr std::uint_fast8_t option_viewed{ 0x01 };
//    constexpr std::uint_fast8_t option_edited{ 0x02 };
//    constexpr std::uint_fast8_t option_favorited{ 0x04 };
//    constexpr std::uint_fast8_t option_shared{ 0x08 };
//    constexpr std::uint_fast8_t option_deleted{ 0x10 };
// 
//    std::uint_fast8_t myArticleFlags{};
// 
//    return 0;
//}
//a) Write a line of code to set the article as viewed.
//b) Write a line of code to check if the article was deleted.
//c) Write a line of code to clear the article as a favorite.

#include <cstdint>
#include <bitset>
#include <iostream>
#include "article_handler.h"

int main() {
  std::uint_fast8_t myArticleFlags{ 0b0000'0000 };
  std::cout << static_cast<std::bitset<8>>(myArticleFlags) << '\n';
  // a) Write a line of code to set the article as viewed.
  std::cout << "Viewing the article.\n";
  myArticleFlags = viewArticle(myArticleFlags);
  std::cout << static_cast<std::bitset<8>>(myArticleFlags) << '\n';
  // b) Write a line of code to check if the article was deleted.
  std::cout << "Checking if article is deleted.\n";
  std::cout << static_cast<std::bitset<8>>(isArticleDeleted(myArticleFlags)) << '\n';
  // c) Write a line of code to clear the article as a favorite.
  std::cout << "Removing the article from favorited.\n";
  myArticleFlags = unlikeArticle(myArticleFlags);
  std::cout << static_cast<std::bitset<8>>(myArticleFlags) << '\n';
  return 0;
}