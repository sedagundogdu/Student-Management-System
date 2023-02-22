#include "Person.h"

Person::Person(string name,string surname,int age){

    this->name=name;
    this->surname=surname;
    this->age=age;
}

string Person::getName(){
return name;
}

string Person::getSurname(){
return surname;
}

int Person::getAge(){
return age;
}




