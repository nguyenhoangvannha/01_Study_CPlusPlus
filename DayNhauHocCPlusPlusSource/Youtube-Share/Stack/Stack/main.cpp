#include <iostream>
#include "Stack.h"

int main()
{
	bs::Stack stack = bs::Stack(10);
	stack.Push(1);
	stack.Push(2);
	stack.Push(3);
	stack.Push(4);
	stack.Push(5);
	stack.Push(6);
	stack.Push(7);
	stack.Push(8);
	stack.Push(9);
	stack.Push(10);
	stack.Push(11);
	stack.Print();

	std::cout << std::endl;
	stack.Pop();
	stack.Pop();
	stack.Pop();
	stack.Pop();
	stack.Pop();
	stack.Pop();
	stack.Pop();
	stack.Pop();
	stack.Pop();
	stack.Pop();
	stack.Pop();
	stack.Print();
	stack.Push(11);
	stack.Push(-1);
	stack.Print();
}
