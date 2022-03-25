#include "bypass.h"
#include "ConsoleCommands.h"
#include <conio.h>
int main() {
	SetConsoleTitleA((LPCSTR)"EAC Bypass");
	CheckFileDriver("image.sys");
	Sleep(5000);
	ConsoleCommands("kdmapper --mdl image.sys");
	if (_getch() == 'r')
	{
		cout << ("Exiting...");
		Sleep(6000);
		exit(21);
	}
	else
	{
		cout << ("Maybe its wrong Key :)");
		Sleep(10000);
		exit(34);
	}
	return 0;
}
