struct Demo data[100]; //create structure type variable

void insert()
{
int i,ch,p;
FILE *fp;
fp=fopen("c:\\jp\\data.xls","a");
init();
for(i=0;i<100;i++)
{
clrscr();
cleardevice();
 gotoxy(7,4);
 printf("Sid    : ");
 rectangle(90,40,320,70);
 scanf("%d",&data[i].sid);
 gotoxy(7,7);
 printf("Name   : ");
 rectangle(90,90,320,120);
 scanf("%s",data[i].nm);
 gotoxy(7,10);
 printf("Address: ");
 rectangle(90,140,320,170);
 scanf("%s",data[i].sadd);
 gotoxy(7,13);
 printf("Fees   : ");
 rectangle(90,190,320,220);
 scanf("%d",&data[i].fees);
       gotoxy(7,16);
       printf("Do you want to cont....Press 1: " );
       scanf("%d",&ch);
    if(ch != 1)
    {
    p=i;
    break;
    }
}
for(i=0;i<=p;i++)
{
fprintf(fp,"\n%d",data[i].sid);
fprintf(fp,"\t%s",data[i].nm);
fprintf(fp,"\t%s",data[i].sadd);
fprintf(fp,"\t%d",data[i].fees);
}
fclose(fp);
}