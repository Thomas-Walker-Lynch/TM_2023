/*

  #include all .isq files into the file "sequence_list.h".  If you use a
  different file name, change the value of the variable Main·SEQUENCE_LIST found
  below accordingly.

  In your code, set ISeq·entry to a ISeq·pt to the entry instruction
  sequence for the process.

*/

#define Main·SEQUENCE_LIST "sequence_list.h"


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

  ISeq·call(ISeq·entry);

  #define ISeq·SEQ
    #include Main·SEQUENCE_LIST
  #undef ISeq·SEQ

}

