#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    char string[1000];
    char l[5];
    char lm[5];
    char le[5];
    gets(string);
     int count = 0;
     char *token = (string," ");
     while( token != NULL ) {
         if(strcmp(token,l) ==0)
             count+=2;
         if(strcmp(token,lm) ==0)
             count+=3;
         if(strcmp(token,le) ==0)
             count+=4;
     token = strtok(NULL, " ");
        
    }
    if(count <=5)
        printf("Patient has bright red face");
    else if(count <=12)
        printf("Patient is unable to speak");
    else if(count <= 20)
        printf("Patient's sides are mildly bruised");
    else if(count <= 30)
        printf("Patient has broken jaw, fractured ribs");
    else if(count <= 49)
        printf("Patient is in a coma");
    else
        printf("Patient is dead");
    return 0;
}
