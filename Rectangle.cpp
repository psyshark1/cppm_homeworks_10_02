#include"Rectangle.h"

Rectangle::Rectangle(const unsigned short& side_a, const unsigned short& side_b) : Quadrangle(side_a, side_b, side_a, side_b, 90, 90, 90, 90)
{
    this->name = "Прямоугольник";
    this->side_a = side_a;
    this->side_b = side_b;
    this->side_c = side_a;
    this->side_d = side_b;
    this->corner_A = 90;
    this->corner_B = 90;
    this->corner_C = 90;
    this->corner_D = 90;
}

void Rectangle::get_info() 
{
    std::cout << this->name << ':' << '\n' <<
        "Стороны: a=" << this->side_a << " b=" << this->side_b << " c=" << this->side_c << " d=" << this->side_d << '\n' <<
        "Углы: A=" << this->corner_A << " B=" << this->corner_B << " C=" << this->corner_C << " D=" << this->corner_D << '\n';
}

Rectangle::~Rectangle()
{
}