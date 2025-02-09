
#include <stdio.h>

#define ISeq·define(name) name:{
#define ISeq·end(name) }

#define access(s ,f) s.f

typedef struct{
  int x;
  int y;
} pair;

int main(){
  ISeq·define(A);
  ISeq·end(A);
  pair p;
  p.x = 5;
  p.y = 7;
  printf("%x", access(p ,x));
  return 0;
}
  
