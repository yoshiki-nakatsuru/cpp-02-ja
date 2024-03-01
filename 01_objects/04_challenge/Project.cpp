#include "Project.hpp"

#include <vector>
#include <iostream>
#include "Person.hpp"
#include "Team.hpp"

Project::Project(){};

void Project::add_team_member(const Person& person){  
    team.add_member(person);
}

void Project::print_team_members() const {
    std::vector<Person> members = team.get_members();
    for(Person member :  members){
        std::cout << member.get_name() << std::endl;
    }
}