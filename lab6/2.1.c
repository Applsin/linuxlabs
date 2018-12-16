#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(void)
{
  int pid = fork();
  if (pid == 0) {
    printf("PPID %d\n", getppid());
    printf("PID %d\n", getpid());
  }
  return 0;
}

