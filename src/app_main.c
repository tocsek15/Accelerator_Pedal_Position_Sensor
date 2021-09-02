#include <stdio.h>
#include <stdlib.h>

#include "app_common.h"
#include "app_converter.h"
#include "app_scp.h"

/* Entry point of the program */
int main(void) {
  int tempNum = CONST_STUFF;
  printf("The common is reachable because the number is: %d", tempNum);
  printf("This is the main!");
  app_converter();
  scp_main();
  tempNum = app_common_adder(1, 2);
  printf("The common is reachable because the number is: %d", tempNum);

  return 0;
}
