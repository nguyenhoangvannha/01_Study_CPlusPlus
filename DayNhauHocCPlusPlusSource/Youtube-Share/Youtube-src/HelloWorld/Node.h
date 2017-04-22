#pragma once

class Node
{
public:
	Node(void);
	~Node(void);
	bool HasNext() const;
	bool HasPrev() const;
	Node * GetNext() const;
	Node * GetPrev() const;
	void SetNext(Node * const next);
	void SetPrev(Node * const prev);
	void SetValue(int val);
	int GetValue() const;
private:
	int value_;
	Node * next_;
	Node * prev_;
};
