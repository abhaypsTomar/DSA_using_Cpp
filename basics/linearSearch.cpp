#include <bits/stdc++.h>
using namespace std ;
//bool search(int arr[],int size,int n){
//	
//	for(int i=0;i<size ; i++){
//		if(arr[i]==n){
//			return 1;
//		}
//	}
//	return 0;
//}
void reverse(int arr[],int size){
	int start = 0;
	int end = size -1;
	while(start <= end){
		swap(arr[start],arr[end]);
		start++;
		end--;
	}
}
int main(){
	int size = 5;
	int arr[5] = {-1,-2,0,1,3};
	reverse(arr,size);
	for(int i =0;i<size;i++){
		cout << arr[i] << endl;
	}

//	bool ans = search(arr,size,n);
//	if(ans){
//		cout << "FOUNDED" ;
//		
//	}
//	else{
//		cout << "OOPS";
//	}
}


