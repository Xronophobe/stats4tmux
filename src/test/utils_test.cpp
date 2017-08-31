#include "gtest/gtest.h"
#include "../utils.hpp"

using namespace utils;

namespace utilsTest {
    TEST(printInOneDigitTest, Tmux) {
      EXPECT_EQ("#[bg=black]#[fg=cyan]9", printInOneDigit(99, "tmux"));
      EXPECT_EQ("#[bg=black]#[fg=red]5", printInOneDigit(51, "tmux"));
    }
}
