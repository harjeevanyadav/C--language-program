/*Q2.

Print a square pattern of stars of size 5×5:

* * * * *
* * * * *
* * * * *
* * * * *
* * * * *

*/
#include<stdio.h>

int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            printf("* ");
        }
        printf("\n");
    }
     return 0;
}