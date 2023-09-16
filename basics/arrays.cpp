#include <bits/stdc++.h>
#include <vector>
using namespace std; 
//// MAXIMUM AND MINIMUM
//int getMax(int arr[],int size){
//	
//	int maxV = INT_MIN;
//	for(int i=0;i<size;i++){
//		
//		maxV = max(maxV,arr[i]);
////		if(arr[i]>maxV){
////			maxV = arr[i];
////		}
//	}
//	return maxV;
//}
//int getMin(int arr[],int size){
//	int minV = INT_MAX;
//	for(int i=0;i<size;i++){
//		minV = min(minV,arr[i]);
////		if(arr[i]<minV){
////			minV = arr[i];
////		}
//	}
//	return minV;
//}
////SUM
//int SUM(int arr[],int size){
//	int sum =0;
//	for(int i =0;i<size;i++){
//		
//			sum = sum + arr[i];
//	}
//	return sum;
//}
//int duplicate(int arr[],int size){
//	int ans = 0;
//	for(int i =0;i<size ;i++){
//		ans = ans^arr[i];
//	}
//	for(int i =0; i<size ; i++){
//		ans = ans^i;
//	}
//	return ans;
//}
//	
//
//
//// swaping alternet
//void swapALT(int arr[],int size){
//	for(int i =0 ; i<size ; i+=2){
//		if(i+1<size){
//			swap(arr[i],arr[i+1]);
//		}
//	}
//	
//}

int main(){
	// 2D vector
	vector < vector<int>   > arr(5,vector<int>(10,0));
	for(int i =0;i<arr.size();i++){
		for(int j=0;j<arr[i].size();j++){
			cout << arr[i][j] << " " ;
		}
		cout << endl;
	}
//	int size ;
//	cin >> size ;
//	
//	int arr[100]={1,2,5,3,4};
//	sort(arr,arr+size);
//        for(int i=0;i<size;i++){
//            cout << arr[i] << " ";
//        }
//	swapALT(arr,size);
//	for(int i = 0;i<size ; i++){
//		cout << arr[i] ;
//	}

	
//	int M = getMax(arr,size);
//	int m = getMin(arr,size);
//	int sum =SUM(arr,size);
//	int duplicate_V = duplicate(arr,size);
//	cout << duplicate_V ; 
//    int row  = 3;
//    int col =3;
//	int arr[row][col] = {{1,5,6},{8,7,9},{12,23,46}};
//	
//	for(int i =0;i<row;i++){
//		for(int j =i;j<col;j++){
//			swap(arr[i][j],arr[j][i]);
//		}
//	}
//	
//	for(int i=0;i<row;i++){
//		for(int j=0;j<col;j++){
//			cout << arr[i][j] <<" ";
//		}
//		cout << endl;
//	}
//	int sum =0;
//	
//	for(int i=0;i<row;i++){
//		sum = sum + arr[i][i];		
//	}
//	
//	cout << sum << " ";

	
	
}

