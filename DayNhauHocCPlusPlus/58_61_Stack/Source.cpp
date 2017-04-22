#include "stack.h"
int main()
{
	bs::Stack stack (10);
	for (int i = 0; i < 10; i++)
	{
		stack.push(i);
	}
	stack.print();
	if (stack.full()) std::cout << "Stack over follow.";
}