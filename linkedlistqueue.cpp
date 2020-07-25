#include <bits/stdc++.h>
using namespace std;

struct node{
	int item;
	node *next;
};

class Queue{
private:
	node *front, *rear;
public:
	void addQ(int item){
		node *t = new node;
		if(t == NULL){
			cout << "Queue is full";
		}else{
			t->item = item;
			t->next = NULL;
			if(rear == NULL){
				rear = t; front = t;
			}else{
				rear->next = t;
				rear = t;
			}                                                                                                  
		}
	}
	int delQ(){
		if(front == NULL){
			cout << "Queue is empty ";
			return 0;
		}else{
			node *t = front;
			int r = front->item;
			front = front->next;
			if(front == NULL){
				rear = NULL;
			}
			delete t;
			return r;
		}
	}
};

int main(){

	Queue q;

	q.addQ(3);
	q.addQ(5);
	q.addQ(7);

	cout << q.delQ() << endl;
	cout << q.delQ() << endl;
	cout << q.delQ() << endl;
	cout << q.delQ() << endl;

	return 0;
}