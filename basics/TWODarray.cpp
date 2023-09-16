#include <bits/stdc++.h>

using namespace std;

int main(){
	int arr[10][10] = {{1,2},{4,8}} ;
	int row = 2;
	int col = 2;
	
//	for(int i =0;i<row;i++){
//		for(int j =0;j<col;j++){
//				
//			 swap(arr[j][i],arr[i][j]);
//				
//			}
//				
//		}
	for(int i =0;i<row;i++){
		for(int j =0;j<col;j++){
			swap(arr[i][j],arr[j][i]);
			cout << arr[i][j] << " ";
				
			}
			cout << endl;
		}
			
//	}
	// col wise input !!!!!!!!!
	
//	int minVal = INT_MAX;
//	int maxVal = INT_MIN;
	
	// row wise input !!!!!!!!!
//	for(int i =0;i<row;i++){
//			for(int j =0;j<col;j++){
//				cin  >> arr[i][j] ;
//			}
//	}
//	for(int i =0;i<row;i++){
//			for(int j =0;j<col;j++){
//				
//				if(arr[i][j] < minVal){
//					minVal = arr[i][j];
//				}
//				
//			}
//			
//	}
//	cout << minVal << " " ;
}
