#include <stdio.h>
#include <stdbool.h>
#include "CUnit.h"
#include "Basic.h"
#include "program.h"


void test00(void) { CU_ASSERT_TRUE( true ); }
void test01(void) { CU_ASSERT_TRUE( VIN_IsValid("020202") == (-1) ); }
void test02(void) { CU_ASSERT_TRUE( VIN_IsValid("1M8GDM9A_KP099999") == 0 ); }
void test03(void) { CU_ASSERT_TRUE( VIN_IsValid("1M8GDM9A_KP042788") == 1 ); }

/* The main() function for setting up and running the tests.
 * Returns a CUE_SUCCESS on successful running, another
 * CUnit error code on failure.
 */
int main()
{
   CU_pSuite pSuite = NULL;

   /* initialize the CUnit test registry */
   if (CUE_SUCCESS != CU_initialize_registry()) { return CU_get_error(); }

   /* add a suite to the registry */
   pSuite = CU_add_suite("Suite_1", NULL, NULL);
   if (NULL == pSuite) {
      CU_cleanup_registry();
      return CU_get_error();
   }

   /* add the tests to the suite */
   if (
          (NULL == CU_add_test(pSuite, "test00", test00))
	||(NULL == CU_add_test(pSuite, "test01", test01))
	||(NULL == CU_add_test(pSuite, "test02", test02))
	||(NULL == CU_add_test(pSuite, "test03", test03))
      )
   {
      CU_cleanup_registry();
      return CU_get_error();
   }

   /* Run all tests using the CUnit Basic interface */
   CU_basic_set_mode(CU_BRM_VERBOSE);
   CU_basic_run_tests();
   //   CU_basic_show_failures(CU_get_failure_list());
   CU_cleanup_registry();
   return CU_get_error();
}
