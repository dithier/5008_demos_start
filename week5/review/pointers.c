#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void pointer_basics() {
    int age = 33;         // an int variable
    printf("%d\n", age);  // Prints the value of age (33)
    printf("The age variable lives at %p\n",
           &age);  // outputs memory address of age

    // I can store age's memory location in a pointer variable
    int* p_age = &age;
    // I can now change the contents of age dereferencing  p_age
    *p_age = 50;

    printf("%d\n", age);
    // could also write this by dereferencing the pointer
    printf("%d\n", *p_age);

    // Note the pointer is the same address from earlier, it's just
    // the contents of that memory address has changed
    printf("The age variable lives at %p\n", p_age);
}

void pointers_and_arrays() {
    int arr[] = {1, 2, 3, 4, 5};
    // Refering to arr is the same as refering to the memory address
    // of the 0th element of the array
    printf("Arr printed as a pointer: %p\n", arr);
    printf("Memory address of the 0th element of the array: %p\n", &arr[0]);

    // print out the addresses of each element in the array
    for (int i = 0; i < 5; i++) {
        printf("element %d lives at %p\n", i, &arr[i]);
    }

    // print out each element in the array
    for (int i = 0; i < 5; i++) {
        printf("element %d is %d\n", i, arr[i]);
    }
}

// this function takes in a pointer to an int
void update_favorite_number_to_6(int* number) {
    // change the contents of the memory address stored in number to 6
    *number = 6;
    // note if I had not used a pointer for this, the update wouldn't be
    // reflected in the calling function.
}

void print_array(int* arr, int len) {
    for (int i = 0; i < len; i++) {
        printf("%d\n", arr[i]);
    }

    printf("\n");

    // could also do this with pointer arithmetic
    for (int i = 0; i < len; i++) {
        printf("%d\n", *(arr + i));
    }

    printf("\n");
}

void functions_and_pointers() {
    // say I want I want to change the value of an argument I send into a
    // function I can only change it both in the function and outside if I pass
    // by reference (as opposed to value). I can do this using a pointer;

    int favorite_number = 3;
    // here I pass in the memory address where favorite_number lives
    update_favorite_number_to_6(&favorite_number);

    // favorite number has now been changed
    printf("Favorite number is now %d\n", favorite_number);

    int arr[] = {1, 2, 3};
    print_array(arr, 3);

    // the only way to initialize the array as an explict pointer is by calling
    // malloc so we can allocate memory on the heap
    int* other_array = (int*)malloc(sizeof(int) * 3);
    for (int i = 0; i < 3; i++) {
        other_array[i] = i;
    }
    print_array(other_array, 3);

    // there should be a free for every malloc
    free(other_array);
}

void strings() {
    // can make a string out of char*. Don't forget to allocate enough
    // room for string AND null terminator
    char* my_string = (char*)malloc(sizeof(char) * 6);
    // make sure malloc was succesfull!
    if (my_string == NULL) {
        return;
    }

    // Copy "hello" to the string we just made
    strcpy(my_string, "hello");

    printf("%s\n", my_string);

    // can also initialize a string as a char array. Don't forget null
    // terminator!
    char other_string[] = {'W', 'o', 'r', 'l', 'd', '\0'};
    // we can find out string length from strlen from string.h header
    // we use zu because strlen returns variable of type size_t
    printf("%s has length %zu\n", other_string, strlen(other_string));
}

typedef struct student {
    int student_id;
    float gpa;
    char* name;
} student_t;

void print_student(student_t* student) {
    printf("%d\n", student->student_id);
    printf("%f\n", student->gpa);
    printf("%s\n", student->name);
    printf("\n");
}

void structs_and_pointers() {
    // we need to allocate space for the student and initalize everything
    // Realisticaly would prob make a make_student function if doing this
    // multiple times
    student_t* coco = (student_t*)malloc(sizeof(student_t));

    // make sure malloc was successful
    if (coco == NULL) {
        printf("malloc unsuccessfu\n");
        return;
    }

    // intialize values
    int length = strlen("Coco") + 1;  // + 1 is for null terminator
    coco->name = (char*)malloc(sizeof(char) * length);
    strcpy(coco->name, "Coco");
    coco->student_id = 5;
    coco->gpa = 4.0;

    // print
    print_student(coco);

    // don't forget to free everythign we malloc'd
    free(coco->name);
    free(coco);
}

int main() {
    /*
    pointer_basics();
    pointers_and_arrays();
    functions_and_pointers();
    strings();
    structs_and_pointers();
    */
    return 0;
}
