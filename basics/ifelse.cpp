#include<iostream>
using namespace std;

int main(){
	int age;
	cin >> age ;
	if (age < 18){
		cout <<  "not eligible for  work";
	}
	else if(age >= 18 && age <=54){
		cout << " eligible for work" ;
	}
	else if( age <= 57){
		cout << "eligible ";
		if(age >= 55){
			cout << " , retirement soon";
		}
	}
	else {
		cout << " retired " ; 
	}
	
	return 0;
}
