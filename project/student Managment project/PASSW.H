#include<string.h>
int password()
{
  char nm[20],sn[]={"jaihind"};
 int i,n;
 gotoxy(10,10);
 printf("Enter Your Password: ");
  for(i=0; ;i++)
  {
  nm[i]=getch();
  printf("*");
    if(nm[i]==13)
    {
    nm[i]='\0';
    break;
    }
  }
 n=strcmp(nm,sn);
return n;
}