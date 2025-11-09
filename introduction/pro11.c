// write a programe to convert temperature from celsius to fahrenheit.
#include <stdio.h>

int main()
{
    float celsius,fahrenheit = 0;
    printf("Enter celsius: \n");
    scanf("%f", &celsius);

    printf("\n<-----Accoding to float datatype----->\n");
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("celsius to fahrenheit:%f\n", fahrenheit);

    double celsius1, fahrenheit1= 0;
    printf("Enter celsius: \n");
    scanf("%lf", &celsius1);
    printf("\n<-----Accoding to double datatype----->\n");
    fahrenheit1 = (celsius1 * 9 / 5) + 32;
    printf("celsius to fahrenheit:%lf", fahrenheit1);
    return 0;
}