#include <bits/stdc++.h>
// #include <boost/multiprecision/cpp_int.hpp> // int128_t, int256_t, etc
// using namespace boost::multiprecision;
using namespace std;
#define ll long long
#define kaj_start int main()
#define kaj_shesh return 0

int factorial(int n){
    int dp[n];
    dp[0] = 1;
    dp[1] = 1;
    for(int i = 2; i <= n; i++){
        dp[i] = i * dp[i - 1];
    }
    return dp[n];

}

kaj_start{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end());

    int ans = 1;

    for(int i = 0; i < n; i++){
        int count = 1;

        for(int j = i + 1; j < n; j++){
            if(v[i] == v[j]){
                count++;
            }
        }

        ans *= factorial(count);

        if(count > 1){
            i += count - 1;
        }
    }

    cout << ans;


    kaj_shesh;
}
