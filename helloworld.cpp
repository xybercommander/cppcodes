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
    
        int n;
        cin >> n;
        vector<int> v;
        for(int i = 1; i <= pow(n, 2); i++) {
            v.push_back(i);
            // cout << i << endl;
        }

        if(n % 2 == 1) {
            for(int i = 0; i < n * n; i++) {
                cout << v[i] << " ";
                if((i + 1) % n == 0) {
                    cout << endl;
                }
            }
            cout << endl;
        } else {
            continue;
        }
        
    
    }

    kaj_shesh;
}
