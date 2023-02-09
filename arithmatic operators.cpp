#include<iostream>
using namespace std;
int sum(int a,int b){
	cout<<"sum"<<(a+b);
	return 0;
	
}
int sub(int a,int b){
	cout<<"sub"<<(a-b);
	return 0;
}
void main(){
	int a,b;
	cin>>a>>b;
	cout<<a<<endl;
	cout<<b<<endl;
	sum(a,b);
	sub(a,b);
}
