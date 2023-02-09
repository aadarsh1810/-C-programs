//Bubble Sort
#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter number of elements:"<<endl;
	cin>>n;
	int arr[n];
	cout<<"\nEnter array elements:"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"original array"<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	int counter=0;
	while (counter<n-1){
		for(int i=0;i<n-counter-1;i++){
			if(arr[i]>arr[i+1]){
				int temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
			}
		}
		counter++;
	}
    cout<<"\nsorted array"<<endl;
	for(int i=0;i<n;i++){
	cout<<arr[i]<<" ";
	}cout<<endl;
	return 0;
}
