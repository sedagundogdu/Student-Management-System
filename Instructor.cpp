#include "Instructor.h"
#include <iostream>
#include <vector>


string Instructor::GetEmail(){
    return email;
}

void Instructor::DisplayLecture(vector<string>vec)
{
 for(int i =0; i<vec.size();i++){

    cout<<vec[i]<<",";
 }
 cout<<endl;

}

void Instructor::AddLecture(string lecture){

    lectures.push_back(lecture);

}


void Instructor::EraseLecture(int index){

    lectures.erase(lectures.begin()+index-1);

}




