#include <iostream>
#include <limits>
#include <vector>

using namespace std;

int main(){
	
	vector <int> arr;
	arr.push_back(0);
	arr.push_back(1);
	arr.push_back(1);
	arr.push_back(0);
	arr.push_back(1);
	arr.push_back(0);
	arr.push_back(1);
	arr.push_back(0);
	arr.push_back(0);
	int start =0;
	int i =0;
	int end = arr.size();
	
	while(start<=end){
		if(arr[i]==0){
			swap(arr[i],arr[start]);
			i++;
			start++;
		}
		else if(arr[i]==1){
			swap(arr[i],arr[end]);
			end--;
		
		
		}
	}
	int value;
	for( auto value: arr){
		cout << value <<" ";
	}
}
