#include <iostream>
using namespace std;
struct student{
	char name[15];
	int roll;
	int age;
};
struct student stud[5];
int main(){
	for(int i=0;i<5;i++){
		cout << "\n Enter Name :- ";
		cin >> stud[i].name;
		cout << "\n Enter Roll no. :- ";
		cin >> stud[i].roll;
		cout << "\n Enter Age :- ";
		cin >> stud[i].age;
	}
	for(int i=0;i<5;i++){
		cout << stud[i].name << endl;
		cout << stud[i].roll << endl;
		cout << stud[i].age << endl;
	}
}
