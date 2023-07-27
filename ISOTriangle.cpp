#include"ISOTriangle.h"

ISOTriangle::ISOTriangle(const unsigned short& side_a, const unsigned short& side_b, const unsigned short& corner_A, const unsigned short& corner_B) : Triangle(side_a, side_a, side_c, corner_A, corner_B, corner_B)
{
    this->name = "Равнобедренный Треугольник";
    this->side_a = side_a;
    this->side_b = side_b;
    this->side_c = side_a;
    this->corner_A = corner_A;
    this->corner_B = corner_B;
    this->corner_C = corner_B;
}

void ISOTriangle::get_info()
{
    std::cout << this->name << ':' << '\n' <<
        "Стороны: a=" << this->side_a << " b=" << this->side_b << " c=" << this->side_a << '\n' <<
        "Углы: A=" << this->corner_A << " B=" << this->corner_B << " C=" << this->corner_C << '\n';
}

ISOTriangle::~ISOTriangle()
{
}