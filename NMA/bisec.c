#include<stdio.h>
#include<math.h>
float f(float x){
	return(pow(x,4)-pow(x,1)-10);
}
void main(){
	float x,x1,a,b,err=0.000005;
	int i=1,n;
	printf("Enter the Value of a ,b and No of iterations:");
	scanf("%f%f%d",&a,&b,&n);
	x=(a+b)/2;
	printf("Iteration No %d is:%10.5f\n",i,x);
	i++;
	while(i<n){
		if(f(a)*f(b)<0)
			b=x;
		else
			a=x;
		x1=(a+b)/2;
		printf("Iteration No %d is:%10.5f\n",i,x1);
		if(fabs(x1-x)<err){
			printf("After %d Iteration the root is:%f\n",i,x);
			break;
		}
		x=x1;
		i++;
	}
	if(i>=n){
		printf("--Solution does not exist--");
	}	
}
	

