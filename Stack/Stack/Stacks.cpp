#include "Stack.h"



Stack::Stack() {
	high = -1;
}

void Stack::push(int a) {
	if (full()) {
		return;
	}
	else {
		high++;
		arr[high] = a;
	}
}

void Stack::pop() {
	if (empty()) {
		return;
	}
	else {
		high--;
	}
}

int Stack::top() const {
	return arr[high];
}

bool Stack::empty() const {
	if (high == -1) {
		cout << "stack is empty" << endl;
		return true;
	}
	else {
		return false;
	}
}

bool Stack::full() const {
	if (high >= (MAX-1)) {
		cout << "stack is full" << endl;;
		return true;
	}
	return false;


}

void Stack::print() const {
	for (int i = 0; i <= high; i++) {
		cout << arr[i] << endl;
	}
}

std::ostream& operator<<(std::ostream& os, const Stack& obj) {

	for (int i = 0; i <= obj.high; i++) {
		cout << obj.arr[i] << endl;
	}
	return os;
}