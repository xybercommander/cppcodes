#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define kaj_start int main()
#define kaj_shesh return 0

kaj_start{
    ll int t;
    cin >> t;
    while(t--){
        ll int n;
        cin >> n;
        ll int arr[n + 1];
        for(int i = 1; i <= n; i++){
            cin >> arr[i];
        }

        ll int dp[n + 1];
        dp[0] = 0;
        dp[1] = arr[1];

        for(int i = 2; i <= n; i++){
            dp[i] = max(dp[i - 1] + arr[i] * i, dp[i - 2] + arr[i] * (i - 1) + arr[i - 1] * i);
        }

        cout << dp[n] << endl;

    }
    kaj_shesh;
}
