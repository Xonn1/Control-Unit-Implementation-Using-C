//
// Created by Sonni on 29/06/2018.
//

#include <iostream>
#include <sstream>
#include <string>
#include <array>
#include <bitset>
#include <sstream>
#include <stdlib.h>
#include <ctype.h>
#include <windows.h>

using namespace std;
using std::string;

#ifndef CONTROLUNIT_HEADER_H
#define CONTROLUNIT_HEADER_H

class Control_Unit{
    //Properties
private:
    unsigned int accumulator=0;
    array<unsigned int,8> MBR;
    array<unsigned int,8> IO_BR;
    array<unsigned int,12> MAR;
    array<unsigned int,12> IO_AR;

    //Methods
public:

    Control_Unit();
    int CU(unsigned int,unsigned int);

    int getMBR();
    int getMAR();
    int getIO_BR();
    int getIO_AR();
    int getAccumulator();
    ~Control_Unit();
};

#endif