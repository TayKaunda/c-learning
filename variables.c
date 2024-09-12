#include <stdio.h>

int main () {
    /* variables = allocated space in memory 
       for storing values
       acts as the value it contains
       needs to be declared as what data type is stored.
    */

   int x; //declaration
   x = 1629; // initialization
   int y = 456; // declaration + initialization

   int age = 21; // integer
   float gpa = 4.52; // floating point 
   char grade = 'A'; // character single
   char name [] = "Ski"; // array of characters

   printf("You are %d years old \n", age);
   printf("Your grades are %.2f \n",gpa);
   printf("Lastly your namme is %s",name);

    return 0;
}