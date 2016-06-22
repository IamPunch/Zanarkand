#include <iostream>
#include <string>
#include <sstream>
#include <iterator>
#include <fstream>

#include "./FinalFantasyX/Process/Process.h"
#include "./FinalFantasyX/MemoryData/CharacterData.h"
#include "./FinalFantasyX/Values/Values.h"
#include "./FinalFantasyX/Objects/Characters/Guardians/Members/Tidus.h"

int main() {
	Process::detach();
	if (!Process::attach("FFX.exe")) {
		return 0;
	}
	retrieveCharacterData();
	retrieveCharacterAffection();
	retrieveCharacterName();
	Tidus tidus;
	std::cout << tidus.getBaseHP() << std::endl;
}

void decodeMemoryRegion(std::string fileName) {
	std::ifstream ifs("my-data.txt");
	std::string line;
	int previous = 0;
	std::string result = "";
	std::ofstream myfile;

	while (std::getline(ifs, line))
	{

		std::istringstream buf(line);
		std::istream_iterator<std::string> beg(buf), end;

		std::vector<std::string> tokens(beg, end); // done!

		for (auto& s : tokens) {

			int x = (int)strtol(s.c_str(), 0, 16);
			char chr = (char)x;
			if (x == 0) {
				if (previous == 0) continue;
				myfile.open(fileName, std::ios_base::app);
				myfile << result + '\n';
				myfile.close();
				result = "";
			}

			/*if (x >= 32 && x <= 127) {
				result += chr;
			}*/
			if (_CharEncoding.find(x) != _CharEncoding.end()) {
				if (previous != 0x0a) {
					result += _CharEncoding.find(x)->second;
				}
			}
			previous = x;
		}
	}
	std::cout << "finished" << '\n';

	myfile.close();
}