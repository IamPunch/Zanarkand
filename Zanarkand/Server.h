#ifndef  SERVER_H
#define SERVER_H
#include <string>
#include <curl/curl.h>
int postRequest(std::string url, std::string jsonString);
#endif