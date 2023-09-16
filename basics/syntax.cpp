#include<bits/stdc++.h>
using namespace std;

int sumNum ( int a , int b){
	int sum;
	sum = a + b ;
	return sum;
} 
int bitwiseOp(int a , int b){
	
	cout << "a^b : " << (a^b) << endl; 
	cout << "a|b : " << (a|b) << endl;
}

int main(){
//	int arr[5] = {1,2,3,4,5}
//	cout << ans << " "<< endl;
//	cout << arr[4] << endl ;
//int n = 5;
//int space = 2*(n-1);
//        for(int i = 1 ;i<=n;i++){
//            for(int j = 1 ;j <= i;j++){
//                cout << j << " ";
//            }
//            for(int j = 1 ;j <= space;j++){
//                cout << " ";
//            }
//            for(int j=i;j>0;j--){
//                cout << j << " ";
//            }
//            cout << endl;
//            space -= 2;
//        }
//int a = 4;
//int b = 6;
//int ans = bitwiseOp(a,b);
//cout << ans << endl;
int n ;
cin >> n ;
 int ans = 1;
        for(int i = 1 ;i<=30 ; i++){
            ans = pow(i,3);
            cout << ans ;
            if(ans==n){
                return true ;
            }
        }
        return false;
}
