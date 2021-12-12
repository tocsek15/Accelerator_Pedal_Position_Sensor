/* Includes */
#include <System.h>
#include <iaps_adconverter.h>
#include <iaps_common.h>
#include <uCUnit-v1.0.h>

/*
 * {APS-36}
 */
static void ut_adc_30_differentNumbers(void)
{
  UCUNIT_TestcaseBegin("ut_adc_30_differentNumbers");

  /* Preparation */
  uint16_t lMainSensorValue   = 100u;
  uint16_t lBackupSensorValue = 999u;

  /* Test */
  UCUNIT_CheckIsEqual(CMN_ERROR, IADConverter_crossCheckSensorValues(lMainSensorValue, lBackupSensorValue));

  UCUNIT_TestcaseEnd();
}

/*
 * {APS-37}
 */
static void ut_adc_30_sameNumbers(void)
{
  UCUNIT_TestcaseBegin("ut_adc_30_differentNumbers");

  /* Preparation */
  uint16_t lMainSensorValue   = 999u;
  uint16_t lBackupSensorValue = 999u;

  /* Test */
  UCUNIT_CheckIsEqual(CMN_OK, IADConverter_crossCheckSensorValues(lMainSensorValue, lBackupSensorValue));

  UCUNIT_TestcaseEnd();
}


int main(void)
{
  UCUNIT_Init();

  ut_adc_30_differentNumbers();
  ut_adc_30_sameNumbers();

  UCUNIT_WriteSummary();
  UCUNIT_Shutdown();

  return ucunit_checks_failed;
}
