/***********************************************************************
* Program:
*    Checkpoint 03b, Errors
*    Brother Walker, CS165
* Author:
*    Michael Alves
* Summary:
*    -
* ***********************************************************************/

#include <iostream>
using namespace std;

/**********************************************************************
 * Function: prompt
 * Purpose: it'll take a number from the user. For final it'll verify
 * if there are some errors.
 ***********************************************************************/
int prompt() throw (string)
{
   int number;
   bool err;

   do
   {
      err = false;
      cout << "Enter a number: ";
      cin >> number;

      if (cin.fail())
      {
         err = true;
         cout << "Invalid input." << endl;
         cin.clear();
         cin.ignore(256, '\n');
      }
   } while (err);

   return number;
}


/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
int main()
{
   int num;
   num = prompt();
   cout << "The number is " << num << "." << endl;


   return 0;
}
