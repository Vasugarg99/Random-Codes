#include<stdio.h>
void main()
{
	int arr[10];
          int i,min,j;
	printf("Enter 10 elements:\n");
    for(i=0;i<10;i++)
    {
    	printf("%d:",i+1);
          scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++)
    {
    	min=i;
    	for(j=i+1;j<10;j++)
          {
    		if (arr[j]<arr[min])
                    {
    			min=j;
                     }
    	int temp;
    	temp=arr[min];
    	arr[min]=arr[i];
    	arr[i]=temp;
          }
    }
    printf("Sorted element using selection sort technique :\n");
          for(i=0;i<10;i++)
	{
		printf(" %d : %d\n",i+1,arr[i]);
	}

}
