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

void transpose(vector<vector<int> > &b)
{
    if (b.size() == 0)
        return;

    vector<vector<int> > trans_vec(b[0].size(), vector<int>());

    for (int i = 0; i < b.size(); i++)
    {
        for (int j = 0; j < b[i].size(); j++)
        {
            trans_vec[j].push_back(b[i][j]);
        }
    }

    b = trans_vec;    // <--- reassign here
}

kaj_start{ // DIS DA MAIN FUNC
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        vector<int> r(n);
        for(int i = 0; i < n; i++) {
            cin >> r[i];
        }

        vector<vector<int>> v;
        vector<map<int, int>> scores;
        for(int i = 0; i < n; i++) {
            vector<int> v1;
            map<int, int> scoreMap;
            for(int j = 0; j < m; j++) {
                int x;
                cin >> x;
                r[i] += x;
                v1.push_back(r[i]);
                scoreMap.insert(pair<int, int>(r[i], 0));
            }
            v.push_back(v1);
            scores.push_back(scoreMap);
        }

        transpose(v);

        vector<vector<int>> ranks;

        for(int i = 0; i < n; i++) {
            vector<int> v1 = v[i];
            int maxrank = 0;
            for(int j : v1) {
                maxrank = max(j, maxrank);
            }

            int counter = 1;
            sort(v1.begin(), v1.end(), greater<int>());

            for(int j = 0; j < v1.size(); j++) {
                if(v1[j] == maxrank) {
                    
                }
            }
        }


    }

    kaj_shesh;
}
