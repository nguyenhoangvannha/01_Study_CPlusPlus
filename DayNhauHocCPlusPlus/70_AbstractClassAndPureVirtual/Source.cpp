#include "iostream"
class PhongTom
{
public:
	virtual void skills_1() = 0; //pure virtual
	/*{
		std::cout << "Dam: Mot phat chet ngay." << std::endl;
	}*/
	virtual void skills_2() {
		std::cout << "Song phi: 2 cu." << std::endl;
	}
};
class CungThu : public PhongTom
{
	void skills_1() {
		std::cout << "Cung: Tram phat chua chac trung." << std::endl;
	}
};
class GayThu : public PhongTom
{
	void skills_1() {
		std::cout << "Gay: Mot phat chet ngay." << std::endl;
	}
	void skills_2() {
		std::cout << "Gay: Hoanh tao thien quan." << std::endl;
	}
};
int main()
{
	// error
	/*PhongTom pt;
	pt.skills_1();
	pt.skills_2();*/
	PhongTom* pt;
	CungThu ct;
	pt = &ct;
	pt->skills_1();
	pt->skills_2();
	GayThu gt;
	return 0;
}