#include "kernel/types.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
  int parent_pid;
  int child_pid;
  int status;

  parent_pid = getpid();
  printf("tracetest: parent antes do fork pid=%d\n", parent_pid);

  child_pid = fork();
  if(child_pid < 0){
    printf("tracetest: fork falhou\n");
    exit(1);
  }

  if(child_pid == 0){
    printf("tracetest: child pid=%d\n", getpid());
    exit(0);
  }

  printf("tracetest: parent depois do fork pid=%d child=%d\n",
         getpid(), child_pid);

  wait(&status);
  printf("tracetest: parent recebeu status=%d\n", status);
  exit(0);
}
