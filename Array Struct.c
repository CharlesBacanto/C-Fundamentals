#include <stdio.h>
#include <string.h>

struct Student{

    char name[25];
    float gpa;
};

int main(){

    struct Student student1 = {"Charles", 1.5};
    struct Student student2 = {"Patrick", 2.75};
    struct Student student3 = {"SpongeBob", 2.5};
    struct Student student4 = {"Sandy", 1.5};

    struct Student students[] = {student1, student2,student3, student4};

    for(int i = 0; i < sizeof(students)/ sizeof (students[0]); i++){
        printf("Students Name: %s\n", students[i].name);
        printf("Students Name: %.2f\n\n", students[i].gpa);
    }

    return 0;
}
