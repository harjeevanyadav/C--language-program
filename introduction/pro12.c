// write a program to calculate simple interest.
#include <stdio.h>
int main()
{
    int principal, time;
    double rate ,_simple_interest;
    printf("Enter Principal : ");
    scanf("%d",&principal);
    printf("Enetr Rate : ");
    scanf("%lf", &rate);
    printf("Enter Time : ");
    scanf("%d",&time);
  _simple_interest =(principal*time*rate)/100.0;
    printf("Total simple interest %lf : ",_simple_interest);
    return 0;
}