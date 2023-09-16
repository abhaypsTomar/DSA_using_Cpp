#include <iostream>
#include <vector>

using namespace std;

void swiftNegtive(int arr[],int n){
	int i=0;
	int j=0;
	while(i<n){
		if(arr[i]>0){
			i++;
		}
		else{
			swap(arr[j],arr[i]);
			j++;
		}
	}
}
void swift012(int arr[],int n){
	int i=0;
	int j=0;
	int l=n-1;
	while(i<=l){
		if(arr[i]==1){
			i++;
		}
		else if(arr[i]==0){
			swap(arr[i],arr[j]);
			j++;
			i++;
		}
		else{
			swap(arr[l],arr[i]);
			l--;
			//index ++ nahi karna hai 
		}
	}
}

int main(){
	
	int arr[1000]={2,0,2,1,1,0};
	int n = 6;
	
//	swiftNegtive(arr,n);
	swift012(arr,n);
	for(int i =0;i<n;i++){
		cout << arr[i] << " ";
	}
	
	return 0;
}
