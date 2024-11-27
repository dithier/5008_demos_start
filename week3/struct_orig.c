#include <stdio.h>
#include <string.h>

typedef struct student {
    char name[10];
    int age;
    int id_number;
} student_t;

// change to take pointer
void print_student(student_t student) {
    printf("Name: %s\n", student.name);
    printf("Age: %d\n", student.age);
    printf("ID: %d\n", student.id_number);
}

// make student
student_t make_student(char* name, int age, int id) {
    // todo
}

// make student (incorrect)
student_t* wrong_make_student(char* name, int age, int id) {
    // todo
}

student_t* correct_make_student(char* name, int age, int id) {
    // todo
}

int main() {
    student_t Kwame;
    strcpy(Kwame.name, "Kwame");
    Kwame.age = 10;
    Kwame.id_number = 6;

    print_student(Kwame);

    // make Carlos

    // make jane correct

    // make undefined student (wrong)

    // free

    return 0;
}

return 0;
}
