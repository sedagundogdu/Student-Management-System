#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include <Person.h>
#include <vector>
using namespace std; // öðretmen

class Instructor : public Person
{
    public:

        Instructor(string name,string surname,int age,string email):Person(name,surname,age){
        this->email=email;
        };//inheritance and consterucyor

        string GetEmail();

        void AddLecture(string lecture);
        void DisplayLecture(vector <string >vec);// no need to send referance  because ve do not modify vector only read.
        void EraseLecture(int index);


    protected:

    private:
        string email;
        vector <string> lectures;

};

#endif // INSTRUCTOR_H
