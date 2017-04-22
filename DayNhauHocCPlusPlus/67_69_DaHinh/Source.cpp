#include "iostream"
class PhongTom
{
public:
	virtual void skills_1()
	{
		std::cout << "Dam: Dam mot phat chet ngay." << std::endl;
	}
	virtual void skills_2()
	{
		std::cout << "Chua hoc." << std::endl;
	}
};
class CungThu: public PhongTom
{
public:
	void skills_1()
	{
		std::cout << "Cung: Tram phat chua chac trung." << std::endl;
		 
	}
	void skills_2()
	{
		std::cout << "Cung: Chua hoc." << std::endl;
	} 
};
class GayThu: public PhongTom
{
public:
	void skills_1()
	{
		std::cout << "Gay: Xem mot gay cua ta day." << std::endl;

	}
	void skills_2()
	{
		std::cout << "Gay: Chua Hoc." << std::endl; 
	}
};
int main()
{
	/*PhongTom* pt1 = new CungThu;
	pt1->skillsCoBan();
	PhongTom* pt2 = new GayThu;
	pt2->skillsCoBan();
	PhongTom* pt3 = new PhongTom;
	pt3->skillsCoBan();
	return 0;*/
	/*PhongTom *pt1;
	CungThu ct;
	GayThu gt;
	pt1 = &ct;
	pt1->skillsCoBan();*/
	PhongTom* nvgame = new PhongTom;
	int level;
	nvgame->skills_1();
	if (level > 10)
	{
		delete nvgame;
	}
	bool isCungThu = true;
	if (isCungThu)
	{
		nvgame = new CungThu;
	}
	else
	{
		nvgame = new GayThu;
	}
	nvgame->skills_1();
	return 0;
}