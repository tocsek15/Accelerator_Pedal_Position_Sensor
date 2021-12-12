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

CMN_Rc IADConverter_getSensorValue(uint16_t* mainSensorValuePtr, uint16_t* backupSensorValuePtr)
{
  /* Null pointer checks for incoming holders */
  CMN_PTR_NULL_CHECK(mainSensorValuePtr);
  CMN_PTR_NULL_CHECK(backupSensorValuePtr);

  /* Getting Main Sensor Value */
  GET_MAIN_SENSOR_VALUE(mainSensorValuePtr);
  /* Getting Backup Sensor Value */
  GET_BCKP_SENSOR_VALUE(backupSensorValuePtr);

  return CMN_OK;
}

/*** end of file ***/
