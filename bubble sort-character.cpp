#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	char arr[n];
	
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
				char temp=arr[i];
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

