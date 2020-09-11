#include <stdio.h>
#include <stdlib.h>
#include<sys/types.h>
int main() {
int pid = fork();
if (pid == 0) {
printf("This is the child process. My pid is %d and my parent's id is %d.\n", getpid(),
getppid());
}
else {
printf("This is the parent process. My pid is %d and my parent's id is %d.\n", pid,getpid());
}
return 0;
}
