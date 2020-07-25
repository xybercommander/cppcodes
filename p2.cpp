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

int countNum(int arr[], int x, int n) 
{     
  /* get the index of first occurrence of x */
  int *low = lower_bound(arr, arr+n, x); 
  
  // If element is not present, return 0 
  if (low == (arr + n) || *low != x) 
     return 0; 
     
  /* Else get the index of last occurrence of x. 
     Note that we  are only looking in the  
     subarray after first occurrence */   
  int *high = upper_bound(low, arr+n, x);      
     
  /* return count */
  return high - low; 
} 

kaj_start{ // DIS DA MAIN FUNC
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
	    	
	    int n;
		cin >> n;
		n = (4 * n) - 1;
		
		int arr1[n], arr2[n];
		for(int i = 0; i < n; i++) {			
			cin >> arr1[i] >> arr2[i];
		}

		sort(arr1, arr1 + n);
		sort(arr2, arr2 + n);

		int ansX = 0, ansY = 0;
		for(int i = 0; i < n; i++) {
			int c = countNum(arr1, arr1[i], n);
			if(c % 2 == 1) {
				ansX = arr1[i];
				break;
			}
		}

		for(int i = 0; i < n; i++) {
			int c = countNum(arr2, arr2[i], n);
			if(c % 2 == 1) {
				ansY = arr2[i];
				break;
			}
		}

		cout << ansX << " " << ansY << endl;
	
    }

    kaj_shesh;
}
