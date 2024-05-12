/*
    Author: Vasanth Reddy
*/
#include <bits/stdc++.h>
#define int long long
using namespace std;
const int mod = 998244353;
template <typename T>
istream &operator>>(istream &istream, vector<T> &v){for (auto &it : v) cin >> it; return istream;}
template <typename T>
ostream &operator<<(ostream &ostream, vector<T> &v){for (auto &it : v) cout << it << ' '; return ostream;}
template <typename T>
void sort(vector<T> &a) { sort(a.begin(),a.end()); }

void solveIt(){
    int ans = 0;
    int n = 1000;
    for(int i = 1; i < n; i++) {
        if(i % 3 == 0 || i % 5 == 0) {
            ans += i;
        }
    }
    cout << ans << '\n';
}

#undef int
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tcs=1;
    // cin >> tcs;
    for(int i=1;i<=tcs;i++){
        solveIt();
    }
}