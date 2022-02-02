#include "Header.h"

void init() {


	int num;
	std::cout << "Enter num: ";
	std::cin >> num;
	Number n(num);
	std::string name;
	std::cout << "Enter name: ";
	std::cin >> name;

	//std::string namefull = name + ".txt";
	//std::cout << namefull << "\n";


	int* arr = new int[n.getCount()];

	for (int i{}; i < n.getCount(); ++i)
	{
		std::cin >> arr[i];
	}


	std::cout << n.sum(arr) << "\n";
	std::cout << n.average(arr) << "\n";


	std::ofstream file(name+".txt", std::ios::app);
	if (file.is_open())
	{
		for (int i{}; i < n.getCount(); ++i) {
			file << arr[i] << " ";
		}

		file << "\n" << n.sum(arr) << "\n" << n.average(arr) << "\n\n";
	}

	file.close();



}