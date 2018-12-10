// main.cpp
// Trevor Dine
// COSC 2030 
// 10 December 2018
// Lab 09

#include <iostream>
#include <map>
#include <fstream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::map;
using std::pair;
using std::ifstream;
using std::ofstream;
using std::string;

int main()
{
	map<string, int> imTheMap;
	ifstream inputFile;
	ofstream outputFile;
	string inWord;
	int index = -1;
	inputFile.open("example.txt");

	if (inputFile.is_open())
	{
		while (inputFile >> inWord)
		{
			imTheMap.insert(pair<string, int>(inWord, index + 1));
		}
	}

	inputFile.close();

	outputFile.open("output.txt");

	if (outputFile.is_open())
	{
		for (auto i = imTheMap.begin(); i != imTheMap.end(); i++)
		{
			outputFile << i->first << endl;
		}
	}

	outputFile.close();

	return 0;
}