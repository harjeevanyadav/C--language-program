void del1()
{
FILE *fl,*op;
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
printf("Enter Your ID to Delete the data :");
scanf("%d",&id);
op=fopen("c:\\jp\\data.xls","w");
 for(k=0;k<=p;k++)
 {
  if(dm[k].sid!=id)
  {
   fprintf(op,"\n%d",dm[k].sid);
   fprintf(op,"\t%s",dm[k].nm);
   fprintf(op,"\t%s",dm[k].sadd);
   fprintf(op,"\t%d",dm[k].fees);
  }else{
  ct=1;
  }
 }

fclose(op);
 if(ct==1)
   {
    printf("\nData Deleted");
   }else{
   printf("\nData Not Found");
   }
printf("\n\nPress Any key to Cont.....");
getch();
}





