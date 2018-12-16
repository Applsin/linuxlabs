#include <stdio.h>

extern char **environ;
int main(int argc, char *argv[])
{
  char **elem;
  int counter = 0;
  int end;
  if(argc > 1) {
    sscanf(argv[1], "%d", &end);
  } else {
    return 0;
  }
  for (elem = environ; *elem != NULL  && counter < end; elem++) {
    printf("%s\n", *elem);
    counter++;
  }
  return 0;
}
