// problem link
// https://www.codechef.com/problems/MAKEZERO

#include <iostream>
#include <vector>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    long int n, val = 0, count = 0;
	    cin >> n;
	    vector<int> arr(n);

	    for(int i = 0; i< n;i++){
	        cin >> arr[i];
	        val |= arr[i];
	    }

	    while(val > 0){
	        if((val & 1) != 0){
	            count++;
	        }
	        val >>= 1;
	    }

	    cout << count << endl;


	}
	return 0;
}
