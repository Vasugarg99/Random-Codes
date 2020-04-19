#include<stdio.h>
int main()
{
	int i,j,temp;
	int arr[10];
	printf("Enter the element:\n");
	for(i=0;i<10;i++)
	{
		printf("%d:",i+1);
		scanf(" %d",&arr[i]);
	}
	for(i=0;i<10;i++)
	{
		temp=arr[i];
		for(j=i-1; j>=0 && temp<arr[j]; j--)
		{
			arr[j+1]=arr[j];
		}
                    arr[j+1]=temp;
	}
	printf("Sorted element using Insertion sort technique :\n");
          for(i=0;i<10;i++)
	{
		printf(" %d : %d\n",i+1,arr[i]);
	}

}
