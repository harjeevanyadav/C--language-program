// Print the multiplication table of a number entered by the user.
#include<stdio.h>

int main(){
    int n ;
    printf("Enter Number for Multiplication Table: ");
    scanf("%d",&n);
    for (int i = 1; i <=10; i++)
    {
        printf("%dx%d=%d\n",n,i,n*i);
    }
    
printf("\n");
     return 0;
}
