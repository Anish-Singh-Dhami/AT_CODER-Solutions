#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void sol() {
    int n; cin >> n;
    vector<int> arr(n);
    for(auto &it : arr) cin >> it;
    sort(arr.begin(), arr.end());

    long long sum = 0;
    for(int i = 0; i < n; i++) sum += arr[i];
    ll rem = sum % n;
    ll f = sum / n;
    ll c = (sum + n - 1) / n;
    // cerr << sum << endl;
    ll ans = 0;
    for(int i = 0; i < n - rem; i++) {
        ans += abs(f - arr[i]);        
    }
    for(int i = n - rem; i < n; i++) {
        ans += abs(arr[i] - c);
    }
    cout << ans / 2 << "\n";
}

int main(){

    sol();

    return 0;
}   