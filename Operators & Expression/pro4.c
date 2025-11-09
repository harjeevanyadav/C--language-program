// demonstrate pre-increment and post-increment diffrence
#include <stdio.h>
int main()
{
    int a;
    printf("Enter Num: ");
    scanf("%d",&a);
    printf("\n Difference between pre-increment and post-increment\n");
    
    printf("pre-increment:%d \n",++a);
    printf("post-increment:%d\n", a++);

    return 0;
}