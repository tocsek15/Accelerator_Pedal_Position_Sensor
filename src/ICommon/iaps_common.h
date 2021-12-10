/** @file iaps_common.h
 *
 *  @brief Library for common utilities
 *
 */

/* Includes */
#include <stdbool.h>
#include <stdint.h>


/* Interface specific defines */
#define CMN_OK                (CMN_Rc)0u
#define CMN_ERROR             (CMN_Rc)1u
#define CMN_E_NOT_IMPLEMENTED (CMN_Rc)255u

/* Return code check */
#define CMN_RC_CHECK(X)                                                                                                     \
  if (X != CMN_OK)                                                                                                          \
  {                                                                                                                         \
    return 1u;                                                                                                              \
  }


/* Interface specific types */

typedef uint8_t CMN_Rc;
typedef bool    CMN_Bool;

/* Common functions */


/*** end of file ***/
