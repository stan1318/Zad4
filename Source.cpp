#include <iostream>
#include <string>
using namespace std;

struct student{
	char name[60];
	char egn[10];
	double grade;
	
};

int main(){
	student S1;
	cout << "Student Name: ";
	cin.get(S1.name,60);
	cout << "Student EGN: ";
	cin >> S1.egn;
	cout << "Student Grade:";
	cin >> S1.grade;
	cout << endl;

	cout << "Student Information: " << endl;
	cout << "Name: " << S1.name<<endl;
	cout << "EGN: " <<S1.egn<< endl;
	cout << "Grade: " << S1.grade << endl;

	return 0;
}