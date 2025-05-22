#pragma once
#include <iostream>
#include <fstream>
#include <optional>

std::optional<std::string> ReadFileAsString(const std::string& filepath)
{
	std::ifstream stream(filepath);

	if (stream)
	{
		std::string result;
		//read file
		stream.close();
		return result;
	}
	
	return {};
}

void OptionalExample()
{
	std::optional<std::string> data = ReadFileAsString("data.txt");
	std::string value = data.value_or("Not present");
	std::cout << value << std::endl;
	if (data)
	{
		std::cout << "File read successfully" << std::endl;
	}
	else
	{
		std::cout << "File NOT read successfully" << std::endl;
	}
}