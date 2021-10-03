#include <System.h>
#include <uCUnit-v1.0.h>

#include <apps_common.h>

/* Test cases */

static void ut_common_printer_smoketest(void)
{
  UCUNIT_TestcaseBegin("ut_common_smoketest");

  UCUNIT_CheckIsEqual(CMN_NOT_IMPLEMENTED, APPS_CMN_printer("SOMETHING"));

  UCUNIT_TestcaseEnd();
}


int main(void)
{
  UCUNIT_Init();
  // TODO Clarify this
  //  UCUNIT_TestBegin("ut_apm_dtp_smoketest");
  System_WriteString("ut_apm_dtp_smoketest");

  ut_common_printer_smoketest();

  UCUNIT_WriteSummary();
  UCUNIT_Shutdown();

  return ucunit_checks_failed;
}
