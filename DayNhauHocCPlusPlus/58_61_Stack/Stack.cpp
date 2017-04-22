#include "Stack.h"
bs::Stack::Stack(int size)
{
	size_ = size;
	counter_ = -1;
	stack_ = new int[size];
}
void bs::Stack::push(int val)
{
	stack_[++counter_] = val;
}
void bs::Stack::print()
{
	std::cout << "==" << std::endl;
	int temp = counter_;
	do
	{
		std::cout << "|| " << stack_[temp--] << std::endl;
	} while (temp >= 0);
}
int bs::Stack::pop()
{
	int temp = counter_--;
	return temp;
}
bool bs::Stack::full()
{
	return size_ = counter_ + 1;
}