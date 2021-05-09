#include<stdio.h>
void insertionsort(int a[],int n);
void main()
{
	int i,n,a[20];
	printf("Enter the number of Elements:");
	scanf("%d",&n);
	printf("Enter the Elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	insertionsort(a,n);
	printf("After sorting :");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	printf("\n");
}
void insertionsort(int a[],int n)
{
	int k,temp,j;
	for(k=1;k<=n-1;k++)
	{
		temp=a[k];
		j=k-1;
		while((temp<a[j])&&(j>=0))
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=temp;
	}
}   
