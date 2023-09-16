#include<bits/stdc++.h>
using namespace std;

int main(){
	int arr[6]={1,7,9,2,3,0};
	
	for(int i =0 ;i<5;i++){
		int minValue = i;
		for(int j=i+1; j<6;j++){
			if(arr[j]<arr[minValue]){
				minValue = j;
			}
		}
	   swap(arr[minValue],arr[i]);
	cout << arr[i] ;
	}
	
	   
	
}
