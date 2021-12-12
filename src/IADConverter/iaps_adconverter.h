/** @file iaps_adconverter.h
 *
 * @brief Header file for the AD Converter interface.
 *
 */
/* Includes */
#include <iaps_common.h>
#include <sensor_mock.h>

#define SENSOR_UPPER_VALUE 5000u
#define SENSOR_FLOOR_VALUE 0u

#define CHECK_VALUE_RANGE(val)                                                                                              \
  if ((val < SENSOR_FLOOR_VALUE) || (val > SENSOR_UPPER_VALUE))                                                             \
  {                                                                                                                         \
    return CMN_ERROR;                                                                                                       \
  };

/* Function prototypes */

/*!
 * @brief Initializes the ADConverter module.
 *
 *
 * @return State of the initialization.
 */
CMN_Rc IADConverter_init(void);

/*!
 * @brief Gets the values from the sensors.
 *
 * /req {APS-24}
 *
 * @param[in,out] mainSensorValuePtr    Pointer to the main sensor voltage in numerical value.
 * @param[in,out] backupSensorValuePtr  Pointer to the backup sensor voltage in numerical value.
 *
 * @return State of the reception.
 */
CMN_Rc IADConverter_getSensorValue(uint16_t* mainSensorValuePtr, uint16_t* backupSensorValuePtr);

/*!
 * @brief Compares the Main and the Backup sensor values.
 *
 * /req {APS-26}
 *
 * @param[in] mainSensorValue    The main sensor voltage in numerical value.
 * @param[in] backupSensorValue  The backup sensor voltage in numerical value.
 *
 * @return Result of the comparison.
 */
CMN_Rc IADConverter_crossCheckSensorValues(uint16_t mainSensorValuePtr, uint16_t backupSensorValuePtr);

/*** end of file ***/
