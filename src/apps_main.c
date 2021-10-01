#include <apps_common.h>
#include <apps_converter.h>
#include <apps_scp.h>
#include <stdio.h>
#include <stdlib.h>

/* Entry point of the program */
int main(void) {
  printf(":::::::::::::::::::::\n");
  printf("Response from MAIN \n");

  app_converter();
  scp_main();

  printf(":::::::::::::::::::::\n");
  int tempNum = CONST_STUFF;
  printf("The common is reachable because the number is: %d \n", tempNum);
  printf(":::::::::::::::::::::\n");
  tempNum = app_common_adder(1u, 2u);
  printf("The common is reachable because the number is: %d \n", tempNum);

  return 0;
}
