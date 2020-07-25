#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int x = 0; x < t; x++){
        int d;
        string s;
        cin >> d >> s;
        int p = 0;
        for(int i = 0; i < d; i++){
            if(s[i] == 'P'){
                p++;
            }
        cout << p;
        }
    }
    return 0;
}
