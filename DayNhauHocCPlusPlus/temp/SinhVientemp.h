#pragma once
#include "iostream"
#include "string"
class SinhVien
{
public:
	SinhVien(int mssv, const std::string name, SinhVien* const next = 0);
	~SinhVien();
private:
	int mssv_;
	std::string name_;
	SinhVien* next_;
public:
	int getMSSV();
	SinhVien *getNext();
	void setNext(SinhVien* sv);
	std::string getName();
	SinhVien * addNext(int mssv, const std::string name, SinhVien * const next = 0);
};