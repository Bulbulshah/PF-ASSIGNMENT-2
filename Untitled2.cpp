#include<iostream>
using namespace std;

int main(){
	
	int first, second;
	cout<<" Enter First Number "<<endl;
	cin>>first;
	
	cout<<" Enter second Number "<<endl;
	cin>>second;
	
	cout<<" Even Numbers "<<endl;
	
	for(int i = first; i<=second; i++){
		if(i%2==0){
			
			cout<<" "<<i<<endl; 
		}
	}
	cout<<endl;
	int product=1;
	cout<<" Product of Odd numbers are : "<<endl;
	for(int j = first; j<=second; j++){
		if(j%2!=0){
			product = product*j;
			
		}
	}
		cout<<" "<<product;
	return 0;
}