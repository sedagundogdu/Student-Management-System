#include "InputOutput.h"
#include <vector>
#include <iostream>
#include "myVector.h"
using namespace std;
myVector v;
void InputOutput::DisplayInstructor(){
if(v.insts.empty()){
    cout<<"There is no instructor to shown"<<endl;
}
else{
for(int i =0; i<v.insts.size();i++){

    cout<<endl;
    cout<<i+1<<"- Name:"<<v.insts[i].getName()<<"  Surname:"<<v.insts[i].getSurname();
    cout<<"  Age:"<<v.insts[i].getAge();
    cout<<"  Email:"<<v.insts[i].GetEmail();
    cout<<endl;
 }

 }
}

void InputOutput::EraseInstructor(){
    int removed;
    if(v.insts.empty()){
        cout<<"There is no instructor to erase..."<<endl;
    }
    else{
    DisplayInstructor();
    cout<<endl<<"Please enter your choice( will be deleted ):"<<endl;
    cin>>removed;

    v.insts.erase(v.insts.begin() + removed - 1);
    cout<<endl<<"NEW LIST"<<endl;
    DisplayInstructor();
    }
}

void InputOutput::displayStudent(){
    if(v.students.empty()){
        cout<<"There is no student to display..."<<endl;
    }
else{
    for(int i =0; i<v.students.size();i++){

    cout<<endl;
    cout<<i+1<<"- Name:"<<v.students[i].getName()<<"  Surname:"<<v.students[i].getSurname();
    cout<<"  Age:"<<v.students[i].getAge();
    cout<<"  Absence:"<<v.students[i].getAbsence();
    cout<<"  Id:"<<v.students[i].getId();
    cout<<endl;
 }
    }
}
void InputOutput::EraseStudent(){
    if(v.students.empty()){
        cout<<"There is no student to erase..."<<endl;
    }
    else{
        int removed;
        displayStudent();
        cout<<endl<<"Please enter your choice(will be deleted ):"<<endl;
        cin>>removed;
        v.students.erase(v.students.begin() + removed - 1);
        cout<<endl<<"NEW LIST"<<endl;
        displayStudent();
    }
}

void InputOutput::AddInstructor(){

    string Name,Surname,Email,lecture;
    int Age;

    cout<<"Name: ";
    cin>>Name;

    cout<<"Surname: ";
    cin>>Surname;

    cout<<"Email: ";
    cin>>Email;

    cout<<"Age: ";
    cin>>Age;

        Instructor instructors(Name,Surname,Age,Email);
    v.insts.push_back(instructors);

    cout<<"Please enter Lecture:"<<endl;
    cin>>lecture;
    instructors.AddLecture(lecture); // bu objeyi zatgen çaðýrdýk ve içini doldurduk

}

void InputOutput::AddStudent(){

    string Name,Surname;
    int Id, Absence,Age;

    cout<<"Name: ";
    cin>>Name;

    cout<<"Surname: ";
    cin>>Surname;

    cout<<"Absence: ";
    cin>>Absence;

    cout<<"Id: ";
    cin>>Id;

    cout<<"Age: ";
    cin>>Age;

    if(Absence==0){
        Student stu(Name,Surname,Age,Id);
        v.students.push_back(stu);
    }
    else{
       Student stu(Name,Surname,Age,Absence,Id);
       v.students.push_back(stu);
    }
}
