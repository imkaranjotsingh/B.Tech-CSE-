#include<stdio.h>
typedef struct 
{
	int top;
	int element[20];
}stack;
void push(stack *s,int value);
int pop(stack *s);
void display(); 
void main()
{
	int choice,element,i;
	stack s;
	s->top=-1;
	while (1)
	{
		printf("Press 1 to PUSH\n");
		printf("Press 2 to POP\n");
		//printf("Press 3 to Display STACK\n");
		printf("Press X to Exit\n");
		printf("Enter your Choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1 :
				{
					push(&s,element);
					printf("==Element Inserted==\n");
					break;
				}
			case 2 :
				{
					pop(&s);
					printf("==Element Deleted==\n");
					break;
				}
			/*case 3 :
				{
					display();
					for(i=0;i<=;i++)
					{
						printf("%d",element[i]);
					}
					break;
				}*/
			case 'x' :
				{
					printf("====EXITING====");
					break;
				}
			default :
				printf("--Enter a Valid number--\n");
		}
	}	
}
void push(stack *s,int value)
{
	s->top++;
	s->element[s->top]=value;	
}
int pop(stack *s)
{
	int temp;
	temp=s->element[s->top];
	s->top--;
	return temp;
}
