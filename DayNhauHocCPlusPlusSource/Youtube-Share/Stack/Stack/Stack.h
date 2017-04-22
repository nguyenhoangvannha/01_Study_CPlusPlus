#pragma once

namespace bs {
	class Stack
	{
	public:
		Stack(int size = 10);
		~Stack(void);
	public:
		void Push(const int val);
		void Pop();
		int Top() const;
		bool Empty() const;
		int Size() const;
		bool Full() const;
		void Print() const;
	private:
		int size_;
		int * stack_;
		int counter_;
	};
}
