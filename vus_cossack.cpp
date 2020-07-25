#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define kaj_start int main()
#define kaj_shesh return 0

bool Solve(vector<char> c, string b){
    int count = 0;
    for(int i = 0; i < b.size(); i++){
        if(c[i] != b[i]){
            count++;
        }
    }
    if(count % 2 == 0){
        return true;
    }else{
        return false;
    }
}

kaj_start{
    // string a, b;
    int x, y;
    // cin >> a >> b;
    vector<int> a, b;
    for(int k = 0;)


    int num = a.size() - b.size() + 1;
    int start = 0, end = b.size(), ans = 0;

    while(num--){
        vector<char> c;
        for(int i = start; i < end; i++){
            c.push_back(a[i]);
        }

        // for(int i = 0; i < b.size(); i++){
        //     cout << c[i];
        // }
        // cout << endl;

        if(Solve(c, b) == true){
            ans++;
        }

        start++;
        end++;

    }

    cout << ans;

    kaj_shesh;
}
