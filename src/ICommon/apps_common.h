/* Common utilities header */
#include <stdbool.h>
#include <stdint.h>


/* Typedefs */
typedef bool        CMN_Bool;
typedef size_t      CMN_Size;
typedef uint8_t     CMN_Rc;
typedef char const* CMN_cnstStr;

/* Defining borders */
#define CMN_UINT8_MAX  255u
#define CMN_UINT16_MAX 65535u

/* Target specific boolean definitions */
#define CMN_FALSE (CMN_Bool)0u
#define CMN_TRUE  (CMN_Bool)1u

/* Error code definitions */
#define CMN_OK                     (CMN_Rc)0x00u
#define CMN_ERROR_INVALID_ARGUMENT (CMN_Rc)0x01u
#define CMN_ERROR_SYSTEM           (CMN_Rc)0x02u
#define CMN_NOT_IMPLEMENTED        (CMN_Rc) CMN_UINT8_MAX

/* Function prototypes */
extern CMN_Rc APPS_CMN_printer(CMN_cnstStr aString);
