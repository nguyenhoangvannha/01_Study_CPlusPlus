#include "SinhVien.h"
SinhVien::SinhVien(int mssv, const std::string name, SinhVien* const next)
{
	this->mssv_ = mssv;
	this->name_ = name;
	this->next_ = next;
}
SinhVien::~SinhVien()
{
	this->next_ = NULL;
}
int SinhVien::getMSSV()
{
	return mssv_;
}
SinhVien * SinhVien::getNext()
{
	return this->next_;
}
void SinhVien::setNext(SinhVien* sv)
{
	this->next_ = sv;
}
std::string SinhVien::getName()
{
	return name_;
}
SinhVien * SinhVien::addNext(int mssv, const std::string name, SinhVien * const next)
{
	SinhVien * newSV = new SinhVien(mssv, name);
	this->next_ = newSV;
	return newSV;
}
