#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define kaj_start int main()
#define kaj_shesh return 0

kaj_start{
    int n,m,r;
    cin >> n >> m >> r;
    vector<int> buy,sell;
    int s,b;
    for(int i = 0;i < n;i++){
        cin >> s;
        buy.push_back(s);
    }
    for(int i = 0;i < m;i++){
        cin >> b;
        sell.push_back(b);
    }
    int ans = r,max_stocks = 0,money = 0;
    sort(buy.begin(),buy.end());
    sort(sell.begin(),sell.end());

    //in the morning
    max_stocks = (r / buy[0]);
    money = max_stocks * buy[0];
    ans -= money;

    //in the evening
    int final_money = max_stocks * sell[m - 1];
    ans += final_money;

    if(ans > r){
        cout << ans;
    }else{
        cout << r;
    }
    kaj_shesh;
}
