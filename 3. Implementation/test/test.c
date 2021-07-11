#include "unity.h"
#include"test.h"

#include "calc.h"
#define PROJECT_NAME  "Calculator"


void test_add(void);
void test_sub(void);
void test_mul(void);
void test_divi(void);
void test_cosec1(void);
void test_gcd(void);
void test_lcm(void);
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}


int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_add);
  RUN_TEST(test_sub);
  RUN_TEST(test_mul);
  RUN_TEST(test_divi);
  RUN_TEST(test_cosec1);
  RUN_TEST(test_gcd);
  RUN_TEST(test_lcm);
  
  /* Close the Unity Test Framework */
  return UNITY_END(); 
}

void test_add(void)
{
  TEST_ASSERT_EQUAL(5, add(2, 3));
  TEST_ASSERT_EQUAL(-1, add(-5, 4));
  TEST_ASSERT_EQUAL(10, add(5,5));
}
void test_sub(void)
{
  TEST_ASSERT_EQUAL(-1, sub(2, 3));
  TEST_ASSERT_EQUAL(5, sub(10, 5));
}
void test_mul(void)
{
  TEST_ASSERT_EQUAL(10, mul(5, 2));
  TEST_ASSERT_EQUAL(-5, mul(-5, 1));
  TEST_ASSERT_EQUAL(0, mul(5,0));
}
void test_divi(void)
{
    TEST_ASSERT_EQUAL(5,divi(10,2));
    TEST_ASSERT_EQUAL(0,divi(0,10));
}
void test_cosec1(void)
{
    TEST_ASSERT_EQUAL(1,cosec1(90));
    TEST_ASSERT_EQUAL(2,cosec1(30));
}
void test_gcd(void)
{
    TEST_ASSERT_EQUAL(12,gcd(24,36));
    TEST_ASSERT_EQUAL(14,gcd(98,56));
}
void test_lcm(void)
{
    TEST_ASSERT_EQUAL(6,lcm(2,3));
    TEST_ASSERT_EQUAL(30,lcm(6,10));
}
