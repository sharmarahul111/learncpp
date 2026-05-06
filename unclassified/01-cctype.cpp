#include<iostream>
#include<cctype>
int main(){
	/*
	isalnum - checks if a character is alphanumeric
	isalpha - checks if a character is alphabetic
	islower - checks if a character is lowercase
	isupper - checks if a character is an uppercase character
	isdigit - checks if a character is a digit
	isxdigit - checks if a character is a hexadecimal character
	iscntrl - checks if a character is a control character
	isgraph - checks if a character is a graphical character
	isspace - checks if a character is a space character
	isblank (C++11) - checks if a character is a blank character
	isprint - checks if a character is a printing character
	ispunct - checks if a character is a punctuation character
	tolower - converts a character to lowercase
	toupper - converts a character to uppercase
	*/
	std::cout << std::boolalpha;
	std::cout << std::isalnum('A') << std::endl;
	std::cout << std::isalnum('1') << std::endl;
	std::cout << std::isalpha('A') << std::endl;
	std::cout << std::isalpha('1') << std::endl;
	std::cout << std::isupper('A') << std::endl;
	std::cout << std::isupper('a') << std::endl;
	std::cout << std::islower('a') << std::endl;
	std::cout << std::islower('A') << std::endl;
	std::cout << std::isdigit('A') << std::endl;
	std::cout << std::isspace(' ') << std::endl;
	std::cout << std::isprint('\n') << std::endl;
	std::cout << std::ispunct('"') << std::endl;
	std::cout << std::tolower('A') << std::endl;
	std::cout << std::toupper('c') << std::endl;
}