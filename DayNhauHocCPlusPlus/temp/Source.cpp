#define _CRT_SECURE_NO_WARNINGS
#include "SinhVientemp.h"
#include "stdlib.h"
namespace
{
	std::string createSinhVienName(std::string name, int i) {
		char a;
		_itoa(i, &a, 10);
		return name + a;
	}
	void removeSinhVienByMSSV(SinhVien* &first, int mssv) {
		if (first->getMSSV() == mssv) {
			first = first->getNext();
		}
		else {
			SinhVien* current = first->getNext();
			SinhVien* previous = first;
			while (current->getNext() != NULL) {
				if (current->getMSSV() == mssv) {
					previous->setNext(current->getNext());
					current = current->getNext();
				}
				else {
					current = current->getNext();
					previous = previous->getNext();
				}
			}
		}
		
	}
	void removeSinhVienFirst(SinhVien* &first)
	{
		if (first->getNext() == NULL) {
			first = NULL;
		}
		else {
			first = first->getNext();
		}
	}
	void removeSinhVienLast(SinhVien* &first)
	{
		if (first->getNext() == NULL) {
			first = NULL;
		}
		else {
			SinhVien * current;
			SinhVien * previous = first;
			for (current = first->getNext(); current != NULL; current = current->getNext()) {
				if (current->getNext() == NULL) {
					previous->setNext(NULL);
				}
				else {
					previous = current;
				}
			}
		}
	}
	void coutLinkList(SinhVien* first) {
		SinhVien* current;
		for (current = first; current != NULL; current = current->getNext()) {
			std::cout << current->getMSSV() << " ==> ";
		}
		std::cout << "NULL" << std::endl;
	}
	void insertBefore(SinhVien* &index, SinhVien * &insert)
	{
		insert->setNext(index->getNext());
		index->setNext(insert);
	}
}
int menu()
{
	int chon = -1;
	std::cout << "========================Main menu========================" << std::endl
		<< "1.Show list." << std::endl
		<< "2.Remove SinhVien by mssv." << std::endl
		<< "3.Remove First." << std::endl
		<< "4.Remove Last." << std::endl
		<< "5.Insert before." << std::endl
		<< "6.Insert after." << std::endl
		<< "7.Clear List." << std::endl
		<< "0.Exit." << std::endl
		<< "=============Select: ";
	std::cin >> chon;
	std::cout << std::endl;
	return chon;
}
int main() 
{
	//create link list
	SinhVien* first = new SinhVien(1, "sv 1", 0);
	SinhVien* current = first;
	for (int i = 2; i <= 3; i++) {
		std::string name = createSinhVienName("sv ", i);
		current = current->addNext(i, name);
	}
	int chon;
	do {
		chon = menu();
		switch (chon)
		{
		case 1:
			coutLinkList(first);
			break;
		case 2:
			std::cout << "Nhap mssv can xoa: ";
			int mssv_delete;
			std::cin >> mssv_delete;
			removeSinhVienByMSSV(first, mssv_delete);
			break;
		case 3:
			removeSinhVienFirst(first);
			break;
		case 4: 
			removeSinhVienLast(first);
			break;
		case 5:
		{SinhVien * sv = new SinhVien(100, "sv 100");
		insertBefore(first, sv);
		break; }
		default: 
			std::cout << "Ban chon sai moi chon lai." << std::endl;
			break;
		}
	} while (chon != 0);
	return 0;
}