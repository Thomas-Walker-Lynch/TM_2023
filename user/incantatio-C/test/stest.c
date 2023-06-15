#define ISQ·LIMBO_MESSAGE "Continued into limbo, guess we will have to terminate the program."
#define ISQ·LIMBO_MESSAGE_EXTENT 79
#define ISQ·LIBMO_EXIT_CODE 27
#define ISQ·LIMBO_LOST_MESSAGE "Sequencing has gotten lost."
#define ISQ·LIMBO_LOST_EXIT_CODE 1027


#define ISeq·DECLARATION
  #include <stdio.h>

  typedef void *ISeq·Address;

  #define ISeq·define(name) name:{
  #define ISeq·end(name) }

  #define ISeq·continue(sequence) goto sequence;

  typedef struct{
    ISeq·Address sequence;
    void *argument;
  }ISeq·Pt;

  #define ISeq·call(iseq_pt)                     \
    ISeq·current_argument  = iseq_pt.argument;         \
    ISeq·continue(iseq_pt.sequence);

  typedef struct{
    char *message;
    int  exit_code;
  }ISeq·Limbo_Arg;
#undef  ISeq·DECLARATION

int main(int argc ,char **argv ,char *env){

  #define ISeq·THREAD
    void *ISeq·current_argument; 

      ISeq·Limbo_Arg ISeq·limbo_arg = { ISQ·LIMBO_MESSAGE ,ISQ·LIBMO_EXIT_CODE };

    ISeq·define(ISeq·limbo)
    ISeq·end(ISeq·limbo)

  #undef ISeq·THREAD

return 0;

}


