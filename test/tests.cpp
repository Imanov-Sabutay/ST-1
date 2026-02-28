// Copyright 2025 UNN-CS

#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"

// ============ checkPrime Tests ============

TEST(CheckPrime, ZeroIsNotPrime) {
  EXPECT_FALSE(checkPrime(0));
}

TEST(CheckPrime, OneIsNotPrime) {
  EXPECT_FALSE(checkPrime(1));
}

TEST(CheckPrime, TwoIsPrime) {
  EXPECT_TRUE(checkPrime(2));
}

TEST(CheckPrime, ThreeIsPrime) {
  EXPECT_TRUE(checkPrime(3));
}

TEST(CheckPrime, FourIsNotPrime) {
  EXPECT_FALSE(checkPrime(4));
}

TEST(CheckPrime, FiveIsPrime) {
  EXPECT_TRUE(checkPrime(5));
}

TEST(CheckPrime, NineIsNotPrime) {
  EXPECT_FALSE(checkPrime(9));
}

TEST(CheckPrime, ElevenIsPrime) {
  EXPECT_TRUE(checkPrime(11));
}

TEST(CheckPrime, LargePrimeNumber) {
  EXPECT_TRUE(checkPrime(97));
}

TEST(CheckPrime, LargeCompositeNumber) {
  EXPECT_FALSE(checkPrime(100));
}

// ============ nPrime Tests ============

TEST(NPrime, FirstPrimeIsTwo) {
  EXPECT_EQ(2, nPrime(1));
}

TEST(NPrime, SecondPrimeIsThree) {
  EXPECT_EQ(3, nPrime(2));
}

TEST(NPrime, ThirdPrimeIsFive) {
  EXPECT_EQ(5, nPrime(3));
}

TEST(NPrime, FourthPrimeIsSeven) {
  EXPECT_EQ(7, nPrime(4));
}

TEST(NPrime, TenthPrimeIsTwentyNine) {
  EXPECT_EQ(29, nPrime(10));
}

TEST(NPrime, TwentiethPrime) {
  EXPECT_EQ(71, nPrime(20));
}

// ============ nextPrime Tests ============

TEST(NextPrime, NextPrimeAfterOne) {
  EXPECT_EQ(2, nextPrime(1));
}

TEST(NextPrime, NextPrimeAfterTwo) {
  EXPECT_EQ(3, nextPrime(2));
}

TEST(NextPrime, NextPrimeAfterFour) {
  EXPECT_EQ(5, nextPrime(4));
}

TEST(NextPrime, NextPrimeAfterEleven) {
  EXPECT_EQ(13, nextPrime(11));
}

TEST(NextPrime, NextPrimeAfterTwenty) {
  EXPECT_EQ(23, nextPrime(20));
}

TEST(NextPrime, NextPrimeAfterLargeNumber) {
  EXPECT_EQ(101, nextPrime(100));
}

// ============ sumPrime Tests ============

TEST(SumPrime, SumBeforeTen) {
  uint64_t res = sumPrime(10);
  uint64_t expected = 17;  // 2 + 3 + 5 + 7
  EXPECT_EQ(expected, res);
}

TEST(SumPrime, SumBeforeTwenty) {
  uint64_t res = sumPrime(20);
  uint64_t expected = 77;  // 2 + 3 + 5 + 7 + 11 + 13 + 17 + 19
  EXPECT_EQ(expected, res);
}

TEST(SumPrime, SumBeforeThirty) {
  uint64_t res = sumPrime(30);
  uint64_t expected = 129;  // sum of primes: 2,3,5,7,11,13,17,19,23,29
  EXPECT_EQ(expected, res);
}

TEST(SumPrime, SumBeforeTwo) {
  uint64_t res = sumPrime(2);
  uint64_t expected = 0;  // no primes less than 2
  EXPECT_EQ(expected, res);
}

TEST(SumPrime, SumBeforeThree) {
  uint64_t res = sumPrime(3);
  uint64_t expected = 2;  // only 2
  EXPECT_EQ(expected, res);
}

TEST(SumPrime, SumBeforeLargeNumber) {
  uint64_t res = sumPrime(2000000);
  uint64_t expected = 142913828922;
  EXPECT_EQ(expected, res);
}
