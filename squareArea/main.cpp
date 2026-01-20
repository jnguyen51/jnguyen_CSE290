#include "Square.h"
#include <iostream>
using namespace square;

int main(){
    Square c;
    c.setLength(5);
    c.setWidth(5);
    double resultArea;
    resultArea = c.calculateArea();

    std::cout << std::endl << resultArea << std::endl;
    return 0;
};