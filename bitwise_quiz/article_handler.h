#include <cstdint>

#ifndef ARTICLE_HANDLER_H
#define ARTICLE_HANDLER_H

  std::uint_fast8_t viewArticle(std::uint_fast8_t user);
  std::uint_fast8_t isArticleDeleted(std::uint_fast8_t user);
  std::uint_fast8_t unlikeArticle(std::uint_fast8_t user);

#endif