#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define kaj_start int main()
#define kaj_shesh return 0

kaj_start{
    ll int n,num;
    vector<ll int> v;
    int arr[9];
    cin >> n;
    cin >> num;
    while(num != 0){
        int r = num % 10;
        v.push_back(r);
        num = num/10;
    }
    reverse(v.begin(),v.end());
    for(int i = 0;i < 9;i++){
        cin >> arr[i];
    }
    for(int i = 0;i < n;i++){
        if(v[i] <= arr[v[i] - 1]){
            v[i] = arr[v[i] - 1];
        }
    }
    for(int i = 0;i < n;i++){
        cout << v[i];
    }
    kaj_shesh;
}
