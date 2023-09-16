
#include <iostream>
#include <limits.h>
using namespace std;
//bool findInArr(int arr[],int size,int key){
//	for(int i =0;i<=size ; i++){
//		if(arr[i]==key){
//			return true;	
//			}
//	}
//	return false;
//}
void swap(int arr[],int size,int start,int end){
	for(int i=0;i<size;i++){
		int temp = arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
	}
}
int main() {
	
  int arr[5] = {-2,3,5,7,8};
  int size = 5;
  
  int start =0;
  int end = size-1;
  
  swap(arr,size,start,end);
  	
  for(int i=0;i<size;i++){
  	cout << arr[i] <<" ";
  }
  
//  while(true){
//  	if(start>end){
//  		break;
//	}
//	if(start==end){
//		cout<<arr[start];
//	}
//	else{
//		cout<<arr[start]<<" ";
//		cout<<arr[end]<<" ";
//	}
//	
//	start++;
//	end--;
//	  
//  }
//  int key;
//  cin >> key;
  //min in arr
//  int minNum=INT_MAX;
//  
//  for(int i=0;i<size;i++){
//  	if(arr[i]<minNum){
//	  minNum=arr[i];
//	  cout<< minNum << endl;
//	}
//	
//  }
  
  
}
  

  
  
//  bool flag=0;
//  //not found =0;
//  //found = 1;
//  for(int i =0;i<size;i++){
//  	if(arr[i]==key){
//  		flag=1;
//  		break;
//	  }
//	  
//  }
//  if (flag){
//  	cout << "found";
//  }
//  else{
//  	cout << "not found";
//  }
//  if(findInArr(arr,size,key)){
//  	cout << "found";
//  	
//  }
//  else{
//  	cout << "not found";
//  }
  
//  cout << countO(arr, size) <<endl
//}
//void countO(int arr[], int size) {
//  int count = 0;
//  for (int i = 0; i < size; i++) {
//    if (arr[i] == 1) {
//      count++;
//    }
//  }
//  cout << count;
//}


//int main(){
//	if(cout<< "hello world" == 0){
//		
//	}
//}


