#include <iostream>
#include <vector>

using namespace std;

int main(){
	
//	vector <int> arr;
//	
//	int ans =  (sizeof(arr)/sizeof(int));
//	cout << ans << endl;
//	
//	cout << arr.size() <<endl;// arr ke andar kitne element hai
//	cout << arr.capacity() << endl;// arr ke andar kitne element store kar sakta hun
//	
//	arr.push_back(5);
//	arr.push_back(8);
//	arr.push_back(9);
//	arr.push_back(10);
//	
//	arr.pop_back();
//	
//	
//	for(int i = 0;i<arr.size();i++){
//		cout << arr[i] << " " ;
//	}
//	
//	cout << endl;
//	
	vector <int> brr(10, -1);
	
	cout << brr.size() << endl;
	cout << brr.capacity() << endl;
	
	
	for(auto val :brr){
		cout << value << " " ;
	}
	
	
	
//	vector<int> crr={10,2,20,3};
//
//	
//	for(int i = 0;i<crr.size();i++){
//		cout << crr[i] << " " ;
//	}
	
	
	
	
	return 0;
}
