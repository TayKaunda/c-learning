#include <stdio.h>
#include <ctype.h>

int main () {

    char unit;
    float temp;

    printf("\nls the temperatur in (F) or (C)?:");
    scanf("%c", &unit);

    unit = toupper(unit);

    if(unit =='C') {
        printf ("\n Enter temperature in Celcius:");
        scanf("%f", &temp);
        temp = (temp * 9/5) + 32;
        printf("\n temp in Farenheit is : %.1f", temp);

    }

    else if (unit =='F'){
        printf("\n Enter temperature in Farenheit:");
        scanf("%f", &temp);
        temp = ((temp-32)*5)/9;
        printf("\n the temp in Celsius is: %.1f", temp);

    }
    else{
        printf("\n %c is an Invalid unit",unit);
    }

     return 0;
    }


   
