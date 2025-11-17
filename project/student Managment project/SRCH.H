
void srch()
{
FILE *fl;
struct Demo dm[100];
int k,p,id,ct=0;
cleardevice();
fl=fopen("c:\\jp\\data.xls","r");
for(k=0;k<100;k++)
{
 fscanf(fl,"%d",&dm[k].sid);
 fscanf(fl,"%s",&dm[k].nm);
 fscanf(fl,"%s",&dm[k].sadd);
 fscanf(fl,"%d",&dm[k].fees);
    if(feof(fl)!=0)
    {
    p=k;
    break;
    }
}
fclose(fl);
printf("Enter Your ID :");
scanf("%d",&id);
 for(k=0;k<=p;k++)
 {
  if(dm[k].sid==id)
  {
   printf("\n%d",dm[k].sid);
   printf("\t%s",dm[k].nm);
   printf("\t%s",dm[k].sadd);
   printf("\t%d",dm[k].fees);
   ct=1;
   break;
  }
 }
  if(ct==0)
   {
    printf("\nData Not Found");
   }
printf("\n\nPress Any key to Cont.....");
getch();
}


