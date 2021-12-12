/** @file iaps_adconverter.h
 *
 * @brief Header file for the AD Converter interface.
 *
 */
/* Includes */
#include <iaps_common.h>
#include <sensor_mock.h>

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
 * @param[in,out] mainSensorValue    The main sensor voltage in numerical value.
 * @param[in,out] backupSensorValue  The backup sensor voltage in numerical value.
 *
 * @return State of the reception.
 */
CMN_Rc IADConverter_getSensorValue(uint16_t* mainSensorValuePtr, uint16_t* backupSensorValuePtr);

/*** end of file ***/
