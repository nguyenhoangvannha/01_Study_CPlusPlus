#include <iostream>
#include "Node.h"
// Double Link List
namespace {
	bool HasNode(int inputValue, const Node * const inputNode){
		// Case inputNode is the last node
		if ( !inputNode->HasNext() ) {
			return inputValue == inputNode->GetValue();
		}

		// Other cases
		const Node * currentNode = inputNode;
		do 
		{
			if (currentNode->GetValue() == inputValue) {
				return true;
			} else {
				currentNode = currentNode->GetNext();
			}
		} while (currentNode->HasNext());

		// False case
		return false;
	}
	bool HasNodeRecursive(int inputValue, const Node * node) {
		// diem dung 1, dung khi tim thay
		if ( node->GetValue() == inputValue )
			return true;
		// diem dung 2, dung khi khong thay j het
		if ( !node->HasNext() )
			return false;

		node = node->GetNext();
		HasNodeRecursive(inputValue, node);
	}
}
int main()
{
	Node * first = new Node;
	first->SetValue(0);
	Node * currentNode = first;
	
	for ( int i = 1; i < 4; i++ ){
		Node * newNode = new Node;
		newNode->SetValue(i);
		// update List
		currentNode->SetNext(newNode);
		newNode->SetPrev(currentNode);
		currentNode = newNode;
	}

	int nodeValue = 0;
	std::cout << "Finding node number : ";
	std::cin >> nodeValue;
	std::cout << "Looking for node " << nodeValue << " ...\n";

	if (HasNode(nodeValue, first)) {
		std::cout << "Double LinkList has node " << nodeValue;
	} else {
		std::cout << "Double LinkList DOES NOT have node " << nodeValue;
	}

	std::cout << std::endl << std::endl;
	std::cout << "Looking for node " << nodeValue << " RECURSIVELY ...\n";

	if (HasNodeRecursive(nodeValue, first)) {
		std::cout << "Double LinkList has node " << nodeValue;
	} else {
		std::cout << "Double LinkList DOES NOT have node " << nodeValue;
	}
	return 0;
}
