#include <bits/stdc++.h>
// #include <boost/multiprecision/cpp_int.hpp> // int128_t, int256_t, etc
// using namespace boost::multiprecision;
using namespace std;
#define kaj_start int main()
#define kaj_shesh return 0
#define ll long long

const ll M = 1000000007;

string toBinary(int n)
{
    string r;
    while(n != 0){
        r = (n % 2 == 0 ? "0" : "1" ) + r;
        n /= 2;
    }
    return r;
}

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

kaj_start{ // DIS DA MAIN FUNC
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        ll n, m, x, y;
        cin >> n >> m >> x >> y;
        ll arr[n][m];
        
        ll w = 0;
        if(y - x > x) {
            w = x;
        } else {
            w = y - x;
        }

        // if(x + w > y) {
        //     while(w + x > y) {
        //         w -= (x + w) - y;
        //     }
        // }
        if(w + x > y) {
            w -= (x + w) - y;
        }

        if(y >= x * 2) {
            w = y - x;
        }

        for(ll i = 0; i < n; i++) {
            for(ll j = 0; j < m; j++) {
                if(i % 2 == 0) {
                    if(j % 2 == 0) {
                        arr[i][j] = x;
                    } else {
                        arr[i][j] = w;
                    }
                } else {
                    if(j % 2 == 0) {
                        arr[i][j] = w;
                    } else {
                        arr[i][j] = x;
                    }
                }
            }
        }

        ll sum = 0;
        for (ll i = 0; i < n; ++i)
        {
            for(ll j = 0; j < m; ++j) {
                cout << arr[i][j] << " ";
                sum += arr[i][j];
            }cout << endl;
        }
        cout << sum << endl;
    }

    kaj_shesh;
}
