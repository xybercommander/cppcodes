#include <bits/stdc++.h>
using namespace std;
const int size = 10;

class Stack{
private:
    int top, stk[size];
public:
    Stack(){
        top = -1;
    }
    void push(int item){
        if(top == size - 1){
            cout << "Stack is full";
        }else{
            stk[++top] = item;
        }
    }
    int pop(){
        if(top == -1){
            cout << "Stack is empty";
            return -1;
        }
        return stk[top--];
    }
    void show(){
        if(top == -1){
            cout << "Stack is empty";
        }else{
            for(int i = 0; i <= top; i++){
                cout << stk[i] << " ";
            }
        }
    }
};


int main(){

    Stack s;
    int element, ch;

    while(ch != 4){
        cout << "1.Push" << endl;
        cout << "2.Pop" << endl;
        cout << "3.Display" << endl;
        cout << "4.Quit" << endl;
        cin >> ch;
        if(ch == 1){
            cout << "\nEnter the element you wanna push : ";
            cin >> element;
            s.push(element);
        }else if(ch == 2){
            element = s.pop();
            cout << "The popped element is : " << element << endl;
        }else if(ch == 3){
            cout << "The elements of the stack are : ";
            s.show();
        }
        cout << endl;
    }

    return 0;
}
