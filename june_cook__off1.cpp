#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define kaj_start int main()
#define kaj_shesh return 0

kaj_start{
    int t;
    cin >> t;

    while(t--){
        int n;
        string s, t;
        cin >> n >> s >> t;

        int flag = 0, total = 0;

        for(int i = 0; i < n; i++){
            if(flag == 0){
                if(t[i] == s[i]){
                    total++;
                }else if(t[i] != s[i]){
                    if(t[i] == 'N'){
                        continue;
                    }else{
                        flag = 1;
                    }
                }
            }else{
                flag = 0;
                continue;
            }
        }

        cout << total << endl;
    }

    kaj_shesh;
}
