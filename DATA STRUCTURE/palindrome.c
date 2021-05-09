#include<stdio.h>
#include<string.h>
void a(char str[])
{
	int i=0;
	int h=strlen(str)-1;
	while(h>i)
	{
		if(str[i++]!=str[h--])
		{
			printf("%s is not a palindrome\n",str);
			break;
		}
	}
	printf("%sThe string is a Palindrome:\n",str);
}
int main()
{	
	a("madam");
	a("abba");
	a("james");

}

