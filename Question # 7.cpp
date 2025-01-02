#include<iostream>
using namespace std;

int main(){
	
	int size = 6;
	int Arry[6]={ 8 , 4 , 9 ,10 , 5, 19 };
	int CopyArry[6];
	int EvenSum = 0;
	
	for(int i=0; i<=5 ; i++){
		
		CopyArry[i] = Arry[i];
		
		if(Arry[i]%2==0){
			
			EvenSum += Arry[i]; 
		}
	}
	
	cout<<" Copied Arry's Are : ";
	for(int i=0; i<=5 ; i++){
		cout<<CopyArry[i];
	}
	cout<<endl;
	
	cout<<" Even Sum are : "<<EvenSum;
	return 0;
}
