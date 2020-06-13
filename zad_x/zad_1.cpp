#include <iostream>
#include <sys/types.h>
#include <unistd.h>
#include <signal.h>


using namespace std;

int main()
{
    //Задание 1
    pid_t p; /* fork returns type pid_t */
    p = fork();
    cout << p << endl;
    execl("RunMeC1","","", "!", NULL);

}

