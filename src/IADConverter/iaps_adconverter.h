/** @file iaps_adconverter.h
 *
 * @brief Header file for the AD Converter interface.
 *
 */
/* Includes */
#include "../IAPSCommon/iaps_common.h"

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
 * @param[in,out] sensor1  The first sensor numerical value.
 * @param[in,out] sensor2  The second sensor numerical value.
 *
 * @return State of the reception.
 */
CMN_Rc IADConverter_getSensorValue(void);

/*** end of file ***/
