#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int n; cin >> n;
    vector<int> arr(n);
    for(auto &it : arr) cin >> it;
    int mx = *max_element(arr.begin() + 1, arr.end());
    int ans = max(0, mx - arr[0] + 1);
    cout << ans << "\n";
    return 0;
}