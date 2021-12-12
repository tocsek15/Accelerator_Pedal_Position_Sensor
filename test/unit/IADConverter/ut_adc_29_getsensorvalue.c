/* Includes */
#include <System.h>
#include <iaps_adconverter.h>
#include <iaps_common.h>
#include <sensor_mock.h>
#include <uCUnit-v1.0.h>

/*
 * {APS-31}
 */
static void ut_adc_29_firstPointerIsNull(void)
{
  UCUNIT_TestcaseBegin("ut_adc_29_firstPointerIsNull");

  /* Preparation */
  uint16_t lMainSensorValue   = 999u;
  uint16_t lBackupSensorValue = 999u;
  /* Setting mock sensor values */
  gMainSensorValue   = 100u;
  gBackupSensorValue = 100u;

  /* Test */
  UCUNIT_CheckIsEqual(CMN_ERROR, IADConverter_getSensorValue(NULL, &lBackupSensorValue));
  /* Tests whether the initial values stayed the same */
  UCUNIT_CheckIsEqual(999u, lMainSensorValue);
  UCUNIT_CheckIsEqual(999u, lBackupSensorValue);

  UCUNIT_TestcaseEnd();
}

/*
 * {APS-32}
 */
static void ut_adc_29_secondPointerIsNull(void)
{
  UCUNIT_TestcaseBegin("ut_adc_29_secondPointerIsNull");

  /* Preparation */
  uint16_t lMainSensorValue   = 999u;
  uint16_t lBackupSensorValue = 999u;
  /* Setting mock sensor values */
  gMainSensorValue   = 100u;
  gBackupSensorValue = 100u;

  /* Test */
  UCUNIT_CheckIsEqual(CMN_ERROR, IADConverter_getSensorValue(&lMainSensorValue, NULL));
  /* Tests whether the initial values stayed the same */
  UCUNIT_CheckIsEqual(999u, lMainSensorValue);
  UCUNIT_CheckIsEqual(999u, lBackupSensorValue);

  UCUNIT_TestcaseEnd();
}

/*
 * {APS-33}
 */
static void ut_adc_29_firstValueIsOutOfRange(void)
{
  UCUNIT_TestcaseBegin("ut_adc_29_firstValueIsOutOfRange");

  /* Preparation */
  uint16_t lMainSensorValue   = 999u;
  uint16_t lBackupSensorValue = 999u;

  /* Setting Main Sensor value to an outer range value */
  gMainSensorValue = 5001u;

  /* Test */
  UCUNIT_CheckIsEqual(CMN_ERROR, IADConverter_getSensorValue(&lMainSensorValue, &lBackupSensorValue));
  /* Tests whether the initial values stayed the same */
  UCUNIT_CheckIsEqual(999u, lMainSensorValue);
  UCUNIT_CheckIsEqual(999u, lBackupSensorValue);

  UCUNIT_TestcaseEnd();
}

/*
 * {APS-34}
 */
static void ut_adc_29_secondValueIsOutOfRange(void)
{
  UCUNIT_TestcaseBegin("ut_adc_29_secondValueIsOutOfRange");

  /* Preparation */
  uint16_t lMainSensorValue   = 999u;
  uint16_t lBackupSensorValue = 999u;

  /* Setting Backup Sensor value to an outer range value */
  gBackupSensorValue = 5001u;

  /* Test */
  UCUNIT_CheckIsEqual(CMN_ERROR, IADConverter_getSensorValue(&lMainSensorValue, &lBackupSensorValue));
  /* Tests whether the initial values stayed the same */
  UCUNIT_CheckIsEqual(999u, lMainSensorValue);
  UCUNIT_CheckIsEqual(999u, lBackupSensorValue);

  UCUNIT_TestcaseEnd();
}

/*
 * {APS-35}
 */
static void ut_adc_29_returnsOK(void)
{
  UCUNIT_TestcaseBegin("ut_adc_29_returnsOK");

  /* Preparation */
  uint16_t lMainSensorValue   = 999u;
  uint16_t lBackupSensorValue = 999u;

  /* Setting Backup Sensor value to an outer range value */
  gMainSensorValue   = 100u;
  gBackupSensorValue = 100u;

  /* Test */
  UCUNIT_CheckIsEqual(CMN_OK, IADConverter_getSensorValue(&lMainSensorValue, &lBackupSensorValue));
  /* Tests whether the initial values has changed */
  UCUNIT_CheckIsEqual(100u, lMainSensorValue);
  UCUNIT_CheckIsEqual(100u, lBackupSensorValue);

  UCUNIT_TestcaseEnd();
}


int main(void)
{
  UCUNIT_Init();

  ut_adc_29_firstPointerIsNull();
  ut_adc_29_secondPointerIsNull();
  ut_adc_29_firstValueIsOutOfRange();
  ut_adc_29_secondValueIsOutOfRange();
  ut_adc_29_returnsOK();

  UCUNIT_WriteSummary();
  UCUNIT_Shutdown();

  return ucunit_checks_failed;
}
