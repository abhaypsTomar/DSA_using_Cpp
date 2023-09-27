#include <bits/stdc++.h>

using namespace std;
int findLen(char ch[],int size){
	int length =0;
	for(int i=0;i<size;i++){
		if(ch[i]=='\0'){
			break;
		}
		else{
			length++;
		}
	}
	
	return length;
}
void swapCh(char ch[],int size){
	int i=0;
	int j=strlen(ch)-1;
	while(i<j){
		swap(ch[i],ch[j]);
		i++;
		j--;
	}
}
void UpperCaseCh(char ch[],int size){
	int index = 0;
	while(ch[index]!='\0'){
		char currtCh = ch[index];
		if(currtCh >= 'a' && currtCh <= 'z'){
			ch[index] = currtCh - 'a' + 'A';
		}
		index++;
	}
}
bool palindrome(char ch[],int size){
	int i=0;
	int j =size-1;
	while(i<=j){
		if(ch[i]==ch[j]){
			i++;
			j--;
		}
		else{
			return false;
		}
	}
	return true;
}
void replace(char ch[],int size){
	int index = 0;
	while(ch[index]!='\0'){
		if(ch[index]=='@'){
			ch[index] = ' ';
		}
		index++;
	}
}
int main(){
	char ch[100];
	int size =10;
	cin.getline(ch,100);
	int len = findLen(ch,size);
	bool ans = palindrome(ch,len);
	if(ans){
		cout << "true, palindrome" ;
	}
	else{
		cout << "false, no palindrome";
	}
//	swapCh(ch,10);
	
//	replace(ch,100);
//	UpperCaseCh(ch,10);

	
//	cout << ch;
//	cin.getline(ch,100);

	
	
//	
//	cout << len;
//	cout << strlen(ch);
	//input
//	cin >> ch;
	
//	cout << ch <<" ";
//	
//	for(int i=0;i<10;i++){
//		cout << "at index" << i << " " <<ch[i] <<endl;
//		
//	}
//	
//	char temp = ch[1];
//	int value = (int)temp;
//	cout << value;
}
