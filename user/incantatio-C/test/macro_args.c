
#include <stdio.h>

#define call(a ,b ,lbl)                         \
  if( b==NULL )                                 \
    x = 7;                                      \
  else                                          \
    x = 9;                                      \
  lbl:

int main(){
  int x = 0;
  call(a,NULL);
  printf("%d",x);
  return 0;
}
