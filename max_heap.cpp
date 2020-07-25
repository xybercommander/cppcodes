#include <bits/stdc++.h>
using namespace std;

void swap(int *x, int *y){
	int temp = *x;
	*x = *y;
	*y = temp;
}

class Maxheap{
private:
	int *harr; //pointer to the element of the harr
	int capacity; //max size of the heap
	int heap_size; //current size of the heap

public:
	Maxheap(int capacity);
	/*creates a constructor which will store the max
	  size of the heap and creates a heap obj*/

	int parent(int i){
		return (i - 1) / 2;
	}

	int left(int i){
		return (2 * i) + 1;
	}

	int right(int i){
		return (2 * i) + 2;
	}

	int extractMax(); //extracts the root element(max)

	void decreaseKey(int i, int new_val); //decreases ith value to new_val
	void increaseKey(int i, int new_val); //increases ith value to new_val

	int getMax(){
		return harr[0];
	}

	void deleteKey(int i);

	void insertKey(int k);

	void showheap(){
		for(int i = 0; i < heap_size; i++){
			cout << harr[i] << " ";
		}cout << endl;
	}

};

Maxheap :: Maxheap(int cap){
	heap_size = 0;
	capacity = cap;
	harr = new int[cap];
}

void Maxheap :: insertKey(int k){
	if(heap_size == capacity){
		cout << "\nOverflow : Could not insert key\n";
		return;
	}

	heap_size++;
	int i = heap_size - 1;
	harr[i] = k;

	while(i != 0 && harr[parent(i)] > harr[i]){
		swap(&harr[i], &harr[parent(i)]);
		i = parent(i);
	}	
}