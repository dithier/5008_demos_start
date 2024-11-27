#include <stdio.h>
#include <stdlib.h>

typedef struct vector {
    int _capacity;
    int _size;
    int* _data;
} vector_t;

vector_t* make_vector(int capacity) {
    // malloc for vec and check for success
    // set capcity, size, data
    // return vec
}

void free_vector(vector_t* vector) {
    // free data first
    // then free vec
}

void print_vector(vector_t* vector) {
    // check that vec and data aren't null
    // iterate over data and print
}

void resize(vector_t* vector) {
    // determine new capcity
    // make new data
    // copy over elements to new data
    // update original capcity
    // free vector data
    // replace vector data with new data
}

int push_back(vector_t* vector, int num) {
    // check vector for null
    // check if we need to resize
    // add element to vec's data and increment size
}

int push_front(vector_t* vector, int num) {
    // check if vec is null
    // check if we need to resize
    // shift all elements right 1
    // add elmenet and increment size
}

int main() {
    vector_t* vector = make_vector(2);

    push_back(vector, 1);
    push_back(vector, 2);

    printf("Vector should be 1, 2\n");
    print_vector(vector);

    push_back(vector, 3);

    printf("Vector should be 1, 2, 3\n");
    print_vector(vector);

    /*    push_front(vector, 0);

        printf("Vector should be 0, 1, 2, 3\n");
        print_vector(vector);

        push_front(vector, -1);

        printf("Vector should be -1, 0, 1, 2, 3\n");
        print_vector(vector);
    */
    free_vector(vector);

    return 0;
}
