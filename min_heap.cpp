#include <bits/stdc++.h>
using namespace std;

void swap(int *x, int *y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}

// class for the min binary heap
class MinHeap {
private:
	int *harr; // pointer to array of elements
	int capacity; // maximux size of the heap
	int heap_size; // current number of elements in the heap
public:
	// Constructor for initiating the size of the heap
	MinHeap(int cap) {
		heap_size = 0;
		capacity = cap;
		harr = new int[cap];
	}

	// a method to heapify a subtree with the root at a given index
	// it is assumed that the subtrees are already heapified
	void MinHeapify(int i) {
		int l = left(i);
		int r = right(i);
		int smallest = i;
		if(l < heap_size && harr[l] < harr[smallest])
			smallest = l;
		if(r < heap_size && harr[r] < harr[smallest])
			smallest = r;
		if(smallest != i) {
			swap(&harr[i], &harr[smallest]);
			MinHeapify(smallest);
		}
	}

	// to return the index of a parent node
	int parent(int i) {
		return (i - 1) / 2;	
	}

	// to return the index of the left child node
	int left(int i) {
		return (2 * i) + 1;
	}

	// to return the index of the right child node
	int right(int i) {
		return (2 * i) + 2;
	}

	// to extract the root as it is the minimum element of the heap
	int extractMin() {
		if(heap_size <= 0) return INT_MAX;
		if(heap_size == 1) {
			heap_size--;
			return harr[0];
		}

		int root = harr[0];
		harr[0] = harr[heap_size - 1];
		heap_size--;
		MinHeapify(0);

		return root;
	}

	// to decrease the key value at index i to new_val
	// it is assumed that the value of new_val is lower than harr[i]
	void decreaseKey(int i, int new_val) {
		harr[i] = new_val;
		while(i != 0 && harr[parent(i)] > harr[i]) {
			swap(&harr[i], &harr[parent(i)]);
			i = parent(i);					
		}
	}

	// returns the minimum element of the heap
	int getMin() {
		return harr[0];
	}

	// deletes the key value stored at index i
	void deleteKey(int i) {
		decreaseKey(i, INT_MIN);
		extractMin();
	}

	// insert a new key 'k'
	void insertKey(int k) {
		if(heap_size == capacity) {
			cout << "\nOverflow!! Cannot insert anymore keys";
			return;
		} else {
			heap_size++;
			int i = heap_size - 1;
			harr[i] = k;

			// fixing the min heap property if its violated
			while(i != 0 && harr[parent(i)] > harr[i]) {
				swap(&harr[i], &harr[parent(i)]);
				i = parent(i);
			}
		}
	}

	void showArr() {
		cout << "The keys are : ";
		for(int i = 0; i < heap_size; i++) {
			cout << harr[i] << " ";
		}cout << endl;
	}

};

int main() {
	MinHeap h(11);
	h.insertKey(45);
	h.insertKey(15);
	h.insertKey(5);
	h.insertKey(4);
	h.insertKey(3);
	h.insertKey(2);
	h.insertKey(1);	
	cout << h.extractMin() << " " << endl;
	h.showArr();
	cout << h.getMin() <<  " " << endl;
	h.decreaseKey(2, 1);
	cout << endl;
	h.showArr();
}