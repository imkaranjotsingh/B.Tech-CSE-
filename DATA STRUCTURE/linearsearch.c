#include<stdio.h>
void main()
{
	int n,i,a[20],temp,flag=0;
	printf("Enter The number of Element:");
	scanf("%d",&n);
	printf("Enter the Elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the Element U want to Search:");
	scanf("%d",&temp);
	for(i=0;i<n;i++)
	{
		if(temp==a[i])
		{
			printf("Element found at %d Position",i+1);
			flag=1;
			break;
		}	
		
	}
	if(flag==0)
	{
		printf("--Element not Found-- ");
	}
}
