#include<stdio.h>
struct row
{
    int AT; int BT;
    int CT; int TAT;
    int WT; int RT;
};
int ReadyQueue[10];
int GhantChatt[10];
struct row Table[10];

void push_value()
{

}

int averageTAT()
{
    int sum=0 , avg;
    for(int i=0;i<10;i++)
        sum += Table[3][i];
    avg = sum/10;
    return avg;
}

int averageWT()
{
    int sum=0 , avg;
    for(int i=0;i<10;i++)
        sum += Table[4][i];
    avg = sum/10;
    return avg;
}

int main()
{
    int n, AT, BT;    //n - number of processes, AT - Arrival Time, BT - Burst Time
    scanf("%d%d%d", &n, &AT, &BT);

    int avgTAT, avgWT;
    avgTAT = averageTAT();
    avgWT = averageWT();

    return 0;
}
