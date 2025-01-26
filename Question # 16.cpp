//#include<iostream>
//using namespace std;
//
//int main(){
//	int num , sum = 0 ;
//	cout<<" Enter Your Number : "<<endl;
//	cin>>num;
//	int temp = num;
//	while(num!=0){
//		int remin = num%10; //This is the modulus operator, and it gives the remainder when dividing by 10.
//		sum += remin * remin * remin ;
//		num = num/10;//This is the division operator, and it removes the last digit of the number.
//	
//	
//}
//if(sum ==num){
//		cout<<" Astrom Number : "<<sum<<endl;
//	}else{
//		cout<<" Not Astrom Number"<<endl;
//	}
//return 0;
//}
#include<iostream>
using namespace std;
int main(){
	int num , sum = 0;
	cout<<" Enter Your Number "<<endl;
	cin>>num;
	int temp = num ;
	while(num != 0){
		int remain = num%10;
		sum += remain * remain * remain ;
		num = num/10;
	}
	if(sum == temp ){
		cout<<sum <<":  is  Astrom number  "<<endl;
	}else{
		cout<<sum<< ": is not Astrom Number "<<endl;
	}
	return 0;
}