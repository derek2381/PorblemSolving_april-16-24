// problem link
// https://codeforces.com/problemset/problem/160/A

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    int total = 0, sum = 0, count = 0;
    for(int i = 0; i< n;i++){
        cin >> arr[i];
        total += arr[i];
    }

    sort(arr.begin(), arr.end());

    for(int i = n-1;i >= 0;i--){
        sum += arr[i];
        total -= arr[i];
        count++;
        if(sum > total){
            break;
        }
    }

    cout << count;
}
