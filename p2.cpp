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

int binaryToDecimal(string s) 
{ 
    double j = 0;
    for(int i = 0; i < s.size(); i++) {
    	if(s[i] == '1') {
    		j += pow(2, s.size() - 1 - i);
    	}
    }

    return (int)j;
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
		int n;
		cin >> n;
		std::vector<int> v(n);
		for(int i = 0; i < n; i++) {
			cin >> v[i];
		}

		std::vector<string> nums;
		for(int i : v) {
			string s = toBinary(i);
			if(s[0] == '1') {
				nums.push_back(s);
			}
		}

		// string x = nums[0], y = nums[nums.size() - 1];
		// nums[0] += y;
		// nums[nums.size() - 1] += x;

		int ans = 0;
		for(int i = 0; i < nums.size(); i++) {
			for(int j = i + 1; j < nums.size(); j++) {
				string x = nums[i];
				string y = nums[j];
				nums[i] += y;
				nums[j] += x;
				int tempMax = max(binaryToDecimal(nums[i]), binaryToDecimal(nums[j]));
				int tempMin = min(binaryToDecimal(nums[i]), binaryToDecimal(nums[j]));
				ans = max(ans, tempMax - tempMin);
				// cout << tempMax - tempMin << endl;
				nums[i] = x;
				nums[j] = y;
			}
		}
		cout << ans << endl;
		
    }

    kaj_shesh;
}
