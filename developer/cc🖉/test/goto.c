
#include <stdio.h>


int main(){

  void *target = &&ok;

  goto *target;;

  printf("5");

  ok:

  printf("7");

}
