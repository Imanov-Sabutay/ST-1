// Copyright 2025 UNN-CS

#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"


TEST(st1, checkPrime_returns_false_for_0) {
  EXPECT_FALSE(checkPrime(0));
}

TEST(st1, checkPrime_returns_false_for_1) {
  EXPECT_FALSE(checkPrime(1));
}

TEST(st1, checkPrime_returns_true_for_small_prime) {
  EXPECT_TRUE(checkPrime(2));
}

TEST(st1, checkPrime_returns_false_for_composite) {
  EXPECT_FALSE(checkPrime(100));
}

TEST(st1, nPrime_first_prime_is_2) {
  EXPECT_EQ(2U, nPrime(1));
}

TEST(st1, nPrime_sixth_prime_is_13) {
  EXPECT_EQ(13U, nPrime(6));
}

TEST(st1, nPrime_zero_returns_0) {
  EXPECT_EQ(0U, nPrime(0));
}

TEST(st1, nextPrime_after_4_is_5) {
  EXPECT_EQ(5U, nextPrime(4));
}

TEST(st1, nextPrime_after_prime_11_is_13) {
  EXPECT_EQ(13U, nextPrime(11));
}

TEST(st1, nextPrime_after_0_is_2) {
  EXPECT_EQ(2U, nextPrime(0));
}

TEST(st1, sumPrime_below_2_is_0) {
  EXPECT_EQ(0U, sumPrime(2));
}

TEST(st1, sumPrime_below_10_is_17) {
  uint64_t res = sumPrime(10);
  uint64_t expected = 17;
  EXPECT_EQ(expected, res);
}

TEST(st1, sumPrime_below_30_is_129) {
  EXPECT_EQ(129U, sumPrime(30));
}

TEST(st1, sumPrime_below_2000000_matches_known_value) {
  uint64_t res = sumPrime(2000000);
  uint64_t expected = 142913828922;
  EXPECT_EQ(expected, res);
}
