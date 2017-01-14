/***********************************************************************
* Program:
*    Checkpoint 01a, review
*    Brother Walker, CS165
* Author:
*    Michael Alves
* Summary:
*    -
* ***********************************************************************/

#include <iostream>
using namespace std;

/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
int main()
{
   char firstname[255];
   int age;

   cout << "Hello CS 165 World!" << endl;
   cout << "Please enter your first name: ";
   cin >> firstname;
   cout << "Please enter your age: ";
   cin >> age;

   cout << endl << "Hello " << firstname << ", you are "
        << age << " years old." << endl;

   return 0;
}
