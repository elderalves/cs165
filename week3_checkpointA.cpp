/***********************************************************************
* Program:
*    Checkpoint 03a, Exceptions
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

   cout << "Enter a number: ";
   cin >> number;

   if (number < 0)
   {
      throw string("The number cannot be negative.");
   }
   else if (number > 100)
   {
      throw string("The number cannot be greater than 100.");
   }
   else if ((number % 2) != 0)
   {
      throw string("The number cannot be odd.");
   }

   return number;
}


/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
int main()
{
   try
   {
      int num;
      num = prompt();
      cout << "The number is " << num << "." << endl;
   }
   catch (string errMsg)
   {
      cout << "Error: " << errMsg << endl;
   }

   return 0;
}
