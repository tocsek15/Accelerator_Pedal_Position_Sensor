/** @file iaps_adconverter.c
 *
 * @brief Analog-digital converter interface for the APS.
 *
 */

/* Includes */
#include <iaps_adconverter.h>

/* Functions */
CMN_Rc IADConverter_init(void)
{
  /* Microcontroller specific initialization */

  return CMN_E_NOT_IMPLEMENTED;
}

CMN_Rc IADConverter_crossCheckSensorValues(uint16_t mainSensorValue, uint16_t backupSensorValue)
{
  int32_t tempHolder = abs(mainSensorValue - backupSensorValue);

  if (tempHolder <= SENSOR_TOLERANCE)
  {
    return CMN_OK;
  }

  return CMN_ERROR;
}

CMN_Rc IADConverter_getSensorValue(uint16_t* mainSensorValuePtr, uint16_t* backupSensorValuePtr)
{
  /* Declaring variables */
  uint16_t tempMainSensorValue;
  uint16_t tempBackupSensorValue;

  /* Null pointer checks for incoming holders */
  CMN_PTR_NULL_CHECK(mainSensorValuePtr);
  CMN_PTR_NULL_CHECK(backupSensorValuePtr);

  /* Getting Main Sensor Value */
  GET_MAIN_SENSOR_VALUE(&tempMainSensorValue);
  /* Getting Backup Sensor Value */
  GET_BCKP_SENSOR_VALUE(&tempBackupSensorValue);

  /* Checking whether the received values are in range */
  CHECK_VALUE_RANGE(tempMainSensorValue);
  CHECK_VALUE_RANGE(tempBackupSensorValue);

  /* If everything went well, assign the temporary holders to the incoming pointers */
  *mainSensorValuePtr   = tempMainSensorValue;
  *backupSensorValuePtr = tempBackupSensorValue;

  return CMN_OK;
}

/*** end of file ***/
