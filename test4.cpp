#include <bits/stdc++.h>
using namespace std;

struct NODE
{
	char name[30];
	NODE *Next;
};

class Queue{
private:
	NODE *front, *rear;
public:
	Queue(){
		front = NULL;
		rear = NULL;
	}

	void addData(){
		char newName[30];
		NODE *t = new NODE;
		if(t == NULL){
			cout << "Memory not available" << endl;		
		}else{
			cout << "The new name : ";
			cin.getline(newName, 30);
			strcpy(t->name, newName);
			t->Next = NULL;
			if(rear == NULL){
				rear = t;
				front = t;
			}else{
				rear->Next = t;
				rear = t;
			}
		}
	}

	void delData(){
		if(front == NULL){
			cout << "Queue is empty" << endl;
		}else{
			NODE *t = front;
			char newName[30];
			strcpy(newName, front->name);
			front = front->Next;
			if(front == NULL){
				rear = NULL;
			}
			delete t;
			cout << "The deleted name is : " << newName << endl;
		}
	}

	void showData(){
		if(front == NULL){
			cout << "Queue is empty" << endl;
		}else{
			cout << "The names in the queue are : ";
			for(NODE *t = front; t != NULL; t = t->Next){
					cout << t->name << " ";
			}cout << endl;
		}
	}
};


int main(){

	Queue q;
	q.addData();
	q.addData();
	q.addData();

	q.showData();

	q.delData();
	q.showData();
	q.delData();
	q.showData();
	q.delData();
	q.showData();

	return 0;
}