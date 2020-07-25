#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define kaj_start int main()
#define kaj_shesh return 0

int add_digits(int n){
    int sum = 0;

    if(n == 0){
        return 0;
    }else{
        sum = n % 10 + add_digits(n/10);
        return sum;
    }
}

kaj_start{
     ios_base::sync_with_stdio(true);
    cin.tie(0);
    cout.tie(0);

    int t;
    scanf("%d", &t);

    while(t--){
        ll int n;
        scanf("%lld", &n);

        long long int ans = 0, result = 0;
        int total = 0, flag = 0;
        int i = 19;

        while(flag == 0){
            ans = add_digits(i);
            if(ans % 10 == 0){
                total++;
                if(total == n){
                    result = i;
                    flag = 1;
                    break;
                }
            }
            i++;
        }

        printf("%lld\n", result);
        ans = 0;
        result = 0;
        total = 0;
    }
    kaj_shesh;
}
