#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main() {
  int a;
  a=fork();
  if(a<0)
  {
    printf("child process could not be created");
    exit(-1);
  }
  else if(a==0)
  {
    printf("Child process : My ID is %d\n",getpid());
  }
  else
  {
   printf("Parent process : My ID is %d\n",getpid());
  }
  return 0;
}
