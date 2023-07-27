#pragma once
#include"Triangle.h"
class RTriangle : public Triangle
{
public:
    RTriangle(const unsigned short& side_a, const unsigned short& side_b, const unsigned short& side_c, const unsigned short& corner_A, const unsigned short& corner_B);
    ~RTriangle();

    void get_info() override;
protected:
};