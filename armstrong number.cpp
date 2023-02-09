#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int num;
	cin>>num;
	int sum=0;
	int temp=num;
	while (temp>0){
		int digit=temp%10;
		sum=sum+ pow(digit,3);
		temp=temp/10;
	}
	if(num==sum){
		cout<<"armstrong number";
    }
	else{
	
		cout<<"not an armstrong number";
	}
	return 0;
}
