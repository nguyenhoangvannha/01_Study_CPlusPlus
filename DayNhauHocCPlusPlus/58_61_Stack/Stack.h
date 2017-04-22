#pragma once
#include "iostream"
namespace bs {
	class Stack {
	public:
		Stack(int size = 10);
	private:
		int size_;
		int* stack_;
		int counter_;
	public:
		void push(int val);
		void print();
		int pop();
		bool full();
	};
}
