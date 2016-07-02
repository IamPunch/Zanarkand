#include "Utility.h"
#include <fstream>
#include "../../json.hpp"
#include "../Process/Process.h"
#include "../Values/Values.h"
std::string int_to_hex(int i) {
	std::stringstream stream;
	stream << "0x"
		<< std::setfill('0') << std::setw(6)
		<< std::hex << std::uppercase << i;
	return stream.str();
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

std::string getAllTreasure() {
	nlohmann::json jsonArray = nlohmann::json::array();
	int i = 0;
	for (TreasureObject treasure : _Treasure) {
		std::string ID = int_to_hex(treasure.offset) + "_" + std::to_string(treasure.bitIndex);
		nlohmann::json treasureJson = {
			{ "ID", ID },
			{ "missable", treasure.missable },
			{ "type", (int)treasure.type },
			{ "map", treasure.location },
			{ "name", treasure.name },
			{ "quantity", treasure.quantity },
			{ "description", treasure.notes },
			{ "found", 0 }
		};
		jsonArray.push_back(treasureJson);
	}
	return jsonArray.dump();
}
std::string getChangedTreasure(std::vector<bool>& v) {
	nlohmann::json jsonArray = nlohmann::json::array();
	for (size_t  i = 0; i < v.size(); i++) {
		int buffer = Process::memoryReadInt(_Treasure[i].offset);
		int updatedBit = (int) getBit(buffer, _Treasure[i].bitIndex);
		if (v[i] != updatedBit) {
			//std::cout << updatedBit << std::endl;
			std::string ID = int_to_hex(_Treasure[i].offset) + "_" + std::to_string(_Treasure[i].bitIndex);
			nlohmann::json treasureJson = {
				{ "ID", ID },
				{ "missable", _Treasure[i].missable },
				{ "type", (int)_Treasure[i].type },
				{ "map", _Treasure[i].location },
				{ "name", _Treasure[i].name },
				{ "quantity", _Treasure[i].quantity },
				{ "description", _Treasure[i].notes },
				{ "found", updatedBit}
			};
			v[i] = getBit(buffer, _Treasure[i].bitIndex);
			jsonArray.push_back(treasureJson);
		}
	}
	return jsonArray.dump();
}
bool getBit(uint8_t byte, int position) {
	return (byte >> position) & 0x1;
}