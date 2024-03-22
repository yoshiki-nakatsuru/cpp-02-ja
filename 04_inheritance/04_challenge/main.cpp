// コードを入力してください
#include "scene.hpp"
#include "circle.hpp"
#include "square.hpp"

int main(){
    Circle circle_A;
    Square square_A;

    Scene scene;

    scene.add(&circle_A);
    scene.add(&square_A);

    scene.render();

    return 0;
}