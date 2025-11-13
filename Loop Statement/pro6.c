// Calculate factorial of a given number using a for loop
#include<stdio.h>

int main(){
    int n,fact=1;
    printf("Enter num: ");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        fact=fact*i;
    }
    printf("%d! factorial is :%d", n,fact);
    
    return 0;
}