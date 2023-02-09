#include <iostream>
using namespace std;

int main() {
float basicSalary;
cin>>basicSalary;
char grade;
cin>>grade;
int allow;
if(grade=='A') allow =1700;
else if(grade=='B') allow =1500;
else allow =1300;

float hra=0.2*basicSalary;
float da=0.5*basicSalary;
float pf=.11*basicSalary;

float totalSalary=basicSalary+hra+da+allow-pf;
cout<<(int)totalSalary<<endl;
cout<<totalSalary;
	return 0;
}