#include <iostream>
#include "bVector.h"

using namespace std;

int main(){
	//Custom vector class examples.
	BVector<int>nums;
	BVector<char>chars;
	char c = 'A';
	int x = 0;

	//Push some items on the vector
	nums.push_back(10);
	nums.push_back(20);
	nums.push_back(30);
	nums.push_back(40);
	
	//Print items
	while (x < nums.size()){
		std::cout << nums.get(x) << endl;
		x++;
	}
	x = 0;
	std::cout << std::endl;

	//Insert a item at an index in the vector
	nums.push_back(0, 100);
	nums.push_back(1, 120);

	//Print items
	while (x < nums.size()){
		std::cout << nums.get(x) << endl;
		x++;
	}
	std::cout << std::endl;
	x = 0;

	//Swap two items
	nums.swap(0, 1);
	
	//Print items
	while (x < nums.size()){
		std::cout << nums.get(x) << endl;
		x++;
	}

	x = 0;

	//Add A-Z to chars vector
	while (x <= 25){
		c = (char)x + 65;
		//Add char
		chars.push_back(c);
		x++;
	}
	//Swap A for Z
	chars.swap(0, 25);

	x = 0;

	//Print chars A-Z
	while (x < chars.size()){
		//Print chars
		std::cout << chars[x];
		x++;
	}
	
	std::cout << std::endl;
	//Clear up time
	nums.clear();
	chars.clear();

	return EXIT_SUCCESS;
}