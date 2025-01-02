#include<iostream>
using namespace std;

int main(){
	
	int rows;
	cout<<" Enter the Number of Rows "<<endl;
	cin>>rows;
	
	int i=1;
	
	while(i<=rows){ //outer loop
		
		int j=1;
		
		while(j<=i){ //inner loop
			
			cout<<i;
			
			j++;
		}
		
		cout<<endl;
		
		i++;
	}
	return 0;
}

