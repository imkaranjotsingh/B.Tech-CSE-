#include<stdio.h>
int binary(int a[],int,int,int);
void main()

{
	int i,n,a[20],item,loc;
	printf("Enter the Number of elements:");
	scanf("%d",&n);
	printf("Enter the elements in Ascending order :\n\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the item u want to search:");
	scanf("%d",&item);
	loc=binary(a,0,n-1,item);
	if (loc==-1)
		printf("Element not found. . . .\n");
	else
		printf("Element found at index %d\n",loc);
}
int binary(int a[],int lb,int ub,int item)
{
	int mid;
	if(lb>ub)
		return -1;
	else
	{
		mid=(lb+ub)/2;
		if(item==a[mid])
			return mid;
		else if (item<a[mid])
			return binary(a,lb,mid-1,item);
		else
			return binary(a,mid+1,ub,item);
	}
}
