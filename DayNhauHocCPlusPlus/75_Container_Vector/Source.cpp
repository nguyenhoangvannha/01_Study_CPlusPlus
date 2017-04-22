#include "iostream"
#include "vector"
int main()
{
	std::vector<int> pho;
	/*pho.push_back(1);
	pho.push_back(2);
	pho.push_back(3);
	pho.push_back(4);
	pho.push_back(5);*/
	/*for (int i = 0; i < pho.size(); i++) {
		std::cout << pho[i] << std::endl;
	}*/
	/*for (std::vector<int>::iterator it = pho.begin(); it != pho.end(); it++) {
		std::cout << *it << std::endl;
	}
	for (auto it = pho.begin(); it != pho.end(); it++) {
		std::cout << *it << std::endl;
	}
	for (auto &p: pho) {
		std::cout << p << std::endl;
	}
	std::cout << pho.at(1) << std::endl;
	std::cout << pho[1] << std::endl;*/
	//Memory management
	std::vector<int> mang;
	std::cout << "mang: Size = " << mang.size() << "  Capacity= " << mang.capacity() << std::endl;
	for (int i = 0; i < 25; i++)
	{
		mang.push_back(i);
		std::cout << "mang[" << i << "]: Size = " << mang.size() << "  Capacity= " << mang.capacity() << std::endl;
	}
	//Resize
	mang.resize(30);
	for (int i = 25; i < 31; i++) {
		std::cout << "mang[" << i << "]: Value= " << mang.at(i) << std::endl;
	}
	//Increae 
	mang.reserve(50);
 	return 0;
}