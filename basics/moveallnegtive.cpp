#include <bits/stdc++.h>

using namespace std;

int main(){
	int arr[10]={1,-1,3,2,-7,-5,11,6};
	int size = 8;
	
	int l=0;
	int h=size-1;
	while(l<=h){
		if(arr[l]<0){
			l++;
		}
		else if(arr[h]>0){
			h--;
		}
		else{
			swap(arr[l],arr[h]);
		}
	}
	
	for(int i =0;i<size;i++){
		cout << arr[i] << " ";
	}
}
