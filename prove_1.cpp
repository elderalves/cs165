/***********************************************************************
* Program:
*    Assignment 01, Genetic Genealogy
*    Brother Walker, CS165
* Author:
*    Michael Alves
* Summary:
*    This program will verify if some DNAs is compatible
*    with my given DNA.
* ***********************************************************************/

#include <iostream>

using namespace std;

/**********************************************************************
 * Function: showMatch
 * Purpose: It'll made comparation and return the Percent
 ***********************************************************************/
int showMatch(char myDNA[10], char otherDNA[10])
{
   int result = 0;

   for (int i = 0; i < 10; i++)
   {
      if (myDNA[i] == otherDNA[i])
      {
         result = result + 10;
      }
   }

   return result;
}


/**********************************************************************
 * Function: verifyRelatives
 * Purpose: This function is taking information about our "Relatives"
 * then it'll call the "showMatch" function and show to us the final
 * result
 ***********************************************************************/
void verifyRelatives(char myDNA[], int potentialRelatives)
{

   char namesRel[potentialRelatives][255];
   char othersDNA[potentialRelatives][10];

   for (int i = 0; i < potentialRelatives; i++)
   {
      cout << "Please enter the name of relative #" << (i + 1) << ": ";
      cin >> namesRel[i];
   }

   cout << endl;

   for (int i = 0; i < potentialRelatives; i++)
   {
      cout << "Please enter the DNA sequence for " << namesRel[i] << ": ";
      cin >> othersDNA[i];
      cin.ignore();
   }

   cout << endl;

   for (int i = 0; i < potentialRelatives; i++)
   {
      cout << "Percent match for " << namesRel[i] << ": ";
      cout << showMatch(myDNA, othersDNA[i]) << "%" << endl;
   }

}


/**********************************************************************
 * Function: main
 * Purpose: This is our bootstrap, it's taking our information and then
 * calling the "verifyRelatives" to compare my information
 * with relatives information.
 ***********************************************************************/
int main()
{
   char yourDNA[10];

   int potentialRelatives;

   cout << "Enter your DNA sequence: ";
   cin >> yourDNA;
   cout << "Enter the number of potential relatives: ";
   cin >> potentialRelatives;
   cout << endl;

   verifyRelatives(yourDNA, potentialRelatives);

   return 0;
}
