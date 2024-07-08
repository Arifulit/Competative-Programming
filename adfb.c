#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


#include <dirent.h>

int main() {
    pid_t child_pid;

    // Fork a child process
    child_pid = fork();

    if (child_pid == -1) {
        perror("Fork failed");
        exit(EXIT_FAILURE);
    }

    if (child_pid == 0) {  // Code executed by child process
        printf("Child process (PID %d) is running.\n", getpid());

        // Example using exec system call
        execlp("ls", "ls", "-l", NULL);

        // This part will only be reached if execlp fails
        perror("Exec failed");
        exit(EXIT_FAILURE);
    } else {  // Code executed by parent process
        printf("Parent process (PID %d) is waiting for the child to finish.\n", getpid());

        // Wait for the child process to finish
        wait(NULL);

        printf("Parent process is done.\n");

        // Example using opendir() and readdir() system calls
        DIR *dir;
        struct dirent *entry;

        dir = opendir(".");
        if (dir == NULL) {
            perror("opendir");
            exit(EXIT_FAILURE);
        }

        printf("Files in the current directory:\n");
        while ((entry = readdir(dir)) != NULL) {
            printf("%s\n", entry->d_name);
        }

        closedir(dir);

        exit(EXIT_SUCCESS);
    }

    return 0;
}
