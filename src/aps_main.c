/** @file aps_main.c
 *
 * @brief A description of the module’s purpose.
 *
 */

/* Includes */
#include <iaps_adconverter.h>
#include <iaps_common.h>
#include <iaps_core.h>
#include <iaps_timer.h>

/* Functions */
static CMN_Rc APS_init(void)
{
  CMN_Rc returnCode;

  /* Initializing interfaces */
  returnCode = IADConverter_init();
  CMN_RC_CHECK(returnCode);
  returnCode = IAPSCore_init();
  CMN_RC_CHECK(returnCode);
  returnCode = ITimer_init();
  CMN_RC_CHECK(returnCode);

  return returnCode;
}

/* Entry point of the program */
int main(void)
{
  CMN_Rc rc = APS_init();
  return 0;
}

/*** end of file ***/
