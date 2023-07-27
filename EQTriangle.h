#pragma once
#include"ISOTriangle.h"

class EQTriangle : public ISOTriangle
{
public:
    EQTriangle(const unsigned short& side_a);
    ~EQTriangle();

    void get_info() override;
protected:
};
