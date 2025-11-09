// Input an age and print category
//  Child, Teen, Adult, Senior.
#include<stdio.h>

int main(){
    int age;
    printf("Enter Age: ");
    scanf("%d",&age);
    if (age>0)
    {
        if (age<=2)
        {
            printf("Baby");
        }else if(age<=12)
        {
            printf("Child");
        }
        else if (age <= 19)
        {
            printf("Teen age");
        }
        else if (age <= 59)
        {
            printf("Adult");
        }
        else if (age <= 60)
        {
            printf("Senior Citisenship");
        }
    }
    else{
        printf("Invalide Age");
    }
    
     return 0;
}