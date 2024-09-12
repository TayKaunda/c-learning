#include <stdio.h>
#include <stdbool.h>

int main() {
    char a = 'C';     // single character placeholder %c
    char b[] = "Maybe"; // array palce holder %s

    float c = 3.456767; // 4 bytes (32bits) 6-7 digit  %f
    double d = 3.236376787834567; // 8 bytes(64 bits) 15-16 didgits %lf

    //bool e = true; //1byte (true or false) %d

    char f = 115; // 1 byte (-128 to +127) %d or %c
    //unsigned char g = 255; // 1 byte (0-+255) %d or %c

    // short int h = 32767 // 2 bytes (-32,7688 to + 32,767) %d
    // unsigned short int i = 65535; // 2 bytes (0 to + 65,535) %d

    int j = 2147483647; // 4 bytes (-2,147,483,647 to +2,147,483,647) %d
    // unsigned int k = 4294967295l; //4 bytes (0 to + 4,294,967,295) %u
    //long long int l = 9223372036854775807; // 8 bytes (-9 quintillion to +9 quintillion) %lld
    //unsigned long long int m = 184446744073709551615u; // 8 bytes (0 to 18 quintillion) %llu
 printf ("%c\n",a); // char
 printf ("%s\n",b); //character array
 printf ("%f\n",c); // float
 printf ("%lf\n",d); // double
// printf ("%d\n",e); // bool
 printf ("%c\n",f); // char as numeric value
// printf ("%d\n", g); // unsigned char as numeric value
// printf ("%d\n", h); // short
// printf ("%d\n", i); //unsigned short
 printf ("%d\n", j); // int
// printf ("%u\n", k); // unsigned int 
// printf ("%lld\n", l); //long long int
// printf ("%llu\n", m ); //unsinged long long int



    return 0;
}

