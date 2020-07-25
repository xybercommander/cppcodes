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

    

    kaj_shesh;
}
