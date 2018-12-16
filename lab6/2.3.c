#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(void)
{
  int pid = 1;
  for (int i = 0; i < 10 && pid > 0; i++) {
    printf("Process : %d\n", i);
    pid = fork();
  }
  sleep(30);
  return 0;
}

