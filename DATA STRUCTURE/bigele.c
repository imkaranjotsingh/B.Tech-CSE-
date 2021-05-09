#include<stdio.h>
void main()
{
	int a[20],i,n,temp;
	printf("Enter the  no of elements in array:");
	scanf("%d",&n);
	printf("Enter the elements in array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	temp=a[0];
	for(i=0;i<n;i++)
	{
		if (temp<a[i])
		{
			printf("Biggest element in array is:%d",a[i]);
		}
	}
}
