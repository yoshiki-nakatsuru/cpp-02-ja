#include "student.hpp"

Student::Student(const std::string& name):name(name){};

void Student::set_teacher(Teacher* teacher){
    this->teachers.push_back(teacher);
}

std::string Student::get_name(){
    return this->name;
}

std::vector<Teacher*> Student::get_teacher(){
    return this->teachers;
}