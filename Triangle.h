#pragma once
#include"Figure.h"

class Triangle : public Figure
{
public:
    Triangle(const unsigned short& side_a, const unsigned short& side_b, const unsigned short& side_c, const unsigned short& corner_A, const unsigned short& corner_B, const unsigned short& corner_C);
    ~Triangle();

    virtual void get_info() override;

protected:
    unsigned short side_a;
    unsigned short side_b;
    unsigned short side_c;
    unsigned short corner_A;
    unsigned short corner_B;
    unsigned short corner_C;
};
