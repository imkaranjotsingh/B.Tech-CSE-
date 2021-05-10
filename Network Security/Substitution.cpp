#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	char c[100];
	printf("Enter The String:");
	gets(c);
	for(int i=0;i<=strlen(c);i++){
		if(c[i]=='i'){
			c[i]='t';
		}
		else if(c[i]=='I'){
			c[i]='T';
		}
	}
	printf("String After Substitution:");
	puts(c);
	return 0;
}
