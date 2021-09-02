#include <stdio.h>
#include <stdlib.h>

#include "./ICommon/app_common.h"
#include "./IConverter/app_converter.h"
#include "./ISCP/app_scp.h"

/* Entry point of the program */
int main(void) {
  printf("This is the main! \n");

  int tempNum = CONST_STUFF;
  printf("The common is reachable because the number is: %d \n", tempNum);

  app_converter();
  scp_main();
  tempNum = app_common_adder(1, 2);
  printf("The common is reachable because the number is: %d \n", tempNum);

  return 0;
}
