#include "iostream"
//using namespace std;
void swap(int *sochan, int *sole)
{
	int temp;
	temp = *sochan;
	*sochan = *sole;
	*sole = temp;
}
void main()
{
	int sochan = 2;
	int sole = 3;
	int *chan, *le;
	chan = &sochan;
	le = &sole;
	swap(chan,le);
	std::cout << std::endl << "So chan = " << sochan;
	std::cout << std:: endl << "so le = " << sole;
	system("pause");
}