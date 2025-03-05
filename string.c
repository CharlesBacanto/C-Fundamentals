#include <stdio.h>
#include <string.h>

int main(){

    char string1[] = "Charles";
    char string2[] = "SoftwareDeveloper";



    // strlwr(string1); // lower case
    // strupr(string1); // upper case
    // strcat(string1,string2); // append
    // strncat(string1,string2, 1); // append number
    // strcpy(string1,string2);//copy
    // strcpy(string1,string2. 2); // copy number

    // strlen(string1); //stringlength
    // strset(string1, '?'); // set all characters to given char
    // strnset(string1, '?',2); // set number characters to given char
    // strrev(string1)// reverse
    //strcmp(string1,string2) // compare
    //strncmp(string1,string2) // compare set number
    //strcmpi(string1,string2) // compare ignore case
    //strnicmp(string1,string2) // compare ignore case

    char string1[] ="what";
    char string2[] = "hello";
    
    int result = strcmp(string1, string2);
    printf("%d",result);
}   