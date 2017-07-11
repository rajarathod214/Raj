#include<stdio.h>


int main()
{
	int array[50],i,j,size,temp;


	printf("\n ENter the size of array:");
	printf("\n ENter the size of array:");
	scanf("%d",&size);


	printf("\n Enter the array elements:\n");
	for(i=0;i<size;i++)
	{
		printf("array[%d]=",i);
		scanf("%d",&array[i]);
	}


	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{

			if(array[i]>array[j])
			{
				temp=array[i];
				array[i]=array[j];
				array[j]=temp;
			}
		}	

	}


	printf("\n Asending order elements of array:\n");
	printf("\n Asending order elements of array:\n");
	for(i=0;i<size;i++)
	{
		printf("array[%d]=%d\n",i,array[i]);

	}


}
