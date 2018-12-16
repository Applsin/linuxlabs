#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(void)
{
  int pid = fork();
  if (pid == 0) {
    printf("PPID %d\n", getppid());
    printf("PID %d\n", getpid());
  }
  if (pid > 0) {
  }
  sleep(30);
  return 0;
}

