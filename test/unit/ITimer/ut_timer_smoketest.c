/* Includes */
#include <System.h>
#include <iaps_common.h>
#include <iaps_timer.h>
#include <uCUnit-v1.0.h>

/* Test cases */
static void ut_timer_smoketest(void)
{
  UCUNIT_TestcaseBegin("ut_timer_smoketest");

  UCUNIT_CheckIsEqual(CMN_E_NOT_IMPLEMENTED, ITimer_init());

  UCUNIT_TestcaseEnd();
}


/*
 * {APS-XXX}
 */
int main(void)
{
  UCUNIT_Init();

  ut_timer_smoketest();

  UCUNIT_WriteSummary();
  UCUNIT_Shutdown();

  return ucunit_checks_failed;
}
