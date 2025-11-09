// write a programe ti find the Area of A rectangle(l*b).
#include <stdio.h>

int main()
{
   int length, breadth,Area;
//Take inpute by the user

    printf("Enter lenght: \n");
    scanf("%d",&length);
    printf("Enter breadth: \n");
    scanf("%d",&breadth);

    //Area of Rectangle
    Area = length * breadth;

    printf("Area of rectangle:%d \n",Area);
    return 0;
}