#include <iostream>

int main()
{
	short value{ 7 }; // &value = 5ffe9e
	short otherValue{ 3 }; // &otherValue = 5ffe9c

	short* ptr{ &value };
    //std::cout << &value << ' ' << &otherValue << std::endl;

	std::cout << &value << '\n'; //5ffe9e
	std::cout << value << '\n'; //7
	std::cout << ptr << '\n'; //5ffe9e
	std::cout << *ptr << '\n'; //7
	std::cout << '\n';

	*ptr = 9;

	std::cout << &value << '\n'; //5ffe9e
	std::cout << value << '\n'; //9
	std::cout << ptr << '\n'; //5ffe9e
	std::cout << *ptr << '\n'; //9
	std::cout << '\n';

	ptr = &otherValue;

	std::cout << &otherValue << '\n'; //5ffe9c
	std::cout << otherValue << '\n'; //3
	std::cout << ptr << '\n'; //5ffe9c
	std::cout << *ptr << '\n'; //3
	std::cout << '\n';

	std::cout << sizeof(ptr) << '\n';//8
	std::cout << sizeof(*ptr) << '\n';//2

	return 0;
}