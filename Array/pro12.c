#include<stdio.h>
void merge(int a[],int b[],int c[],int n,int m)
{
    int i=0,j=0,k=0;
    while(i<n && j<m)
    {
        if(a[i]<b[j])
        {
            c[k]=a[i];
            k++;
            i++;
        }
        else{
            c[k]=b[j];
            j++;
            k++;
        }
    }
    while(i<n)
    {
        c[k]=a[i];
            k++;
            i++; 
    }
    while(j<m)
    {
        c[k]=a[j];
        k++;
        j++;
    }
}
void display(int c[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",c[i]);
    }
}
int main()
{
    int a[5]={1,3,5,7,9};
    int b[3]={2,4,6};
    int c[8];
    merge(a,b,c,5,3);
    display(c,8);
}