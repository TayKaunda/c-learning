#include <stdio.h>

int main () {


    //WRITE APPEND FILE
    FILE *pF = fopen("C:\\Users\\mwiti\\Desktop\\test.txt","w");

    fprintf(pF,"I like Hawaiian pizza");

    fclose(pF);

    //DELETE A FILE
    /*
    if (remove("test.txt")==0)
    {
    printf("file removed succesfully");
    
    }
    else{

    printf("file not removed");
    }
    
    
    */

   return 0;
}