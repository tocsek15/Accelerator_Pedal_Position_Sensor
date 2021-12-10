/** @file aps_main.c
 *
 * @brief A description of the module’s purpose.
 *
 */

/* Includes */
#include "aps_main.h"


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

  //  if (returnCode == CMN_OK)
  //  {
  //    CMN_print("SUCCESS");
  //  }
  //  else
  //  {
  //    CMN_print("ERROR: UNSUCCESSFUL INITIALIZATION");
  //  }

  return returnCode;
}

/* Entry point of the program */
int main(void)
{
  return APS_init();
}

/*** end of file ***/
