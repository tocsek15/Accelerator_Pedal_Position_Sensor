#include <stdio.h>
#include <uCUnit-v1.0.h>

int main(void) {
  UCUNIT_TestcaseBegin("ut_common_smoketest");
  UCUNIT_ChecklistBegin(UCUNIT_ACTION_WARNING);

  printf("SUCCESS");

  UCUNIT_CheckIsEqual(1, 1);

  UCUNIT_ChecklistEnd();
  UCUNIT_TestcaseEnd();

  return 0;
}
