#include"Quadrangle.h"

Quadrangle::Quadrangle(const unsigned short& side_a, const unsigned short& side_b, const unsigned short& side_c, const unsigned short& side_d, const unsigned short& corner_a, const unsigned short& corner_b, const unsigned short& corner_c, const unsigned short& corner_d)
{
    this->name = "Четырехугольник";
    this->sides_count = 4;
    this->side_a = side_a;
    this->side_b = side_b;
    this->side_c = side_c;
    this->side_d = side_d;
    this->corner_A = corner_a;
    this->corner_B = corner_b;
    this->corner_C = corner_c;
    this->corner_D = corner_d;
}

void Quadrangle::get_info()
{
    std::cout << this->name << ':' << '\n' <<
        "Стороны: a=" << this->side_a << " b=" << this->side_b << " c=" << this->side_c << " d=" << this->side_d << '\n' <<
        "Углы: A=" << this->corner_A << " B=" << this->corner_B << " C=" << this->corner_C << " D=" << this->corner_D << '\n';
}

Quadrangle::~Quadrangle()
{
}