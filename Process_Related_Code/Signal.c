
/*CTLR C is used to terminate the program, OS sends signal to process to terminate when CTLR C is presses,
  but in this program has changed the flow, so with this program will not terminate when CTLR C is pressed.


  Note: A process can replace the default signal handler for almost all signals (but not SIGKILL) by its user’s own handler function.
  
*/


#include<stdio.h>
#include <unistd.h>
#include<signal.h>


void sigint_handler(int sig_num)
{
    printf("not want to terminate using CTLR C\n");
}

void sigkill_handler(int sig_num)
{
    printf("not want to be killed by kill command\n");
}

int main()
{
    signal (SIGINT, sigint_handler);
    signal (SIGKILL, sigkill_handler);
    int i = 0;
    while(1)
    {
        printf("Process running %d %d\n", getpid(), ++i);
        sleep(1);
    }
    return 0;
}