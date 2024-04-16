// problme link
// https://www.codechef.com/problems/XORPAL


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;

	    string str;
	    cin >> str;

	    int count0 = 0, count1 = 0;

	    for(char i : str){
	        if(i == '0'){
	            count0++;
	        }else{
	            count1++;
	        }
	    }


	    if(n%2 == 0){
	        if(count0 % 2 == 0 && count1 % 2 == 0){
	            cout << "YES\n";
	        }else if(count1 == count0){
	            cout << "YES\n";
	        }else{
	            cout << "NO\n";
	        }
	    }else{
	        cout << "YES\n";
	    }
	}
	return 0;
}
