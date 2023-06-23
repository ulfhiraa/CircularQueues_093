#include <iostream>
using namespace std;

class Queues {
	int FRONT, REAR, max = 5;
	int queue_array[5];

public: 
	Queues() { // step 1. if the queue is empty 
		FRONT = -1;
		REAR = -1;
	}

	void insert() {
		int num;
		cout << "Enter the number : ";
		cin >> num;
		cout << endl;
	}
};