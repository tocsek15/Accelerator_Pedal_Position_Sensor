#include <System.h>
#include <Testsuite.h>
#include <stdio.h>
#include <uCUnit-v1.0.h>

int main(void) {
  UCUNIT_TestcaseBegin("ut_common_smoketest");

  UCUNIT_CheckIsEqual(1, 1);

  UCUNIT_TestcaseEnd();
  UCUNIT_WriteSummary();

  return ucunit_checks_failed;
}
