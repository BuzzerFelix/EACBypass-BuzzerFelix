#include "checksum.h"

int main() {
	cout << "checksum check for EAC Bypass: ";
	ifstream file("C:\\EAC\\EACBypass.exe");
	cout << checksum(file);
	Sleep(5000);
	return 0;
}