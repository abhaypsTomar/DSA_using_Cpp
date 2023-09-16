#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,num;
	cin >> n;
	cin >> num; 
	int count = 0;
	while(num>0){
		num = num-n;
		if(num < 0){
			break;
		}	
		count--;
	}
	cout << -count ;
}
