// karacuba.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector>
#include <string>
#include <iostream>
#include <conio.h>

std::string mult(const std::string& x, const std::string& y)
{
	if ((x.size() == 1) && (y.size() == 1))
	{
		int _x = atoi(x.c_str());
		int _y = atoi(y.c_str());
		return std::to_string(_x*_y);
	}
//	x.substr
	return "BAD";
}

int main()
{
	std::string str_x,str_y;
	//std::cout << "Enter X: ";
	//std::cin >> str_x;
	//std::cout << "X = " << str_x << std::endl;
	//std::cout << "Enter Y: ";
	//std::cin >> str_y;
	//std::cout << "Y = " << str_y << std::endl;
	str_x = "21625695688898558125310188636840316594920403182768";
	str_y = "13306827740879180856696800391510469038934180115260";
	std::string result = mult(str_x, str_y);
	std::cout << "X*Y = " << result << std::endl;
	_getch();
	
    return 0;
}

