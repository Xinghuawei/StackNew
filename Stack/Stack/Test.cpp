#include "Stack.h"
#pragma once


int main() {
	Stack c;
	int i{ 0 };
	cout << "push numbers:" << endl;

	while (!c.full()) {
		c.push(i);
		i++;
	}

	c.print();

	system("pause");

	return 0;
}