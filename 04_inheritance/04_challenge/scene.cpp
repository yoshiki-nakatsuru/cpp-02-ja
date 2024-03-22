// コードを入力してください
#include "scene.hpp"

void Scene::render() const {
    for(Drawable* drawable : this->drawables){
        if(drawable == nullptr){
            break;
        }
        drawable->draw();
    }
}

void Scene::add(Drawable* drawble){
    this->drawables.push_back(drawble);
}