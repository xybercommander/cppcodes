#include <bits/stdc++.h>
using namespace std;
const int size = 10;

class Queue{
private:
    int q[size], f, r;
public:
    Queue(){
        f = r = 0;
    }
    void push(int item){
        if(r == size){
            cout << "Queue is full" << endl;
        }else{
            q[r++] = item;
        }                                                                                 )
    }
    int pop(){
        if(f == r){
            cout << "Queue is empty";
        }else{
            return q[f++];
        }
    }
    void show(){
        if(f == r){
            cout << "Queue is empty";
        }else{
            for(int i = f; i < r; i++){
                cout << q[i] << " ";
            }
        }
    }
};

int main(){

    Queue Q;
    int item, ch;

    while(ch != 4){
        cout << "1.Push" << endl;
        cout << "2.Pop" << endl;
        cout << "3.Display" << endl;
        cout << "4.Quit" << endl;
        cin >> ch;
        if(ch == 1){
            cout << "Enter the element you want to push : ";
            cin >> item;
            Q.push()
        }else if(ch == 2){
            item = Q.pop();
            cout << "Enter the element popped : " << item;
        }else if(ch == 3){
            Q.show();
        }
    }

    return 0;
}
