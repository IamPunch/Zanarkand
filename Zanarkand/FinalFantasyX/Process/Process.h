#ifndef  PROCESS_H
#define PROCESS_H
#include <string>
#include <windows.h>

class Process {
private:
    static HANDLE hProcess;
    static DWORD pId;
    static DWORD baseAddress;
    static DWORD getModuleBase(LPSTR lpModuleName, DWORD dwProcessId);
public:
    static bool attach(std::string processName);
    static void detach();
    static bool isAttached();
    static int memoryReadInt(int memoryAddress);
    static int memoryReadByte(int memoryAddress);
    static int memoryRead2Bytes(int memoryAddress);
	static void pressKey(char key);
    static uint8_t* memoryReadChunk(int memoryAddress, int size);
};

#endif
