#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int binaryS(int arr[],int target){
	int start = 0;
	int end = 4;
	
	while(start<=end){
		int mid = start + (end - start)/2;
		if(arr[mid]==target){
			return mid;
		}
		
		else if(target > arr[mid]){
			start += mid;
		}
		
		else{
			end -= mid;
		}
		
	}
	return -1;
}

int findFirstOcc(int arr[],int target,int size){
	int start =0;
	int end = size-1;
	int ans =-1;
	while(start<=end){
		int mid =start+(end-start)/2;
	
		if(arr[mid]==target){
			ans = mid;
			end=mid-1;
		}
		else if(target>arr[mid]){
			start = mid +1;
		}
		else if(target<arr[mid]){
			end = mid-1;
		}
		
	}
	return ans;
}
int findLastOcc(int arr[],int target,int size){
	int start =0;
	int end = size-1;
	int ans =-1;
	while(start<=end){
		int mid =start+(end-start)/2;
	
		if(arr[mid]==target){
			ans = mid;
			start=mid+1;
		}
		else if(target>arr[mid]){
			start = mid +1;
		}
		else if(target<arr[mid]){
			end = mid-1;
		}
		
	}
	return ans;
}
//int findFirstOcc(int arr,int target,int size){
//	int start =0;
//	int end = size-1;
//	int ans =-1;
//	while(start<=end){
//		int mid =start+(end-start)/2;
//		if(arr[mid]==target){
//			ans = mid;
//			end=mid-1;
//		}
//		else if(target>arr[mid]){
//			start = mid +1;
//		}
//		else{
//			end = mid-1;
//		}
//	}
//	return ans;
//}
int main(){
	int arr[100] = {10,20,30,30,30,30,40,50,60,70};
	int size =10;
	int target = 30;
	int ans = findFirstOcc(arr,target,size);
	int ans2 = findLastOcc(arr,target,size);
	cout << ans << " " << ans2 << endl;

}
