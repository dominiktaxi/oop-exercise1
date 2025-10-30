#pragma once

#include <random>

namespace NumberGenerator {

template <typename T> T generate(T min, T max) {
  std::random_device rd;
  std::mt19937 gen(rd());

  std::uniform_real_distribution<T> distrib(min, max);

  return distrib(gen);
}

} // namespace NumberGenerator
