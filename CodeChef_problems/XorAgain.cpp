// problem link
// https://www.codechef.com/problems/XORAGN


#include <iostream>
#include <vector>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    long int n, res = 0;
	    cin >> n;
	    vector<int> arr(n);

	    for(int i = 0; i < n;i++){
	        cin >> arr[i];
	        arr[i] *= 2;
	        res ^= arr[i];
	    }

	    cout << res << endl;
	}
	return 0;
}
