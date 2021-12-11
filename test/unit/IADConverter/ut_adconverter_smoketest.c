/* Includes */
#include <System.h>
#include <iaps_adconverter.h>
#include <iaps_common.h>
#include <uCUnit-v1.0.h>

/* Test cases */
static void ut_adconverter_smoketest(void)
{
  UCUNIT_TestcaseBegin("ut_apm_dtp_smoketest");

  UCUNIT_CheckIsEqual(CMN_E_NOT_IMPLEMENTED, IADConverter_getSensorValue());

  UCUNIT_TestcaseEnd();
}


/*
 * {APS-XXX}
 */
int main(void)
{
  UCUNIT_Init();

  ut_adconverter_smoketest();

  UCUNIT_WriteSummary();
  UCUNIT_Shutdown();

  return ucunit_checks_failed;
}
