/***********************************************************************
* Program:
*    Checkpoint 01b, Arrays
*    Brother Walker, CS165
* Author:
*    Michael Alves
* Summary:
*    -
* ***********************************************************************/

#include <iostream>
using namespace std;

/**********************************************************************
 * Function: getSize
 * Purpose: Prompt the user for the size of our array
 ***********************************************************************/
int getSize()
{
   int tempSize;
   cin >> tempSize;
   return tempSize;
}

/**********************************************************************
 * Function: getList
 * Purpose: Prompt the user for populate our new array
 ***********************************************************************/
void getList(int arr[], int size)
{
   for (int i = 0; i < size; i++)
   {
      cout << "Enter number for index " << i << ": ";
      cin >> arr[i];
   }
}


/**********************************************************************
 * Function: displayMultiples
 * Purpose: Show numbers that are divisible by 3
 ***********************************************************************/
void displayMultiples(int arr[], int size)
{
   cout << endl << "The following are divisible by 3:" << endl;

   for (int i = 0; i < size; i++)
   {
      if ((arr[i] % 3) == 0)
      {
         cout << arr[i] << endl;
      }
   }
}

/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
int main()
{
   int sizeList;
   int array[10];

   cout << "Enter the size of the list: ";
   sizeList = getSize();

   getList(array, sizeList);

   displayMultiples(array, sizeList);

   return 0;
}
