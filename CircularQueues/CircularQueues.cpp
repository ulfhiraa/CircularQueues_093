#include <iostream>
using namespace std;

class Queues {
	int FRONT, REAR, max = 5;
	int queue_array[5];

public: 
	Queues() { // step 2. if the queue is empty 
		FRONT = -1;
		REAR = -1;
	}

	void insert() {
		int num;
		cout << "Enter the number : ";
		cin >> num;
		cout << endl;
	}

	//cek apakah antrean penuh
	if ((FRONT == 0 && REAR == max - 1) || (FRONT == REAR + 1)) {
		cout << "\nQueue Overflow\n";
		return;
	}


};