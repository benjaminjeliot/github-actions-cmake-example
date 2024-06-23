// Copyright (c) 2024 Jim Eliot

#include "xmpl/Factorial.h"

namespace xmpl {

auto Factorial(int value) -> int {
  if (value > 1) {
    return value * Factorial(value - 1);
  } else if (value == 1) {
    return 1;
  } else {
    // For zero or less, return zero
    return 0;
  }
}

}  // namespace xmpl
