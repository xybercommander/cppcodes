#include <bits/stdc++.h>
// #include <boost/multiprecision/cpp_int.hpp> // int128_t, int256_t, etc
// using namespace boost::multiprecision;
using namespace std;
#define ll long long
#define kaj_start int main()
#define kaj_shesh return 0

kaj_start{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    char ch[100];
    cin.getline(ch, 100);

    vector<int> v(26, 0);

    for(int i = 0; i < (int)strlen(ch); i++){
        if(ch[i - 1] == ' '){
            // cout << (int)(ch[i] - 'a') << " ";
            v[(int)(ch[i] - 'a')]++;
        }
    }

    vector<int> v1(v.begin(), v.end());

    sort(v1.begin(), v1.end(), greater<int>());

    // for(int i = 0; i < 26; i++){
    //     cout << v1[i] << " ";
    // }

    char res = ' ';    

    for(int i = 0; i < 26; i++){
        if(v[i] == v1[0]){
            res = i + 'a';
            break;
        }
    }

    cout << res;


    kaj_shesh;
}
