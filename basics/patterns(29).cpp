#include <iostream>
using namespace std;

void print(int n){
	for(int i=0; i<n ;i++){
		for(int j=0;j<i+1;j++){
			cout << "* ";
		}
		cout << endl;
	}
}
void print2(int n){
	for(int i=0;i<=n;i++){
		for(int j=0; j<n-i+1; j++){
			cout << "* ";		
		}
		cout << endl;
	}
}
void print3(int n){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i+1;j++){
			cout<< j <<" ";
		}
		cout << endl;
	}
}
void print4(int n){
	for(int i=0 ;i<n;i++){
		for(int j=0;j<=n-i-1;j++){
			cout << " ";
		}
		for(int j=0;j<2*i+1;j++){
			cout << "*";
		}
		for(int j=0;j<=n-i-1;j++){
			cout << " ";
		}
		cout << endl;
	}
}
void print5(int n){
	for(int i=n ;i>0;i--){
		for(int j=0;j<=n-i-1;j++){
			cout << " ";
		}
		for(int j=0;j<2*i-1;j++){
			cout << "*";
		}
		for(int j=0;j<=n-i-1;j++){
			cout << " ";
		}
		cout << endl;
	}
}
void printif(int n){
	if(cout << n){
		cout << "abhay pratap singh tomar";
	}
}


int main(){
	int n;
	cin >> n;
	printif(n);
	
	
}
