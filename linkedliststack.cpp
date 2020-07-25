#include <bits/stdc++.h>
using namespace std;

struct node{
	int item;
	node *next;
};

class Stack{
private:
	node *top;
public:
	Stack(){
		top = NULL;
	}
	void push(int element){
		node *t = new node;
		if(t == NULL){
			cout << "Stack is full";
		}else{
			t->item = element;
			t->next = top;
			top = t;
		}
	}
	int pop(){
		if(top == NULL){
			cout << "Stack is empty ";
			return -1;
		}else{
			node *t = top;
			int r = top->item;
			top = top->next;
			delete t;
			return r;
		}
	}
	~Stack(){
		node *t;
		while(top != NULL){
			t = top;
			top = top->next;
			delete t;
		}
	}
	void show(){
		if(top == NULL){
			cout << "Stack is empty";
		}else{
			for(node *t = top; t != NULL; t = t->next){
				cout << t->item << " ";
			}
		}
	}
};


int main(){

	Stack s;
	s.push(3);
	s.push(5);
	s.push(7);

	s.show();

	// cout << s.pop() << endl;
	// cout << s.pop() << endl;
	// cout << s.pop() << endl;
	// cout << s.pop() << endl;

	return 0;
}