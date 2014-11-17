#define BUFFER 8192

using namespace std;

class registryInterface {
private:
	string key_AutoAdminLogon;
	string key_ForceAutoLogon;
	string key_DefaultUsername;
	string key_DefaultPassword;
	string key_DefaultDomainName;
	string key_stored_AutoAdminLogon;
	string key_stored_ForceAutoLogon;
	string key_stored_DefaultUsername;
	string key_stored_DefaultPassword;
	string key_stored_DefaultDomainName;
	HKEY hkey;
	char value[255];
	DWORD BufferSize = BUFFER;
public:
	bool loadRegistryValues();
	bool saveRegistryValues();
	string getKey_AutoAdminLogon();
	string getKey_stored_AutoAdminLogon();
	void setKey_AutoAdminLogon(string);
	string getKey_ForceAutoLogon();
	string getKey_stored_ForceAutoLogon();
	void setKey_ForceAutoLogon(string);
	string getKey_DefaultUsername();
	string getKey_stored_DefaultUsername();
	void setKey_DefaultUsername(string);
	string getKey_DefaultPassword();
	string getKey_stored_DefaultPassword();
	void setKey_DefaultPassword(string);
	string getKey_DefaultDomainName();
	string getKey_stored_DefaultDomainName();
	void setKey_DefaultDomainName(string);
	string escapeString(string);
	void outputCurrentKeys();
};

bool registryInterface::loadRegistryValues() {
	char key_temp_DefaultUsername[255];
	RegGetValue(HKEY_LOCAL_MACHINE, "SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Winlogon", "DefaultUserName", RRF_RT_ANY, NULL, (PVOID)&key_temp_DefaultUsername, &BufferSize);
	setKey_DefaultUsername(key_temp_DefaultUsername);
	return true;
}

bool registryInterface::saveRegistryValues() {
	return false;
}

string registryInterface::getKey_AutoAdminLogon() {
	return key_AutoAdminLogon;
}

string registryInterface::getKey_stored_AutoAdminLogon() {
	return key_stored_AutoAdminLogon;
}

void registryInterface::setKey_AutoAdminLogon(string temp) {
	key_AutoAdminLogon = temp;
}

string registryInterface::getKey_ForceAutoLogon() {
	return key_ForceAutoLogon;
}

string registryInterface::getKey_stored_ForceAutoLogon() {
	return key_stored_ForceAutoLogon;
}

void registryInterface::setKey_ForceAutoLogon(string temp) {
	key_ForceAutoLogon = temp;
}

string registryInterface::getKey_DefaultUsername() {
	return key_DefaultUsername;
}

string registryInterface::getKey_stored_DefaultUsername() {
	return key_stored_DefaultUsername;
}

void registryInterface::setKey_DefaultUsername(string temp) {
	key_DefaultUsername = temp;
}

string registryInterface::getKey_DefaultPassword() {
	return key_DefaultPassword;
}

string registryInterface::getKey_stored_DefaultPassword() {
	return key_stored_DefaultPassword;
}

void registryInterface::setKey_DefaultPassword(string temp) {
	key_DefaultPassword = temp;
}

string registryInterface::getKey_DefaultDomainName() {
	return key_DefaultDomainName;
}

string registryInterface::getKey_stored_DefaultDomainName() {
	return key_stored_DefaultDomainName;
}

void registryInterface::setKey_DefaultDomainName(string temp) {
	key_DefaultDomainName = temp;
}

string registryInterface::escapeString(string temp) {
	return temp;
}

void registryInterface::outputCurrentKeys() {
	cout << "AutoAdminLogin : " << getKey_AutoAdminLogon() << endl;
	cout << "AutoAdminLogin (stored) : " << getKey_stored_AutoAdminLogon() << endl;
	cout << "ForceAutoLogon : " << getKey_ForceAutoLogon() << endl;
	cout << "ForceAutoLogon (stored) : " << getKey_stored_ForceAutoLogon() << endl;
	cout << "DefaultUsername : " << getKey_DefaultUsername() << endl;
	cout << "DefaultUsername (stored) : " << getKey_stored_DefaultUsername() << endl;
	cout << "DefaultPassword : " << getKey_DefaultPassword() << endl;
	cout << "DefaultPassword (stored) : " << getKey_stored_DefaultPassword() << endl;
	cout << "DefaultDomainName : " << getKey_DefaultDomainName() << endl;
	cout << "DefaultDomainName (stored) : " << getKey_stored_DefaultDomainName() << endl;
}
