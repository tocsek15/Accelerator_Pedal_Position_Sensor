#include <System.h>
#include <uCUnit-v1.0.h>

#include <apps_common.h>
#include <apps_scp.h>

/* Test cases */

static void ut_scp_smoketest(void)
{
  UCUNIT_TestcaseBegin("ut_scp_smoketest");

  UCUNIT_CheckIsEqual(CMN_NOT_IMPLEMENTED, APPS_SCP_main());

  UCUNIT_TestcaseEnd();
}


int main(void)
{
  UCUNIT_Init();
  // TODO Clarify this
  //  UCUNIT_TestBegin("ut_apm_dtp_smoketest");
  System_WriteString("ut_converter_smoketest");

  ut_scp_smoketest();

  UCUNIT_WriteSummary();
  UCUNIT_Shutdown();

  return ucunit_checks_failed;
}
