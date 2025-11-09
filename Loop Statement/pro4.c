// Print the sum of first 10 natural numbers.
#include<stdio.h>

int main(){
    int n=10,sum=0;
    
        for (int i = 1; i <=n; i++)
        {
            printf("%d ",i);
            sum=sum+i;
        }
        printf("\nsum of natural number: %d", sum);

    return 0;
}