#include <iostream>
#include <string>
#include "./FinalFantasyX/Values/Values.h"
#include "./FinalFantasyX/Utility/Utility.h"
#include "./FinalFantasyX/Process/Process.h"
#include "Server.h"
#include "json.hpp"
//D2CA9E
int main() {
	Process::detach();
	if (!Process::attach("FFX.exe")) {
		system("pause");
		return 0;
	}
	std::string username;
	std::cout << "Enter username: "; // no flush needed
	std::cin >> username;
	std::vector<bool> trackTreasure(_Treasure.size(), false);
	std::string allJSONTreasure = getAllTreasure();
	nlohmann::json requestObject = {
		{ "username", username},
		{ "object", nlohmann::json::parse(allJSONTreasure) }
	};  
	std::string jsonRequest = requestObject.dump();
	int respond = postRequest("http://localhost:3000/", jsonRequest);
	while (1) {
		std::string changedJSONTresure = getChangedTreasure(trackTreasure);
		if (changedJSONTresure.compare("[]") != 0) {
			requestObject = {
				{ "username", username },
				{ "object", nlohmann::json::parse(changedJSONTresure) }
			};
			jsonRequest = requestObject.dump();
			respond = postRequest("http://localhost:3000/", jsonRequest);
		}
		Sleep(100);
	}
	system("pause");
	return 0;
}


