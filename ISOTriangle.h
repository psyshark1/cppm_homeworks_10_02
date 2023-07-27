#pragma once
#include"Triangle.h"

class ISOTriangle : public Triangle
{
public:
    ISOTriangle(const unsigned short& side_a, const unsigned short& side_c, const unsigned short& corner_A, const unsigned short& corner_B);
    ~ISOTriangle();

    void get_info() override;
protected:
};