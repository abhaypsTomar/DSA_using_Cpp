#include <iostream>
#include <vector>

using namespace std;

int main(){
	int arr[10]={10,20,30,40};
	int size = 4;
	int sum=100;
	
	for(int i=0;i<size;i++){
		for(int j=i+1;j<size;j++){
			for(int k=j+1;k<size;k++){
				for(int l=k+1;l<size;l++){
					int ans = arr[i]+arr[j]+arr[k]+arr[l];
					if(ans==sum){
					cout << "your pair sum is: ";
					cout<< arr[i] << ","<<  arr[j] <<","<< arr[k]<<"," << arr[l] << endl;
				}

			}
			
		}
	}
	}
	return 0;
}
