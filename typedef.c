#include <stdio.h>
#include <string.h>

typedef char User[25];
typedef struct{
    char name[25];
    int age;
    
}Person;
int main(){

    User user1 ="Charles";
    Person person1 = {"Dom", 22};

   
    printf("%s", person1.name);
    printf("%d", person1.age);
    return 0;
}