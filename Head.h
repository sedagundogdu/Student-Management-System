#ifndef HEAD_H
#define HEAD_H
#include "main.h"
#include <Instructor.h>
#include <iostream>
using namespace std;

class Head : protected Instructor
{
    public:

        Head(string name,string surname,int age,string email):Instructor(name,surname,age,email){
        cout<<"Enter username of head: ";
        cin>>username;

        cout<<"Enter password of head: ";
        cin>>password;
        }

        string getUsername();
        string getPassword();





    protected:

    private:
        int experience;
        string username;
        string password;
};

#endif // HEAD_H
