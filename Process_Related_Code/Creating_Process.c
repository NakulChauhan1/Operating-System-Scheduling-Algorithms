/* Here Child process is created but that Child process is overwridden with our process,
the process which we want to execute (ie master pdf editor). Master PDF Editor runs with
same PID as it was of Child Process.
   
*/


#include<stdio.h>
#include <unistd.h>
#include<signal.h>



int main()
{
    while(1)
    {
        if(fork() == 0)
        {
            printf("Child Process running %d\n", getpid());
            execlp("masterpdfeditor5", "masterpdfeditor5", NULL, NULL);
            sleep(1);
        }
        else
        {
            printf("Parent Process running %d\n", getpid());
            sleep(1);
        }
        break;
    }
    return 0;
}