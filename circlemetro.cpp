#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define kaj_start int main()
#define kaj_shesh return 0
#define yes cout<<"YES"
#define no cout<<"NO"

kaj_start{
    int n,a,x,b,y;
    cin >> n >> a >> x >> b >> y;
    bool e = false;
    while(e == false){
        if(a == b){
            e = true;
            break;
        }
        if(a == x || b == y){
            break;
        }
        a++;
        b--;
        if(a == n + 1){
            a = 1;
        }
        if(b == 0){
            b = n;
        }
    }
    if(e == true){
        yes;
    }else{
        no;
    }
    kaj_shesh;
}
