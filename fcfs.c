#include <stdio.h>
int main()
{
  int n,bt[4],tat[4],wt[4],avgwt=0,ct[4],avgtat=0,arrivalt=0, sumtat=0,sumwt=0,i;
printf("Enter the number of elements\n");
scanf("%d",&n );
printf("Enter the program's burst times\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&bt[i]);
  }
  wt[0]=0;
  ct[0]=bt[0];
  for(i=1;i<n;i++)//for ct
  {
    ct[i]=bt[i]+ct[i-1];
  }
  for(i=0;i<n;i++)//for tat
  {
    tat[i]=ct[i]-arrivalt;
  }
  for(i=0;i<n;i++)//for wt
  {
    wt[i]=tat[i]-bt[i];
  }
  for(i=0;i<n;i++)
  {
    sumtat=sumtat+ tat[i];
  }
  avgtat=sumtat/4;
  printf("average TAT: %d", avgtat);
  for(i=0;i<n;i++)
  {
    sumwt=sumwt+wt[i];
  }
  avgwt=sumwt/4;
  printf("average WT: %d", avgwt);
}
