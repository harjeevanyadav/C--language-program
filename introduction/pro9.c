 //write a programe to find the Average of a number.
  #include<stdio.h>

int main(){
    int a,b,avr=0;
    // take inpute by user
    printf ("Enter A: ");
    scanf("%d",&a);
    printf("Enter B: ");
    scanf("%d", &b);

    // Avarage condition
    avr=(a+b)/2;
    
    // Shows Average
    printf("Average:%d ",avr);
    return 0;
}