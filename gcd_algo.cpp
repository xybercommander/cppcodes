#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define kaj_start int main()
#define kaj_shesh return 0

int gcd(int a, int b){
    //If one is 0 then the gcd == the other no.
    if(a == 0){
        return b;
    }
    if(b == 0){
        return a;
    }

    //Base case
    if(a == b){
        return a;
    }

    if(a > b){
        return gcd(a - b, b);
    }else{
        return gcd(a, b - a);
    }
}

kaj_start{
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b);
    kaj_shesh;
}
