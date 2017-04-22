#include "Node.h"
#include <iostream>

Node::Node(void)
{
	this->next_ = 0;
	this->prev_ = 0;
	this->value_ = 0;
}

Node::~Node(void)
{
}

bool Node::HasNext() const
{
	return this->next_ != 0;
}

bool Node::HasPrev() const
{
	return this->prev_ != 0;
}

Node * Node::GetNext() const
{
	if (this->HasNext()) {
		return this->next_;
	} else {
		return 0;
	}
}

Node * Node::GetPrev() const
{
	if (this->HasPrev()) {
		return this->prev_;
	} else {
		return 0;
	}
}

void Node::SetNext( Node * const next )
{
	std::cout << value_ << " -> " << next->value_ << std::endl;
	this->next_ = next;
}

void Node::SetPrev( Node * const prev )
{
	std::cout << prev->value_ << " <- " << value_ << std::endl;
	this->prev_ = prev;
}

void Node::SetValue( int val )
{
	this->value_ = val;
}

int Node::GetValue() const
{
	return this->value_;
}
