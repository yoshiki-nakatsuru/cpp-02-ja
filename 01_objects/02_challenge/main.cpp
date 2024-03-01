// コードを入力してください
#include <iostream>
#include "rectangle.h" 

int main (){

    Rectangle rect{};
    std::cin >>  rect.width >> rect.height;

    std::cout << rectangle_area(rect) << std::endl;

    

}