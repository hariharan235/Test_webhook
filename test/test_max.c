/*! \file test_max.c
    \brief Tests on max.c
 */

// Includes
#include "unity.h"
#include "max.h"

/*! \fn setUp(void)
    \brief Executed before each test
    \param None
    \return None
 */
void setUp(void)
{
}

/*! \fn tearDown(void)
    \brief Executed at the end of each test
    \param None
    \return None
 */
void tearDown(void)
{
}

/*! \fn test_max_param1_greaterthan_param2(void)
    \brief Test to check if max returns 0 is param1 is greater than param2
    \param None
    \return None
 */
void test_max_param1_greaterthan_param2(void)
{
  int a = 17;
  int b = 10;

  TEST_ASSERT_EQUAL(0, max(a,b));
}

/*! \fn test_max_param2_greaterthan_param1(void)
    \brief Test to check if max returns 0 is param2 is greater than param1
    \param None
    \return None
 */
void test_max_param2_greaterthan_param1(void)
{
  int a = 7;
  int b = 10;

  TEST_ASSERT_EQUAL(1, max(a,b));
}
