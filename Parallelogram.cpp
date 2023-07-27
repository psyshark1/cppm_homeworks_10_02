#include"Parallelogram.h"

Parallelogram::Parallelogram(const unsigned short& side_a, const unsigned short& side_b, const unsigned short& corner_a, const unsigned short& corner_b) : Quadrangle(side_a, side_b, side_a, side_b, corner_a, corner_b, corner_a, corner_b)
{
    this->name = "Параллелограм";
    this->side_a = side_a;
    this->side_b = side_b;
    this->side_c = side_a;
    this->side_d = side_b;
    this->corner_A = corner_a;
    this->corner_B = corner_b;
    this->corner_C = corner_a;
    this->corner_D = corner_b;
}

void Parallelogram::get_info()
{
    std::cout << this->name << ':' << '\n' <<
        "Стороны: a=" << this->side_a << " b=" << this->side_b << " c=" << this->side_c << " d=" << this->side_d << '\n' <<
        "Углы: A=" << this->corner_A << " B=" << this->corner_B << " C=" << this->corner_C << " D=" << this->corner_D << '\n';
}

Parallelogram::~Parallelogram()
{
}