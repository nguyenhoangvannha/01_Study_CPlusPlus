#include "iostream"
enum Linh
{
	MIN_LINH = 30,
	MAX_LINH = 100,
};
enum Item
{
	KIEM,
	CUNG,
	DAO,
	KEO,
};
int main()
{
	std::cout << "Nhap so luong linh:";
	int so_linh = 0;
	std::cin >> so_linh;
	if (so_linh < MIN_LINH || so_linh > MAX_LINH) {
		std::cout << "So luong linh sai quy dinh." << std::endl;
	}
	Item item = KIEM;
	switch (item)
	{
	case KIEM:
		std::cout << "Dam.";
		break;
	case CUNG:
		std::cout << "Ban.";
		break;
	}
	return 0;
}