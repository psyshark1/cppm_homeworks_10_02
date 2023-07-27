#include"RTriangle.h"

RTriangle::RTriangle(const unsigned short& side_a, const unsigned short& side_b, const unsigned short& side_c, const unsigned short& corner_A, const unsigned short& corner_B) : Triangle(side_a, side_b, side_c, corner_A, corner_B, corner_B)
{
    this->name = "Прямоугольный Треугольник";
    this->side_a = side_a;
    this->side_b = side_b;
    this->side_c = side_c;
    this->corner_A = corner_A;
    this->corner_B = corner_B;
    this->corner_C = 90;
}

void RTriangle::get_info()
{
    std::cout << this->name << ':' << '\n' <<
        "Стороны: a=" << this->side_a << " b=" << this->side_b << " c=" << this->side_a << '\n' <<
        "Углы: A=" << this->corner_A << " B=" << this->corner_B << " C=" << this->corner_C << '\n';
}

RTriangle::~RTriangle()
{
}