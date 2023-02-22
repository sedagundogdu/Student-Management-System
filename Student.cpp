#include "Student.h"
#include<iostream>
using namespace std;


int Student::getAbsence(){
 return absence;
}

 void Student::setAbsence(int absence){
    this->absence=absence;
}

int Student::getId(){
    return id;
}

void Student::setId(int id){
    this->id=id;
}
