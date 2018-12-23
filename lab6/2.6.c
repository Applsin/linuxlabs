#include <stdio.h>
#include <unistd.h>

int main(void) {
    
    pid_t pid;
    char input[2];
    int count;
    
    printf("This is a fork bomb. Do you want to proceed? yes/no\n");
    scanf("%s", input);

    if (strcmp(input, "yes") != 0) {
        printf("You are safe\n");
        return 0;
    }

    while(1) {
        pid = fork();
        if (pid < 0) {
            printf("Maximum number of processes = %d\n", count);
            return;
        } else if (pid > 0) { count++; }
    }
}