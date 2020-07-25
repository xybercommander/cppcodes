#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define kaj_start int main()
#define kaj_shesh return 0

int count_occurrences(vector<int> v, int n, int x){

    if(n == 0) return 0;
    if(v[n - 1] != x){
        return count_occurrences(v, n - 1, x);
    }
    return 1 + count_occurrences(v, n - 1, x);
}

kaj_start{
    vector<int> v;
    int n, x, a;
    cout << "Enter the size of the array : ";
    cin >> n;
    cout << "\nEnter the elements : ";
    for(int i = 0; i < n; i++){
        cin >> x;
        v.push_back(x);
    }
    cout << "Enter the element you want to see how many time occurs : ";
    cin >> a;
    cout << endl << "No of occurrences : " << count_occurrences(v, n, a) << endl;
    kaj_shesh;
}
