#include "iostream"
class PhongTom
{
public:
	virtual void skills_1()
	{
		std::cout << "Dam: Mot phat chet ngay." << std::endl;
	}
	virtual void skills_2() {
		std::cout << "Song phi: 2 cu." << std::endl;
	}
	void jump() {
		std::cout << "I can fly." << std::endl;
	}

};
class CungThu : public PhongTom
{
	void skills_1() {
		std::cout << "Cung: Tram phat chua chac trung." << std::endl;
	}
	void jump() {
		std::cout << "Cung: i can fly." << std::endl;
	}
};
class GayThu : public PhongTom
{
	void skills_2() {
		std::cout << "Gay: Hoanh tao thien quan." << std::endl;
	}
};
int main()
{
	PhongTom* pt;
	CungThu ct;
	pt = &ct;
	pt->skills_1();
	pt->skills_2();
	pt->jump();
	return 0;
}