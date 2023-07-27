#include"Rhombus.h"

Rhombus::Rhombus(const unsigned short& side_a, const unsigned short& corner_a, const unsigned short& corner_b) : Parallelogram(side_a, side_a, corner_a, corner_b)
{
    this->name = "Ромб";
    this->side_a = side_a;
    this->side_b = side_a;
    this->side_c = side_a;
    this->side_d = side_a;
}

void Rhombus::get_info()
{
    std::cout << this->name << ':' << '\n' <<
        "Стороны: a=" << this->side_a << " b=" << this->side_b << " c=" << this->side_c << " d=" << this->side_d << '\n' <<
        "Углы: A=" << this->corner_A << " B=" << this->corner_B << " C=" << this->corner_C << " D=" << this->corner_D << '\n';
}

Rhombus::~Rhombus()
{
}