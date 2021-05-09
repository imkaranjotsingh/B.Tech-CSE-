//Wap for Bubble Sort .
#include<iostream>
using namespace std;
int main(){
	int size,temp;
	int ar[20];
	cout<<"Enter the Number of Elments:";
	cin>>size;
	cout<<"Enter the Elemnts:";
	for(int i=0;i<size;i++){
		cin>>ar[i];
	}
	for(int i=1;i<size;i++){
		for(int j=0;j<(size-1);j++){
			if(ar[j]>ar[j+1]){
			temp=ar[j];
			ar[j]=ar[j+1];
			ar[j+1]=temp;
			}
		}
	}
	cout<<"======AFTER SORTING======\n";
	for(int i=0;i<size;i++){
		cout<<ar[i]<<"  ";
	}
	return 0;
}
