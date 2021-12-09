/* Electrical Control Unit mock */

/* Includes */
#include <stdio.h>
#include <time.h>

#include <ecu_mock.h>

/* Functions */
CMN_Rc MOCK_ECU_main(void)
{
  return CMN_NOT_IMPLEMENTED;
}

CMN_Rc MOCK_ECU_getPedalPosition(void)
{
  return CMN_NOT_IMPLEMENTED;
}

char* MOCK_ECU_main(void)
{

  time_t curr_time = time(NULL);

  return time;
}
