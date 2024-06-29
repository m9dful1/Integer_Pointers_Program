#include <iostream>

int main() {
	int num1, num2, num3;
	
	// Prompt user for input
	std::cout << "Enter three numbers: \n";
	std::cout << "First Number: ";
	std::cin >> num1;
	std::cout << "Second Number: ";
	std::cin >> num2;
	std::cout << "Third Number: ";
	std::cin >> num3;
	
	// Dynamcally allocate memory for each value
	int* ptr1 = new int(num1);
	int* ptr2 = new int(num2);
	int* ptr3 = new int(num3);
	
	// Display the contents of the pointers
	std::cout << "\nContents of pointers:\n";
	std::cout << "*ptr1 = " << *ptr1 << " (address: " << ptr1 << ")\n";
	std::cout << "*ptr2 = " << *ptr2 << " (address: " << ptr2 << ")\n";
	std::cout << "*ptr3 = " << *ptr3 << " (address: " << ptr3 << ")\n";
	
	// Free dynamicall allocated memory
	delete ptr1;
	delete ptr2;
	delete ptr3;
	
	return 0;
}