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


int main(int argc, char * argv[]) {
	int i = 0;
	string fileName;
	while (i < argc) {
		cout << argv[i] << endl;
		i++;
	}
	/*
	if (argc == 2) {
		fileName = argv[1];
	}
	else {
		fileName = "Normal.rppt";
	}
	*/
	//registryInterface reg;
	//fileInterface file(fileName);
	//reg.loadRegistryValues();
	//reg.outputCurrentKeys();
	//file.LoadValues();
	system("PAUSE");
	return 0;
}