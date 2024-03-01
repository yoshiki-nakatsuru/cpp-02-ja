#pragma once

#include <vector>
#include "Person.hpp"

class Team {
public:
    Team();
    void add_member(const Person& person);
    std::vector<Person> get_members() const;
private:
    std::vector<Person> members;
};