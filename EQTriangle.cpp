#include"EQTriangle.h"

EQTriangle::EQTriangle(const unsigned short& side_a) : ISOTriangle(side_a, side_a, 60, 60)
{
    this->name = "Равносторонний Треугольник";
    this->side_a = side_a;
    this->side_b = side_a;
    this->side_c = side_a;
    this->corner_A = 60;
    this->corner_B = 60;
    this->corner_C = 60;
}

void EQTriangle::get_info()
{
    std::cout << this->name << ':' << '\n' <<
        "Стороны: a=" << this->side_a << " b=" << this->side_b << " c=" << this->side_a << '\n' <<
        "Углы: A=" << this->corner_A << " B=" << this->corner_B << " C=" << this->corner_C << '\n';
}

EQTriangle::~EQTriangle()
{
}