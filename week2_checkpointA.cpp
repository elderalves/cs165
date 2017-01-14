/***********************************************************************
* Program:
*    Checkpoint 02a, Structs
*    Brother Walker, CS165
* Author:
*    Michael Alves
* Summary:
*    -
* ***********************************************************************/

#include <iostream>
using namespace std;

struct Student
{
   int id;
   char firstName[255];
   char lastName[255];
};

/**********************************************************************
 * Function: promptStudent
 * Purpose: It'll prompt for information about the student
 * and will return these informations
 ***********************************************************************/
Student promptStudent()
{
   Student tempStudent;
   cout << "Please enter your first name: ";
   cin >> tempStudent.firstName;
   cout << "Please enter your last name: ";
   cin >> tempStudent.lastName;
   cout << "Please enter your id number: ";
   cin >> tempStudent.id;

   return tempStudent;
}

/**********************************************************************
 * Function: displayStudent
 * Purpose: Show the informations about the given student
 ***********************************************************************/
void displayStudent(Student theStudent)
{
   cout << "Your information:" << endl;
   cout << theStudent.id << " - " << theStudent.firstName
        << " " << theStudent.lastName << endl;
}

/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
int main()
{
   Student newStudent;

   newStudent = promptStudent();
   cout << endl;
   displayStudent(newStudent);

   return 0;
}
