/*  This code is created to convert .csv files, created by a LaserLux G7, into .kml files.
    They will be uploaded onto a google earth application.

        Written By:  Alexander Besuden       Date: 5/9/18

*/


#include <stdio.h>

#include <stdlib.h>
#include <string.h>

int retro (array* var1, array* var2, array* var 3);



void basicArray (void);

mathOnArray (int value1, int value2, int* count, int* counter);


int main(void) {

// intitilization
  char fileName[50];

  array retroAvg[250];
  int Rating1, Rating2, Rating3, Rating4, Rating5, Rating6, Rating7, Rating8, Rating 9;
  int ratedRetroAvg1, ratedRetroAvg2, ratedRetroAvg3, ratedRetroAvg4, ratedRetroAvg5, ratedRetroAvg6, ratedRetroAvg7, ratedRetroAvg8, ratedRetroAvg9;



  FILE* spInputData;

  char fileNameByFile[150];

  int counter = 0, count = 0;
// import .csv file

  fopen("*.csv", "r");
  retro (rating1, rating2, rating3);

// create array

   array retroAvg[250];
// store the file name in a variable, this will be the title of the parent folder

   system("clear");



   printf("Please drag and drop desired file for conversion into this window");

   char fileNameByFile[150] = system("echo *.csv");


   system("clear");

// store the rating levels in variables  (will be used later for ranges)
   

// pick out the desired pieces of information and store in variables or another array


// math  (average the retroreflective readings)

   counter = fgetc(fileNameByFile);
   count = fgetc(fileNameByFile);

   while (counter < count) { // pull in couter values from file
     ratedRetroAvgCount = (ratingCounter + (ratingCounter +1))/2;
   }
   mathArray (&ratingCounter, &(ratingCounter +1), &counter, &count);
// while loop (loop through retro avgs and make range

   while ( retroAvg[250] <= Rating1 && retroAvg[250] != 0 ) {
     ratedRetroAvg1 = retroAvg[250];
   }

   while ( retroAvg[250] > Rating1 && ratroAvg[250] <= Rating2 && retroAvg[250] != 0 ) {
     ratedRetroAvg2 = retroAvg[250];
   }

   while ( retroAvg[250] > Rating2 && ratroAvg[250] <= Rating3 && retroAvg[250] != 0 ) {
     ratedRetroAvg3 = retroAvg[250];
   }

   while ( retroAvg[250] > Rating3 && ratroAvg[250] <= Rating4 && retroAvg[250] != 0 ) {
     ratedRetroAvg4 = retroAvg[250];
   }

   while ( retroAvg[250] > Rating4 && ratroAvg[250] <= Rating5 && retroAvg[250] != 0 ) {
     ratedRetroAvg5 = retroAvg[250];
   }

   while ( retroAvg[250] > Rating5 && ratroAvg[250] <= Rating6 && retroAvg[250] != 0 ) {
     ratedRetroAvg6 = retroAvg[250];
   }

   while ( retroAvg[250] > Rating6 && ratroAvg[250] <= Rating7 && retroAvg[250] != 0 ) {
     ratedRetroAvg7 = retroAvg[250];
   }

   while ( retroAvg[250] > Rating7 && ratroAvg[250] <= Rating8 && retroAvg[250] != 0 ) {
     ratedRetroAvg8 = retroAvg[250];
   }

   while ( retroAvg[250] > Rating8 && ratroAvg[250] <= Rating9 && retroAvg[250] != 0 ) {
     ratedRetroAvg9 = retroAvg[250];
   }
// print new array out to .kml file (can it use systemOut command?)

  system("echo /* %array tag 1 */  > %s.kml", ratedRetroAvg[arrays], fileName);

  system("echo /* %array tag 2 */  >> %s.kml", ratedRetroAvg[arrays], fileName);

  system("echo /* %array tag 3 */  >> %s.kml", ratedRetroAvg[arrays], fileName);

  system("echo /* %array tag 4 */  >> %s.kml", ratedRetroAvg[arrays], fileName);

  system("echo /* %array tag 5 */  >> %s.kml", ratedRetroAvg[arrays], fileName);

  system("echo /* %array tag 6 */  >> %s.kml", ratedRetroAvg[arrays], fileName);

  system("echo /* %array tag 7 */  >> %s.kml", ratedRetroAvg[arrays], fileName);

  system("echo /* %array tag 8 */  >> %s.kml", ratedRetroAvg[arrays], fileName);

  system("echo /* %array tag 9 */  >> %s.kml", ratedRetroAvg[arrays], fileName);
return 0;
}
array retro (array* var1, array* var2, array* var3) {
 // this function was designed to pull in the values from the array and work to sort the values and give them flags for further processing

  // initilization
    char scanedFile[1000];
  // read file

  scanedFile=fscanf("*.csv");
  fprintf ( var1*, var2*, var3*, "Airport.kml");

 return 0;
}

void basicArray (void) {

  system("echo /* %array tag 1 */  > %s.kml", ratedRetroAvg[arrays], fileName);

  system("echo /* %array tag 2 */  >> %s.kml", ratedRetroAvg[arrays], fileName);

  system("echo /* %array tag 3 */  >> %s.kml", ratedRetroAvg[arrays], fileName);

  system("echo /* %array tag 4 */  >> %s.kml", ratedRetroAvg[arrays], fileName);

  system("echo /* %array tag 5 */  >> %s.kml", ratedRetroAvg[arrays], fileName);

  system("echo /* %array tag 6 */  >> %s.kml", ratedRetroAvg[arrays], fileName);

  system("echo /* %array tag 7 */  >> %s.kml", ratedRetroAvg[arrays], fileName);

  system("echo /* %array tag 8 */  >> %s.kml", ratedRetroAvg[arrays], fileName);

  system("echo /* %array tag 9 */  >> %s.kml", ratedRetroAvg[arrays], fileName);

}

mathOnArray (int value1, int value2, int* count, int* counter) {

   counter = fgetc(fileNameByFile);

   count = fgetc(fileNameByFile);
   while (counter < count) { // pull in couter values from file
     ratedRetroAvgCount = (ratingCounter + (ratingCounter +1))/2;

   }
}
