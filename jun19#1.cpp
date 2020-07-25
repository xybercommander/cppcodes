#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define kaj_start int main()
#define kaj_shesh return 0

kaj_start{
    int t;
    cin >> t;
    while(t--){
        int n;
        string s;

        cin >> n >> s;

        float d = n, percentage = 0.00, new_percentage = 0.00, p;
        int total = 0, flag = 0;

        for(int i = 0; i < n; i++){
            if(s[i] == 'P'){
                p++;
            }
        }

        //Case 1
        if(n > 0 && n < 5){
            percentage = p/d;
            if(percentage >= 0.75){
                cout << 0 << endl;
            }else{
                cout << -1 << endl;
            }

            p = 0;
            d = 0;
            percentage = 0.00;
        }
        //Case 2
        else if(n == 5){
            percentage = p/d;
            if(percentage >= 0.75){
                cout << 0;
            }else{
                if(s[2] == 'P'){
                    cout << -1 << endl;
                }else if(s[2] == 'A' && ((s[0] == 'P' || s[1] == 'P') && (s[3] == 'P' || s[4] == 'P'))){
                    s[2] = 'P';
                    p += 1;
                    new_percentage = p/d;
                    if(new_percentage >= 0.75){
                        cout << 1 << endl;
                    }else{
                        cout << -1 << endl;
                    }
                }
            }
            p = 0;
            d = 0;
            percentage = 0.00;
            new_percentage = 0.00;
        }
        //Case 3
        else if(n > 5){
            percentage = p/d;
            if(percentage >= 0.75){
                cout << 0 << endl;
            }else{
                for(int i = 2; i < n - 2; i++){
                    if(s[i] == 'A' && ((s[i - 1] == 'P' || s[i - 2] == 'P') && (s[i + 1] == 'P' || s[i + 2] == 'P'))){
                        total++;
                        p++;

                        new_percentage = p/d;
                        if(new_percentage >= 0.75){
                            flag = 1;
                            break;
                        }
                    }
                }
                if(flag == 1){
                    cout << total << endl;
                }else{
                    cout << -1 << endl;
                }
            }
            p = 0;
            d = 0;
            percentage = 0.00;
            new_percentage = 0.00;
            flag = 0;
            total = 0;
        }
    }
    kaj_shesh;
}
