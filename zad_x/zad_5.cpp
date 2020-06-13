#include <iostream>
#include <sys/types.h>
#include <unistd.h>
#include <signal.h>


using namespace std;

int main()
{
    //Задение 5
    pid_t pid;
    //printf("alarm application startingn");
    execv("SendMeaSignalC5", NULL);
    pid = fork();

    cout << pid << endsl;
    switch(pid) {
    case -1:
        /* Аварийное завершение */
        perror("fork failed");
        exit(1);
    case 0:
        /* Дочерний процесс */
        sleep(5);
        kill(pid, SIGUSR1);
        exit(0);

    sleep(10);
    return 0;
    }
}

