//Class Work
#include<stdio.h>
int main()
{
    int *p,*q;
    int a[]={5,4,4343,55,66,33,777,45454,334,343,5,7878,22,89,88};
    p=&a[6];
    q=&a[9];
    printf("%d\n",p);
    printf("%d\n",*(p++)); //becaue of post increment jo value index par hai wahi aayegi

    printf("%d\n",*p);//next index ki value aayegi
    // printf("%d\n",p+q);//we can not add pointer to pointer directly
    printf("%d\n",q);
    printf("%d\n",p>q);//Address mai comparison chal raha hai
    printf("%d\n",*(q-1));//value print karwae hai address minus karke
    printf("%d\n",*q<*p);//values mai comparison hoga
    return 0;
}