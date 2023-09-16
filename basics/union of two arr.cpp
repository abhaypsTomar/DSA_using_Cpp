#include <iostream>
#include <vector>
#include <limits>

using namespace std;

int main(){
	int arr[7]={1,4,5,6};
	int sizea = 4;
	int brr[7]={4,5};
	int sizeb =2;
	
	vector <int> ans;
	//intersection
	for(int i=0;i<sizea;i++){
		int element = arr[i];
		
		for(int j=0;j<sizeb;j++){
			if(element == brr[j]){
				brr[j]=INT_MIN;
				ans.push_back(element);
			}
		} 
	}
	
	for(auto value:ans ){
		cout << value <<" ";
	}
//	for(int i =0;i<sizea;i++){
//		ans.push_back(arr[i]);
//	}
//	
//	for(int i =0;i<sizeb;i++){
//		ans.push_back(brr[i]);
//	}
//	
//	for(int i = 0;i<ans.size();i++){
//		
//		cout << ans[i]<<" ";
//	}

	
}
