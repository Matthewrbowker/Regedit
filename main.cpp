#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>
#include "json/json.h"
#include "fileInterface.h"
#include "registryInterface.h"

using namespace std;

/*
int main() {
	RegGetValue(HKEY_LOCAL_MACHINE, "SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion", "ProductName", RRF_RT_ANY, NULL, (PVOID)&value, &BufferSize);
	std::cout << value << std::endl;
	system("pause");
} */


int main() {
	registryInterface reg;
	fileInterface file("C:\\Temp\\test.rpp");
	//reg.loadRegistryValues();
	//reg.outputCurrentKeys();
	file.LoadValues();
	system("PAUSE");
	return 0;
}