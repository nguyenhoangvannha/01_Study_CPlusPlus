#include "Stack.h"
#include <iostream>

bs::Stack::Stack(int size)
{
	size_ = size;
	stack_ = new int[size];
	counter_ = -1;
}

bs::Stack::~Stack(void)
{
	delete[] stack_;
}

void bs::Stack::Push( const int val )
{
	if ( !this->Full() )
		stack_[++counter_] = val;
	else
		std::cout << "Stack is full, can not push" << std::endl; 
}

void bs::Stack::Pop()
{
	if ( !this->Empty() )
		--counter_;
	else
		std::cout << "Stack is empty, can not pop" << std::endl; 
}

int bs::Stack::Top() const
{
	return stack_[counter_];
}

bool bs::Stack::Empty() const
{
	return counter_ == -1;
}

bool bs::Stack::Full() const
{
	return counter_ == size_-1;
}

int bs::Stack::Size() const
{
	return size_;
}

void bs::Stack::Print() const
{
	int counter = counter_;
	std::cout << "---" << std::endl;
	while ( counter >= 0  ) {
		std::cout << "| "  << stack_[counter--] << std::endl;
	}
	std::cout << "---" << std::endl;
}
