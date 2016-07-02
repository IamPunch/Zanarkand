#include "DodgeLightning.h"
void enableDodgeLightning(char keyInput, int* previous, INPUT ip) {
	int current = Process::memoryRead2Bytes(0xD2CE8C);
	if (current != *previous) {
		ip.ki.dwFlags = KEYEVENTF_SCANCODE;
		ip.ki.wScan = 0x2E;
		SendInput(1, &ip, sizeof(INPUT));
		Sleep(100);
		ip.ki.dwFlags = KEYEVENTF_SCANCODE | KEYEVENTF_KEYUP;
		SendInput(1, &ip, sizeof(INPUT));
	}
	*previous = current;
}