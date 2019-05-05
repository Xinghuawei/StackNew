#ifndef STACK
#define STACK

#include <iostream>
#include <stdexcept>


static constexpr int MAX{ 10 };

using namespace std;

class Stack {
private:
	int arr[MAX];
	int high;

public:
	Stack();

	void push(int);

	void pop();

	int top() const;

	bool empty() const;

	bool full() const;

	void print() const;

	friend std::ostream& operator<<(std::ostream&, const Stack&);


};



#endif // !STACK

