#include<stdio.h>
void bubblesort(int a[], int n);
void main()
{
	int i,n,a[20];
	printf("Enter the Number of elements:");
	scanf("%d",&n);
	printf("Enter the elements :\n\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	bubblesort(a,n);
	printf("\nSorted list of elements:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
}
void bubblesort(int a[],int n)
{
	int j,k,temp,flag=1;
	k=1;
	while(k<n)
	{
		//flag=0;
		for(j=0;j<n-k;j++)
		{
			if(a[j]>a[j+1])
			{
				//flag=1;
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
		k++;
	}
}
