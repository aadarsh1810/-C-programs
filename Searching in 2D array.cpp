#include<iostream>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
    int arr[n][m];
	for(int i=0;i<n;i++){
	    for(int j=0;j<m;j++){
	    	cin>>arr[i][j];
		}
    }
    cout<<"Matrix is:"<<endl;
    for(int i=0;i<n;i++){
	    for(int j=0;j<m;j++){
	    	cout<<arr[i][j]<<" ";
		}
		cout<<"\n";
    }
    int x;
    cin>>x;
    bool flag=0;
    for(int i=0;i<n;i++){
	    for(int j=0;j<m;j++){
	    	if(arr[i][j]==x){
	    		cout<<i<<" "<<j<<endl;
	    		flag=1;
			}
		}
    }
    if(flag==0){
    	cout<<"element not found"<<endl;
	}
	else{
		cout<<"element found"<<endl;
	}
    return 0;
}
