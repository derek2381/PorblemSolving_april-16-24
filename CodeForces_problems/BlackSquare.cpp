// problem link
// https://codeforces.com/problemset/problem/431/A

#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> arr(5, 0);

    for(int i = 1;i <= 4;i++){
        cin >> arr[i];
    }

    long int count = 0;

    string str;
    cin >> str;
    for(char i : str){
        int num = i - '0';
        count += arr[num];
    }

    cout << count;

}
