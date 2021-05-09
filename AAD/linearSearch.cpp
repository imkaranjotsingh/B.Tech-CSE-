//Wap for Linear Search.
#include<iostream>
using namespace std;
int main(){
	int size,element,count = 0 ,position;
	int ar[20];
	cout<<"Enter the Number of Elments:";
	cin>>size;
	cout<<"Enter the Elemnts";
	for(int i=0;i<size;i++){
		cin>>ar[i];
	}
	cout<<"Enter The Elements U want to Find:";
	cin>>element;
	for(int i=0;i<size;i++){
		if(ar[i]==element){
			count = i;
			position = i+1;
			break;
		}
	}
	if(count==0)cout<<"Element Not found!!!!";
	
	else{
		cout<<"Element found at " <<position <<" Position";
	}
	return 0;
}
