/* Includes */
#include <System.h>
#include <iaps_common.h>
#include <iaps_core.h>
#include <uCUnit-v1.0.h>

/* Test cases */
static void ut_apscore_smoketest(void)
{
  UCUNIT_TestcaseBegin("ut_apscore_smoketest");

  UCUNIT_CheckIsEqual(CMN_E_NOT_IMPLEMENTED, IAPSCore_init());

  UCUNIT_TestcaseEnd();
}


/*
 * {APS-XXX}
 */
int main(void)
{
  UCUNIT_Init();

  ut_apscore_smoketest();

  UCUNIT_WriteSummary();
  UCUNIT_Shutdown();

  return ucunit_checks_failed;
}
