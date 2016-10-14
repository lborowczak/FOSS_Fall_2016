#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

int main(int argc, char *argv[]) {

	std::ifstream numbersFile;
	double total = 0;
	int numOfLines = 0;
	std::string tmpLine = "";

	if (argc != 2)
	{
		numbersFile.open("numbers.txt");
	}
	else numbersFile.open(argv[1]);

	while (std::getline(numbersFile, tmpLine))
	{
		if (tmpLine != "" && tmpLine != "\n")
		{
			total += std::stod(tmpLine);
			numOfLines++;
			tmpLine = "";
		}
	}

	double avg = (total/numOfLines);
	std::cout << avg << std::endl;

	return 0;

}
