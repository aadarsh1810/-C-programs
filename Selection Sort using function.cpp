//Selection Sort using function
#include<iostream>
using namespace std;

void SelectionSort(int arr[],int n){
		for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]<arr[i]){
				int temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
	}
	
}

int main(){
	int n;
	cout<<"Enter number of elements:"<<endl;
	cin>>n;
	int arr[n];
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"original array"<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
}
	SelectionSort(arr,n);
	cout<<"\nsorted array"<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
	return 0;
}
