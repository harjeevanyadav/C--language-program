#include<stdio.h>
void Towerofhanoi(int n,char from,char to,char aux)
{
    if(n==1)
    {
        printf("Move Disk 1 from rod %c to rod %c\n",from,to);
        return;
    }
    Towerofhanoi(n-1,from,aux,to);
    printf("N1= %d\n",n);
    printf("Move Disk %d from rod %c to rod %c\n",n,from,to);
    printf("N2= %d\n",n);
    Towerofhanoi(n-1,aux,to,from);
}
int main()
{
    int n=3;
    Towerofhanoi(n,'A','C','B');
    return 0;
}