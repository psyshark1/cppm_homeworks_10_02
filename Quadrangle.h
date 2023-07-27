#pragma once
#include"Figure.h"

class Quadrangle : public Figure
{
public:
    Quadrangle(const unsigned short& side_a, const unsigned short& side_b, const unsigned short& side_c, const unsigned short& side_d, const unsigned short& corner_a, const unsigned short& corner_b, const unsigned short& corner_c, const unsigned short& corner_d);
    ~Quadrangle();

    virtual void get_info();
protected:
    unsigned short side_a;
    unsigned short side_b;
    unsigned short side_c;
    unsigned short side_d;
    unsigned short corner_A;
    unsigned short corner_B;
    unsigned short corner_C;
    unsigned short corner_D;
};