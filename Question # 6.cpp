#include<iostream>
using namespace std;

int main(){
	int num;
	cout<<" Enter Numbers from (2 to 25) "<<endl;
	cin>>num;
	
	for(int i = 2; i<=25; i++){

		if(i == 13 || i == 16 || i == 19){
			continue;
		}else if (i == 23){
			break;
		}
		cout<<i<<endl;
	}
	return 0;
}