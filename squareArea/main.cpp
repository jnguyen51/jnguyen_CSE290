#include "Square.h"
#include <iostream>

int main(){
    Square c;
    c.setLength(5);
    c.setWidth(5);
    double resultArea;
    resultArea = c.calculateArea();

    std::cout<< resultArea;
    return 0;
};