/***********************************************************************
* Program:
*    Checkpoint 02b, Complex Numbers
*    Brother Walker, CS165
* Author:
*    Michael Alves
* Summary:
*    -
* ***********************************************************************/

#include <iostream>
using namespace std;

struct Complex
{
   double real;
   double imaginary;
};


/**********************************************************************
 * Function: promptComplex
 * Purpose: To fill our Complex variable.
 ***********************************************************************/
Complex promptComplex()
{
   Complex tempComplex;

   cout << "Real: ";
   cin >> tempComplex.real;
   cout << "Imaginary: ";
   cin >> tempComplex.imaginary;

   return tempComplex;
}

/**********************************************************************
 * Function: display
 * Purpose: Show the final sum of our Complex variables.
 ***********************************************************************/
void display(Complex resultSum)
{
   cout << resultSum.real << " + " << resultSum.imaginary << "i";
}


/**********************************************************************
 * Function: addComplex
 * Purpose: Adds two complex numbers together and returns the sum.
 ***********************************************************************/
Complex addComplex(const Complex &x, const Complex &y)
{
   Complex tempResult;
   tempResult.real = y.real + x.real;
   tempResult.imaginary = y.imaginary + x.imaginary;

   return tempResult;

}


/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
int main()
{

   Complex c1;
   Complex c2;

   c1 = promptComplex();
   c2 = promptComplex();

   Complex result;
   result = addComplex(c1,c2);


   cout << "\nThe sum is: ";
   display(result);
   cout << endl;

   return 0;
}
