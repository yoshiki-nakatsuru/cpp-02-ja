#include <iostream>
#include "school.hpp"
#include "teacher.hpp"
#include "student.hpp"

#include <iostream>

int main(){
    School school;
    Teacher teacher_A("Mr.Tom");
    Student student_A("Bob");
    Student student_B("Charly");

    school.hireTeacher(&teacher_A);
    school.enrollStudent(&student_A);
    school.enrollStudent(&student_B);
    school.assignStudent(&teacher_A, &student_A);
    school.assignStudent(&teacher_A, &student_B);

    std::cout << "#Teacher#" << std::endl;
    school.printTeacherOfStudent();
    std::cout << std::endl;
    std::cout << "#Student#" << std::endl;
    school.printStudentOfTeacher();
}