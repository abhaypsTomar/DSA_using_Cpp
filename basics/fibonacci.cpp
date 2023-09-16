#include<bits/stdc++.h>
using namespace std;
void fibonacci( int a ,int b){
		int newNum = a+b;
		
		b = newNum;
		a = b;
}


int main(){
	int n , a ,b ;
	cin >> n;
	
	a = 0;
	b = 1;
	for(int i = 1; i<=n ; i++){
		int newNum = a+b;
		a = b;
		b = newNum;
		cout << newNum << endl;
	}
	
	
	
	
}
