//QUICK SORT
#include<iostream>
using namespace std;
 int partition (int arr[], int low, int high) 
{ 
    int pivot = arr[high];  
    int i = (low - 1); 
  
    for (int j = low; j <= high - 1; j++) 
    { 
		if (arr[j] < pivot) 
        { 
            i++; 
            int temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
        } 
        
    }	 
    
    int temp=arr[i+1];
	arr[i+1]=arr[high];
	arr[high]=temp; 
    return (i + 1); 
} 
  

void QuickSort(int arr[], int low, int high) 
{ 
	if (low < high) 
    { 
        int pi = partition(arr, low, high); 
        
		QuickSort(arr, low, pi - 1); 
        QuickSort(arr, pi + 1, high); 
    } 
} 
  

int main(){
	int n;
	cout<<"Enter number of elements:"<<endl;
	cin>>n;
	int arr[n];
	cout<<"enter elements of array"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"original array"<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
    }cout<<endl;
	QuickSort(arr,0,n-1);
	cout<<"\nsorted array"<<endl;
	for(int i=0;i<n;i++){
	cout<<arr[i]<<" ";
	}cout<<endl;
	return 0;
}
	
