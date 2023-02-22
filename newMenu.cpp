#include "newMenu.h"
#include "newMenu.h"
#include <iostream>
#include <string>
#include "Student.h"
#include "InputOutput.h"
#include "Head.h"
using namespace std;
InputOutput IO;
Head h ("Baris","Manco",68,"barisManco@gmail.com");


void newMenu :: verification(string usr,string psw){
    string username,pass;

    cout<<"Please enter your username : ";
    cin>>username;
    cout<<"Please enter your password : ";
    cin>>pass;

    if(username==usr && pass==psw){
        cout<<"Login successful"<<endl;
    }

    else{
        cout<<"Wrong password or username..."<<endl<<"Program is terminating"<<endl;
        exit(0);
    }
}

void newMenu :: ExtraChoice(){
            int ops;


            cout << "\n\t\t**************************************************";
            cout << "\n\t\t****                                         *****";
            cout << "\n\t\t****       1_)Return Main Menu               *****";
            cout << "\n\t\t****                                         *****";
            cout << "\n\t\t****       2_)Exit                           *****";
            cout << "\n\t\t****                                         *****";
            cout << "\n\t\t**************************************************\n\n";

            cout<<"Please enter your choice...";
            cin>>ops;
            switch(ops){

        case 1:
            newMenu::opening();
            break;

        case 2:
            cout<<"Program is terminating";
            exit(0);
            break;


        default:
            newMenu::ExtraChoice();
            break;


    }

}
void newMenu :: opening(){
    system("CLS");

 	cout << "\n\t\t**************************************************";
	cout << "\n\t\t****                                         *****";
    cout << "\n\t\t****       1_)Add Student                    *****";
	cout << "\n\t\t****                                         *****";
	cout << "\n\t\t****       2_)Display Student                *****";
    cout << "\n\t\t****                                         *****";
	cout << "\n\t\t****       3_)Erase Student                  *****";//
	cout << "\n\t\t****                                         *****";
	cout << "\n\t\t****       4_)Add Instructor                 *****";
	cout << "\n\t\t****                                         *****";
	cout << "\n\t\t****       5_)Display Instructor             *****";
	cout << "\n\t\t****                                         *****";
	cout << "\n\t\t****       6_)Erase Instructor               *****";
    cout << "\n\t\t****                                         *****";
    cout << "\n\t\t****       7_)Exit                           *****";
    cout << "\n\t\t****                                         *****";
	cout << "\n\t\t****                                         *****";
	cout << "\n\t\t**************************************************\n\n";

	int option=0;
	cout<<"Please enter your choice"<<endl;
	cin>>option;
    InputOutput IO;

	if(option==1){
        int i;
        newMenu::verification(h.getUsername(),h.getPassword());
        IO.AddStudent();
        newMenu::ExtraChoice();
        }
    else if(option==2){
        system("CLS");
        newMenu::verification(h.getUsername(),h.getPassword());
        cout<<"---List of students---";
        IO.displayStudent();
        newMenu::ExtraChoice();
	}

	else if(option==3){
        newMenu::verification(h.getUsername(),h.getPassword());
        InputOutput IO;
        IO.EraseStudent();
        newMenu::ExtraChoice();

	}

	else if(option==4){
        newMenu::verification(h.getUsername(),h.getPassword());
        InputOutput IO;

        IO.AddInstructor();
        newMenu::ExtraChoice();
	}

	else if(option==5){
        newMenu::verification(h.getUsername(),h.getPassword());
        IO.DisplayInstructor();
        newMenu::ExtraChoice();

	}

	else if(option==6){

        newMenu::verification(h.getUsername(),h.getPassword());
        IO.EraseInstructor();
        newMenu::ExtraChoice();

	}
    else if(option==7){
        exit(0);
	}



















}
