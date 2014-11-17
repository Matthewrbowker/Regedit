#include <iostream>
#include <string>
#include <Windows.h>
#include "RegistryInterface.h"

using namespace std;

/*
int main() {
	RegGetValue(HKEY_LOCAL_MACHINE, "SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion", "ProductName", RRF_RT_ANY, NULL, (PVOID)&value, &BufferSize);
	std::cout << value << std::endl;
	system("pause");
} */


int main() {
	registryInterface reg;
	reg.loadRegistryValues();
	reg.outputCurrentKeys();
	system("PAUSE");
	return 0;
}