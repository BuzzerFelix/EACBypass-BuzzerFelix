#pragma once
#include <iostream>
#include <fstream> 
#include <Windows.h>
using namespace std;

uint32_t checksum(std::ifstream& file)
{
    uint32_t sum = 0;

    uint32_t word = 0;
    while (file.read(reinterpret_cast<char*>(&word), sizeof(word))) {
        sum += word;
    }

    if (file.gcount()) {
        word &= (~0U >> ((sizeof(uint32_t) - file.gcount()) * 8));
        sum += word;
    }

    return sum;
}
