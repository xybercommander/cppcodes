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

kaj_start{ // DIS DA MAIN FUNC
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
	
    	int n, b, m;
    	cin >> n >> b >> m;
    	vector<int> v(m);
    	for(int i = 0; i < m; i++) {
    		cin >> v[i];
    	}

    	deque<int> data;
    	for(int i = 0; i < n; i++) {
    		data.push_back(i);
    	}

    	int ans = 0;
    	for(int j = 0; j < m; j++) {
    		bool flag = false;
    		for(int i = 0; i < 3; i++) {
    			if(v[j] == data[i]) {
    				flag = true;
    				ans++;    				
    			}

    			if(flag == true) {
    				break;
    			}
    		}
    		
    		if(flag == false) {
    			j--;
    			data.pop_front();
    			data.pop_front();
    			data.pop_front();
    		}
    		cout << ans << endl;
    		// for(int k : data) {
    		// 	cout << k << " ";
    		// }cout << endl;
    	}

    	// cout << ans << endl;
    	
	
    }

    kaj_shesh;
}
