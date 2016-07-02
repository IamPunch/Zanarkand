#include <iostream>
#include <windows.h>
#include <tlhelp32.h>
#include "Process.h"
using namespace std;

DWORD Process::pId = NULL;
HANDLE Process::hProcess = NULL;
DWORD Process::baseAddress = 0;

bool Process::isAttached() {
    return pId != NULL && hProcess != NULL;
}

bool Process::attach(std::string processName) {
    detach();
    if (processName.compare("FFX.exe") != 0) {
        return false;
    }

    PROCESSENTRY32 entry;
    entry.dwSize = sizeof(PROCESSENTRY32);

    HANDLE snapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, NULL);

    if (Process32First(snapshot, &entry) == TRUE)
    {
        while (Process32Next(snapshot, &entry) == TRUE)
        {
            if (processName.compare(entry.szExeFile) == 0)
            {
                pId = entry.th32ProcessID;
                hProcess = OpenProcess(PROCESS_ALL_ACCESS, FALSE, entry.th32ProcessID);
                cout << "Attached!" << endl;
                baseAddress = getModuleBase("FFX.exe", pId);
                CloseHandle(snapshot);
                return true;
            }
        }
    }
    cout << "Not Attached!" << endl;
    CloseHandle(snapshot);
    return false;
}

void Process::detach() {
    hProcess = NULL;
    pId = NULL;
    CloseHandle(hProcess);
}


DWORD Process::getModuleBase(LPSTR moduleName, DWORD pId)
{
    MODULEENTRY32 lpModuleEntry = { 0 };
    HANDLE hSnapShot = CreateToolhelp32Snapshot(TH32CS_SNAPMODULE, pId);

    if (!hSnapShot) return NULL;
    lpModuleEntry.dwSize = sizeof(lpModuleEntry);
    BOOL bModule = Module32First(hSnapShot, &lpModuleEntry);
    while (bModule)
    {
        if (!strcmp(lpModuleEntry.szModule, moduleName))
        {
            CloseHandle(hSnapShot);
            return (DWORD)lpModuleEntry.modBaseAddr;
        }
        bModule = Module32Next(hSnapShot, &lpModuleEntry);
    }
    CloseHandle(hSnapShot);
    return NULL;
}



int Process::memoryReadByte(int memoryAddress) {
    unsigned char buffer = 0;
    SIZE_T NumberOfBytesToRead = sizeof(buffer); //this is equal to 1
    SIZE_T NumberOfBytesActuallyRead;
    BOOL succeed = ReadProcessMemory(hProcess, (LPCVOID)(baseAddress + memoryAddress), &buffer, NumberOfBytesToRead, &NumberOfBytesActuallyRead);
    if (!succeed || NumberOfBytesActuallyRead != NumberOfBytesToRead) {
        return 0;
    }
    return buffer;
}
int Process::memoryRead2Bytes(int memoryAddress) {
    unsigned short buffer = 0;
    SIZE_T NumberOfBytesToRead = sizeof(buffer); //this is equal to 2
    SIZE_T NumberOfBytesActuallyRead;
    BOOL succeed = ReadProcessMemory(hProcess, (LPCVOID)(baseAddress + memoryAddress), &buffer, NumberOfBytesToRead, &NumberOfBytesActuallyRead);
    if (!succeed || NumberOfBytesActuallyRead != NumberOfBytesToRead) {
        return 0;
    }
    return buffer;
}

int Process::memoryReadInt(int memoryAddress) {
    int buffer = 0;
    SIZE_T NumberOfBytesToRead = sizeof(buffer); //this is equal to 4
    SIZE_T NumberOfBytesActuallyRead;
    BOOL succeed = ReadProcessMemory(hProcess, (LPCVOID)(baseAddress + memoryAddress), &buffer, NumberOfBytesToRead, &NumberOfBytesActuallyRead);
    if (!succeed || NumberOfBytesActuallyRead != NumberOfBytesToRead) {
        return 0;
    }
    return buffer;
}

uint8_t* Process::memoryReadChunk(int memoryAddress, int size) {
    uint8_t* buffer = new uint8_t[size];
    SIZE_T NumberOfBytesToRead = size;
    SIZE_T NumberOfBytesActuallyRead;
    BOOL succeed = ReadProcessMemory(hProcess, (LPCVOID)(baseAddress + memoryAddress), buffer, NumberOfBytesToRead, &NumberOfBytesActuallyRead);
    if (!succeed || NumberOfBytesActuallyRead != NumberOfBytesToRead) {
        return buffer;
    }
    return buffer;
}

void Process::pressKey(char key) {
	HWND hWnd = FindWindow(NULL, "Untitled - Notepad");
	SetForegroundWindow(hWnd);
	DWORD dwPID = NULL;
	//SendMessage(hWnd, WM_KEYDOWN, key, IntPtr.Zero);
	if (hWnd != NULL) {
		std::cout << hWnd << std::endl;
		SendMessage(hWnd, WM_KEYDOWN, 'V', 1);
		SendMessage(hWnd, WM_KEYUP, 'V', 1);
		//std::cout << a << std::endl;
	}
}
