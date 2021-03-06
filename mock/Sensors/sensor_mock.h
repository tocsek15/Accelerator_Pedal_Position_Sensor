/* Includes */
#include <iaps_common.h>

/* Global Variables */
extern uint16_t gMainSensorValue;
extern uint16_t gBackupSensorValue;

/* Function prototypes */
extern void MOCK_GET_MAIN_SENSOR_VALUE(uint16_t* valuePtr);
extern void MOCK_GET_BCKP_SENSOR_VALUE(uint16_t* valuePtr);

/* Defines */
#define GET_MAIN_SENSOR_VALUE(valuePtr) MOCK_GET_MAIN_SENSOR_VALUE(valuePtr);
#define GET_BCKP_SENSOR_VALUE(valuePtr) MOCK_GET_BCKP_SENSOR_VALUE(valuePtr);
