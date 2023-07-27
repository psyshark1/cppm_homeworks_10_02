#pragma once
#include <string>
#include<iostream>

class Figure
{
public:
    Figure();
    ~Figure();
    virtual void get_info();

protected:
    std::string name;
    unsigned short sides_count;
};