//Wap for Binary Search.
#include<iostream>
using namespace std;
int main(){
	int size,i,search,first,last,middle;
	int ar[20];
	cout<<"Enter the Number of Elments:";
	cin>>size;
	cout<<"Enter the Elemnts";
	for(int i=0;i<size;i++){
		cin>>ar[i];
	}
	cout<<"Enter The Number You Want ot Find:";
	cin>>search;
	first = 0;
	last = size-1;
	middle=(first<=last)/2;
	while(first<=last){
		if(ar[middle]<search){
			first=middle+1;
		}
		else if(ar[middle]==search){
			cout<<"Element Found at "<<middle+1<<" Position";
			break;
		}
		else{
			last = middle-1;
		}
		middle=(first+last)/2;
	}
	if(first>last){
		cout<<"Element Not Found";
	}
	return 0;
}
	
	
