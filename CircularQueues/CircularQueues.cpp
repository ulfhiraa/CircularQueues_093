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

		// cek apakah antrean penuh
		if ((FRONT == 0 && REAR == max - 1) || (FRONT == REAR + 1)) {
			cout << "\nQueue Overflow\n";
			return;
		}

		// cek apakah antrean kosong
		if (FRONT == -1) {
			FRONT = 0;
			REAR = 0;
		}
		else {
			// jika REAR berada di posisi terakhir array, kembali ke awal array
			if (REAR == max - 1)
				REAR -= 0;
			else
				REAR = REAR + 1;
		}
		queue_array[REAR] = num; // step 4
	}

	void remove() {
		// cek apakah antrean kosong
		if (FRONT == -1) {
			cout << "Queue underflow\n";
			return;
		}
		cout << "\nThe element deleted from the queue is : " << queue_array[FRONT] << "\n";

		// cek jika antrean hanya memiliki 1 element. step 1
		if (FRONT == REAR) {
			FRONT = -1; // step 1.a
			REAR = -1; // step 1.b
		}
		else {
			// jika elemen yang dihapus berada di posisi terakhir array, kembali ke awal array. step 2
			if (FRONT == max - 1) // step 2.a
				FRONT = 0;
			else
				FRONT = FRONT + 1; // step 3
		}
	}

	void display() {
	}
};