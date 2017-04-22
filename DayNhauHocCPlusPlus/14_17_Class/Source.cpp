#include "iostream"
#include "string"
class LHLT
{
private:
	std::string name = "";
public:
	LHLT()
	{
		std::cout << "Ham dung constructor!" << std::endl;
		name = "Lop hoc lap trinh ";
	}
	LHLT(std::string name)
	{
		this->name = name;
	}
	void setName(std::string name)
	{
		this->name = name;
	}
	std::string getName()
	{
		return this->name + " rat de hieu";
	}
	void LHLTCPP()
	{
		std::cout << "Xin chao cac ban den voi lop hoc " << name << std::endl;
	}
};
int main()
{
	LHLT lopHocObject;
	lopHocObject.setName("lap trinh c++");
	std::cout << lopHocObject.getName() << std::endl;
	lopHocObject.LHLTCPP();
	LHLT lop;
	std::cout << lop.getName() << std::endl;
	LHLT lop2("Lop hoc lap trinh 2 ");
	std::cout << lop2.getName() << std::endl;
	system("pause");
}