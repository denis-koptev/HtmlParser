#include "HtmlParser.hpp"

#include <iostream>
#include <exception>

int main(int argc, char ** argv)
{
	try
	{
		HtmlParser htmlParser("input.html");

		htmlParser.parse();

		std::cout << htmlParser.getResult() << std::endl;
	}
	catch (const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	return 0;
}