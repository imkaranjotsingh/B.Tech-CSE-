#include<stdio.h>
int a[11]={6,4,8,7,11,22,43,55,99,87,0};
int b[10];
void merging(int low,int mid,int high)
{
	int I1,I2,i;
	
	for(I1 = low, I2 = mid+1, i = high; I1 <= mid && I2 <= high; i++)
	{
		//printf("In Merging");
		if (a[I1]<=a[I2])
			b[i]=a[I1++];
		else
			b[i]=a[I2++];
	}
	while(I1<=mid)
		b[i++]=a[I1++];
	while(I2<=high)
		b[i++]=a[I2++];
	for(i=low;i<=high;i++)
		a[i]=b[i];
}
void sort(int low,int high)
{
	int mid=0;
	if(low<high)
	{
		mid=(low+high)/2;
		sort(low,mid);
		sort(mid+1,high);
		merging(low,mid,high);
	}
	else
		return;
}
void main()
{
	int i;
	printf("\n List Before Sorting\n");
	for(i=0;i<=11;i++)
		printf("%d\t",a[i]);
	sort(0,11);
	printf("\n List After Sorting\n");
	for(i=0;i<=11;i++)
		printf("%d\t",a[i]);
}
