#include "iostream"
#include "string"
int main()
{
	int ngay = 0, thang = 0, nam = 0;
	std::string name = "";
	std::cout << "Nhap ngay thang nam sinh: ";
	std::cin >> ngay >> thang >> nam;
	std::cout << ngay << ' ' << thang << ' ' << nam << std::endl;
	std::cout << "Nhap ten cua ban: ";
	std::cin >> name;
	std::cin.ignore(4); //xoa 4 ky tu	
	std::cout << "Ban bao nhieu tuoi: ";
	int tuoi = 0;
	std::cin >> tuoi;
	std::fflush(stdin);//lam rong cin
	std::cout << "Nhap ho va ten: ";
	std::getline(std::cin, name);
	getchar();
	return 0;
}