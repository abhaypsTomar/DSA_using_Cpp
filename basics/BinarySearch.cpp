#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int binaryS(int arr[],int target){
	int start = 0;
	int end = 4;
	int mid = start + (end - start)/2;
	while(start<=end){
		
		if(arr[mid]==target){
			return mid;
		}
		
		else if(target > arr[mid]){
			start = mid + 1;
		}
		
		else{
			end = mid - 1;
		}
		mid = start + (end - start)/2;
	}
	return -1;
}
int main(){
	int arr[5] = {12,13,15,19,22};
	int target = 19;
	int ans = binaryS(arr,target);
	cout << ans << endl;

}
