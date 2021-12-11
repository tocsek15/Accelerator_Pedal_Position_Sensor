/* Includes */
#include <sensor_mock.h>

/* Global Variables */
uint16_t gBackupSensorValue;

/* Functions */
void MOCK_GET_MAIN_SENSOR_VALUE(uint16_t* valuePtr)
{

  *valuePtr = gBackupSensorValue;
}
