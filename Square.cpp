#include"Square.h"

Square::Square(const unsigned short& side_a) : Rectangle(side_a, side_a)
{
    this->name = "Квадрат";
    this->side_a = side_a;
    this->side_b = side_a;
    this->side_c = side_a;
    this->side_d = side_a;
}

void Square::get_info()
{
    std::cout << this->name << ':' << '\n' <<
        "Стороны: a=" << this->side_a << " b=" << this->side_b << " c=" << this->side_c << " d=" << this->side_d << '\n' <<
        "Углы: A=" << this->corner_A << " B=" << this->corner_B << " C=" << this->corner_C << " D=" << this->corner_D << '\n';
}

Square::~Square()
{
}