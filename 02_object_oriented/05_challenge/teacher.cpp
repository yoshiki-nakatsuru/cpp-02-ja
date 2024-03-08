#include "teacher.hpp"

Teacher::Teacher(const std::string& name):name(name){};

void Teacher::set_student(Student* student){
    this->students.push_back(student);
}

std::string Teacher::get_name(){
    return this->name;
}

std::vector<Student*> Teacher::get_student(){
    return this->students;
}