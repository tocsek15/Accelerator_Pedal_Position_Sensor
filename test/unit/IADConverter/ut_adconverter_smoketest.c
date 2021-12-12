/* Includes */
#include <System.h>
#include <iaps_adconverter.h>
#include <iaps_common.h>
#include <sensor_mock.h>
#include <uCUnit-v1.0.h>

/* Test cases */
static void ut_adconverter_smoketest_getsensorvalue(void)
{
  UCUNIT_TestcaseBegin("ut_adconverter_smoketest");

  /* Variable preparation */
  uint16_t lMainSensorValue   = 0u;
  uint16_t lBackupSensorValue = 0u;
  /* Setting desired test values */
  gMainSensorValue   = 100u;
  gBackupSensorValue = 100u;

  /* Test */
  UCUNIT_CheckIsEqual(CMN_OK, IADConverter_getSensorValue(&lMainSensorValue, &lBackupSensorValue));
  /* Test for Main Value */
  UCUNIT_CheckIsEqual(100u, lMainSensorValue);
  /* Test for Backup Value */
  UCUNIT_CheckIsEqual(100u, lMainSensorValue);

  UCUNIT_TestcaseEnd();
}


/* Smoketest for Test Driven Development for the APS */
int main(void)
{
  UCUNIT_Init();

  /* Get sensor Value Smoketest */
  ut_adconverter_smoketest_getsensorvalue();

  UCUNIT_WriteSummary();
  UCUNIT_Shutdown();

  return ucunit_checks_failed;
}
