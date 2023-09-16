#include <iostream>
#include <cstring>
using namespace std;

//int main(){
//	int arr[]={2,3,4,6,7};
//	int brr[5]={1,2,3,4,5};
//	int crr[10]={2,4,6,8,10};
////	int arr[53];
////	char arr[106];
//////	bool arr[26];
//
//for(int i=0;i<5;i++){
//	cout<<arr[i];
//}
////
//	cout << "array is declared" << arr[0] << endl;
//}

int main(){
	
	int arr[5];
	
	for(int i =0;i<5;i++){
		memset(arr,1,sizeof(arr));
		cout << arr[i] << " ";
		
	}
}

