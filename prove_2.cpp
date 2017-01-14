/***********************************************************************
* Program:
*    Assignment 02, Digital Forensics
*    Brother Walker, CS165
* Author:
*    Michael Alves
* Summary:
*    This program will output informations about files
* ***********************************************************************/

#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

struct AccessRecord
{
   string username;
   string filename;
   long timestamp;
};

/**********************************************************************
 * Function: readFile
 * Purpose: It'll open the file with informations and will to fill
 * out array of "AccessRecord" struct.
 ***********************************************************************/
void readFile(AccessRecord (&arrRecord)[500])
{
   char file[255];

   cout << "Enter the access record file: ";
   cin >> file;

   ifstream openFile(file);

   if (openFile.fail())
   {

   }

   char tempFilename[255];
   char tempUsername[255];
   long tempTimestamp;
   int count = 0;

   while (!openFile.eof())
   {
      openFile >> tempFilename;
      openFile >> tempUsername;
      openFile >> tempTimestamp;

      arrRecord[count].filename = tempFilename;
      arrRecord[count].username = tempUsername;
      arrRecord[count].timestamp = tempTimestamp;

      count++;
   }

   openFile.close();
   cout << endl;
}

/**********************************************************************
 * Function: matchCriteria
 * Purpose: It'll verify with that information is valide
 * in the time range, if tru it'll output the informations
 ***********************************************************************/
void matchCriteria(AccessRecord arrRecord[], long initTime, long finishTime)
{
   cout << "The following records match your criteria:" << endl << endl;

   cout << "      Timestamp" << setw(20) << "File"
        << setw(20) << "User" << endl;
   cout << "--------------- ------------------- -------------------" << endl;
  // cout << setw(15) <<

   int i = 0;
   while (arrRecord[i].timestamp)
   {
      if (arrRecord[i].timestamp >= initTime &&
          arrRecord[i].timestamp <= finishTime)
      {
         cout << "     " << arrRecord[i].timestamp;
         cout << setw(20);
         cout << arrRecord[i].filename;
         cout << setw(20);
         cout << arrRecord[i].username;
         cout << endl;
      }
      i++;
   }
}

/**********************************************************************
 * Function: main
 * Purpose: It's the main point, We're declaring our struct array
 * and prompt the user about our range time
 ***********************************************************************/
int main()
{
   AccessRecord myFiles[500];
   readFile(myFiles);

   long startTime;
   long endTime;

   cout << "Enter the start time: ";
   cin >> startTime;
   cout << "Enter the end time: ";
   cin >> endTime;
   cout << endl;

   matchCriteria(myFiles, startTime, endTime);
   cout << "End of records" << endl;

   return 0;
}
