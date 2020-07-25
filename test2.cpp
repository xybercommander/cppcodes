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
        vector<int> v(n);
        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }

        if(n == 1) {
            (v[0] == 10 || v[0] == 15) ? cout << "NO" << endl : cout << "YES" << endl;
        } else {


            int coin5 = 0, coin10 = 0, coin15 = 0;
            if(v[0] != 5) {
                cout << "NO" << endl;
            } else {

                bool flag = true;
                for(int i = 0; i < n; i++) {
                    if(v[i] == 5) {
                        coin5++;
                    } else if(v[i] == 10) {
                        if(coin5 != 0) {
                            coin5--;
                            coin10++;
                        } else {
                            flag = false;
                            break;
                        }
                    } else if(v[i] == 15) {
                        if(coin10 != 0) {
                            coin10--;
                            coin15++;                
                        } else if(coin10 == 0) {
                            if(coin5 > 1) {
                                coin5 -= 2;
                                coin15++;
                            } else {
                                flag = false;
                                break;
                            }
                        }
                        else {
                            flag = false;
                            break;   
                        }
                    }
                    // cout << coin5 << " " << coin10 << " " << coin15 << endl;
                }

                flag == true ? cout << "YES" << endl : cout << "NO" << endl;
            }


        }
    
    }

    kaj_shesh;
}
