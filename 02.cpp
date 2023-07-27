#include"RTriangle.h"
#include"EQTriangle.h"
#include"Rhombus.h"
#include"Square.h"

void print_info(Figure* fig);

int main(int argc, char** argv)
{
    std::system("chcp 1251");

    Triangle triangle(10, 20, 30, 50, 60, 70);
    ISOTriangle isot(10, 20, 50, 60);
    RTriangle rtriangle(10, 20, 30, 50, 60);
    EQTriangle eqtriangle(30);

    Quadrangle quadrangle(10, 20, 30, 40, 50, 60, 70, 80);
    Rectangle rect(10, 20);
    Square square(20);
    Parallelogram parallelogram(20, 30, 30, 40);
    Rhombus rhombus(30, 30, 40);

    print_info(&triangle);
    std::cout << '\n';
    print_info(&isot);
    std::cout << '\n';
    print_info(&rtriangle);
    std::cout << '\n';
    print_info(&eqtriangle);
    std::cout << '\n';
    print_info(&quadrangle);
    std::cout << '\n';
    print_info(&rect);
    std::cout << '\n';
    print_info(&square);
    std::cout << '\n';
    print_info(&parallelogram);
    std::cout << '\n';
    print_info(&rhombus);

    std::system("pause");
    return 0;
}

void print_info(Figure* fig)
{
    fig->get_info();
}