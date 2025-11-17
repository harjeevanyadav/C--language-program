void showdata()
{
int i,p;
FILE *fp;
struct Demo dt[100];
fp=fopen("c:\\jp\\data.xls","r");
init();
clrscr();
cleardevice();

for(i=0;i<100;i++)
{
  fscanf(fp,"%d",&dt[i].sid);
  fscanf(fp,"%s",dt[i].nm);
  fscanf(fp,"%s",dt[i].sadd);
  fscanf(fp,"%d",&dt[i].fees);
      if(feof(fp)!=0)
      {
      p=i;
      break;
      }
}
fclose(fp);
for(i=0;i<=p;i++)
{
printf("\n Sid= %d",dt[i].sid);
printf("\t name= %s",dt[i].nm);
printf("\t Add= %s",dt[i].sadd);
printf("\t Fees= %d",dt[i].fees);
}
getch();
}
