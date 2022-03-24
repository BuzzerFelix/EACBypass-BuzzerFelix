#pragma once

#include <iostream>
#include <Windows.h>
#include <string>
#include <fstream>
#include<iostream>
#include <vector>
#define WIN32_LEAN_AND_MEAN //Rarely Include Headers
using namespace std;
void CheckFileDriver(const char* file_image_bypass) {
	//Check if File was Exists
	ifstream image_file;
	image_file.open("image.sys");
		if (file_image_bypass) 
		{
			cout << ("File is Found, Attempting to Open KDMapper and Creating Driver Entry...");
		}
		else 
		{
			cout << ("File is not Found... Please Download Image.sys and try again");
			Sleep(3000);
			exit(54);
		}

}
void HideConsole() {
	ShowWindow(GetConsoleWindow(), SW_HIDE);
}
