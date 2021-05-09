//Wap for Merge Sort
#include<iostream>
using namespace std;

void Merge(int *a,int low,int high ,int mid){
	int i,j,k,temp[high-low+1];
	i=low;
	k=0;
	j=mid+1;
	while(i<= mid && j<=high){
		if(a[i]<a[j]){
			temp[k] = a[i];
			k++;
			i++;
		}
		else{
			temp[k] = a[j];
			k++;
			i++;
		}
	}
	while(i<=mid){
		temp[k] = a[i];
		k++;
		i++;
	}
	while(j<=high){
		temp[k]=a[j];
		k++;
		j++;
	}
	for(i=low;i<=high;i++){
		a[i]=temp[i-low];
	}
	
}

void MergeSort(int *a,int low,int high){
	int mid;
	if(low<high){
		mid = (low+high)/2;
		MergeSort(a,low,mid);
		MergeSort(a,mid+1,high);
		
		Merge(a,low,high,mid);
	}
}
int main(){
	int size,i;
	cout<<"Enter the Number of Elments:";
	cin>>size;
	int ar[size];
	cout<<"Enter the Elemnts:";
	for(int i=0;i<size;i++){
		cin>>ar[i];
	}
	MergeSort(ar,0,size-1);
	
	cout<<"\n ======Sorted Data====";
	for(i=0;i<size;i++){
		cout<<ar[i]<<"   ";
	}
	return 0;
}
