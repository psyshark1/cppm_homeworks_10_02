#pragma once
#include"Quadrangle.h"

class Parallelogram : public Quadrangle
{
public:
    Parallelogram(const unsigned short& side_a, const unsigned short& side_b, const unsigned short& corner_a, const unsigned short& corner_b);
    ~Parallelogram();

    void get_info() override;
protected:
};