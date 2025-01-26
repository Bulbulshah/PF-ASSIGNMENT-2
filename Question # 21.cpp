#include<iostream>
#include<string>
using namespace std;

struct Student{
	string name;
	int ID;
	int mark[7];
	float GPA;
};

Student globalStudent = {
	"Bulbul" , 608 , {23 , 65 ,34 , 78 , 89 ,67 , 80} , 3.14
};
void Student_Details(Student S1 , Student S2){
	cout<<" Student Details : "<<endl;
	cout<<" Name " <<S1.name << " "<<endl;
	cout<<" ID " <<S1.ID << " "<<endl;
	cout<<" Mark " <<endl;
	for(int i = 0 ; i<7 ; i++){
		cout<<" marks "<<S1.mark[i]<<endl;
	}
	cout<<" GPA "<<S1.GPA;
	cout<<" "<<endl;
	//print 2nd Student data
	cout<<" Second Student Details "<<endl;
	cout<<" Name "<<S2.name<<" "<<endl;
	cout<<"ID "<<S2.ID<<endl;
	cout<<"Marks"<<endl;
	for(int i= 0 ; i<7 ; i++){
		cout<<" Marks "<<S2.mark[i]<<endl;
	}
	cout<<" GPA " <<S2.GPA <<endl; 
}
int main(){
	Student localStudent = {
	"Nazia" , 609 , {28 , 75 ,94 , 78 , 89 ,97 , 50} , 4
};
		Student_Details(globalStudent , localStudent);
	return 0;
}

