#include <stdio.h>
#include <stdlib.h>

#include "IADConverter/iaps_adconverter.h"
#include "IAPSCore/iaps_core.h"
#include "ICommon/iaps_common.h"

/* Entry point of the program */
int APS_main(void) {

	/* Initialising interfaces */
	IADConverter_init();
	IAPSCore_init();
	ITimer_init();

  return 0;
}
