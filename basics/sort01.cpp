#include<bits/stdc++.h>
using namespace std;

void sortArr(int arr[]){
	int i =0;
	int j=6;
	while(i<=j){
		if(arr[i]==0){
			i++;
		}
		else if(arr[j]==1){
			j--;
		}
		else if(arr[i]==1 && arr[j]==0){
			swap(arr[i],arr[j]);
			i++;
			j--;
		}
	}
}

int main(){

	int arr[6]={1,0,0,1,1,0};
	
	sortArr(arr);
	for(int i =0;i<=6;i++){
		cout << arr[i] ;
	}
}
