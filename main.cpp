#include "Town.h"

int main() {
    // Testing array of integer numbers
    int *array = new int[6];
    array[0] = 5;
    array[1] = 2;
    array[2] = 4;
    array[3] = 6;
    array[4] = 1;
    array[5] = 3;

    Library library;
    library.insertion_sort(array, 6);
    library.show_array(array, 6);

    return 0;
}