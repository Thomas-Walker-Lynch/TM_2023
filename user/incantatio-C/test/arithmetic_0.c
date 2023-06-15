/*
arithmetic test 0 - look for smoke!

gcc -g -I ../production/ -o arithmetic_0 arithmetic_0.c 

*/

#define Main·SEQUENCE_LIST "arithmetic_0.h"


// typically no need to edit beyond this line
//--------------------------------------------------------------------------------

#define ISeq·DECLARATION
  #include Main·SEQUENCE_LIST
#undef  ISeq·DECLARATION

#define ISeq·PROCESS
  #include Main·SEQUENCE_LIST
#undef ISeq·PROCESS

int main(int argc ,char **argv ,char **envp){

  #define ISeq·THREAD
    #include Main·SEQUENCE_LIST
  #undef ISeq·THREAD

  #define ISeq·LOCAL
    union {
      #include Main·SEQUENCE_LIST
    } ISeq·local;
  #undef ISeq·LOCAL
  
  #define ISeq·LINK
    #include Main·SEQUENCE_LIST
  #undef ISeq·LINK

  ISeq·relay(ISeq·main);

  #define ISeq·SEQ
    #include Main·SEQUENCE_LIST
  #undef ISeq·SEQ


}


