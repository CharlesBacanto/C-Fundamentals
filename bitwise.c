#include <stdio.h>

int main(){
    // Binary
    // 0 0 0 0  0 0 0 0
    // 128 64 32 16  6 4 2 1
    //& and basta both 1
    // | or basta may 1 g
    // ^ xor isa lang na 1 dapat pag may katulad 0
    // << left shift
    // >> right shift

    int x = 6; // 0000  0110
    int y = 12; // 0000 1100
    int z = 0; // 0000  1110

    int a = 14; // 0000 1110
    int b = 5; // 0000  0101 
    int c = 0; //0000   1111
    z = x & y;
    c = a & b;

    printf("AND = %d\n",z);
    printf("AND %d\n",c);

    z = x | y;
    c = a | b;


    printf("Or = %d",z);
    printf("Or = %d",c);

    // int a = 14; // 0000 1110
    // int b = 5; // 0000  0101 
    // int c = 0; //0000   1011
    c = a ^ b;

    printf("XOr = %d",c);

    z = x << 1; // shift is lilipat ng space tapos number is kung ilang space ng 0 edi dodoble lang
    z =x >> 1; // same pero ibang direction

    return 0;
}