#include<iostream>
using namespace std; 

void  Sort(int arr[],int l){
    int counter=0;
	while (counter<l-1){
		for(int k=0;k<l-counter-1;k++){
			if(arr[k]>arr[k+1]){
				int temp=arr[k];
				arr[k]=arr[k+1];
				arr[k+1]=temp;
			}
		}
		counter++;
	}
}
void sortedMerge(int a[], int b[], int arr[],  
    int n, int m) 
    {  
    int i = 0, j = 0, k = 0;  
    while (i < n) 
    {
        arr[k] = a[i];   
        i += 1;  
        k += 1;  
    }  
   
    while (j < m) {  
        arr[k] = b[j];   
        j += 1;  
        k += 1;  
    }
    int l=n+m;
	Sort(arr,l);
}
	 
  
int main()  
{  
    int a[] = { 40, 75, 23, 12, 100 };  
    int b[] = { 8, 13, 57, 33, 21, 57 };  
    int n = sizeof(a) / sizeof(a[0]); 
    int m = sizeof(b) / sizeof(b[0]); 
  
    int arr[n + m]; 
    sortedMerge(a, b, arr, n, m);   
  
    cout << "The sorted array is: ";  
    for (int i = 0; i < n + m; i++)  
        cout << " " << arr[i];  
    cout << "\n";  
  
    return 0;  
}  
