#include "bypass.h"
#include "ConsoleCommands.h"
#include <conio.h>
int main() {
	CheckFileDriver("image.sys");
	Sleep(5000);
	ConsoleCommands("kdmapper --mdl image.sys");
	Sleep(2500);
	while (true) 
	{
		if (_getch() == VK_F6) 
		{
			cout << ("Exiting...");
			Sleep(6000);
			exit(21);
		}
		else 
		{
			cout << ("Maybe its wrong Key :)");
			return true;
		}
	}
	return 0;
}
