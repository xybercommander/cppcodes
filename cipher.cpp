#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define kaj_start int main()
#define kaj_shesh return 0
#define yes cout<<"YES"
#define no cout<<"NO"

kaj_start{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;
    string new_s = "";

    if(s.size() == 1){
        cout << s;
    }else if(s.size() % 2 == 0){
        for(int i = 0; i < s.size(); i++){
            char ans;
            if(i % 2 == 0){
                ans = s[s.size() - (i/2) - 1];
                new_s += ans;
            }else{
                ans = s[i/2];
                new_s += ans;
            }
        }
        reverse(new_s.begin(),new_s.end());
        cout << new_s;
    }else if(s.size() % 2 != 0){
        for(int i = 0; i < s.size(); i++){
            char ans;
            if(i % 2 == 0){
                ans = s[i/2];
                new_s += ans;
            }else{
                ans = s[s.size() - (i/2) - 1];
                new_s += ans;
            }
        }
        reverse(new_s.begin(),new_s.end());
        cout << new_s;
    }
    kaj_shesh;
}
