using namespace std;

class fileInterface {
private:
	string filename;
	string HKCR; // HKEY_CLASSES_ROOT
	string HKCU; // HKEY_CURRENT_USER
	string HKLM; // HKEY_LOCAL_MACHINE
	string HKU;  // HKEY_USERS
	string HKCC; // HKEY_CURRENT_CONFIG
	void loadFile();
public:
	fileInterface();
	fileInterface(string);
	void LoadValues();
};

void fileInterface::loadFile() {
	// Open the file
	// Save the variables
	// Close the file
	cout << filename << endl;
	ifstream f(filename);
	string line;
	string json = "";
	if (f.is_open())
	{
		while (getline(f, line))
		{
			json = json + line;
		}
		f.close();
	}

	else cout << "Unable to open file";

	// Erase new lines from the json variable
	json.erase(std::remove(json.begin(), json.end(), '\n'), json.end());

	cout << json << endl;
}

fileInterface::fileInterface() {
	filename = "";
}

fileInterface::fileInterface(string tempFilename) {
	filename = tempFilename;
}

void fileInterface::LoadValues() {
	loadFile();
}