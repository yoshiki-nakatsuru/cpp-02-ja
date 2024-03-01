// コードを入力してください
#include "traffic_light.h"

#include <string>

std::string get_action(TrafficLight light){
    switch(light){
        case TrafficLight::green :
            return "Go";
        case TrafficLight::yellow :
            return "Caution";
        case TrafficLight::red :
            return "Stop";
        default : 
            return "invalid Light Color";

    }
}