#include "Town.h"

int main() {
//     Testing array of integer numbers
    int *array = new int[8];
    array[0] = 5;
    array[1] = 2;
    array[2] = 8;
    array[3] = 6;
    array[4] = 1;
    array[5] = 3;
    array[6] = 7;
    array[7] = 4;

    Library library;
//    library.insertion_sort(array, 6);
//    library.show_array(array, 6);
//    library.selection_sort(array, 6);
    library.merge_sort(array, 0, 7);
    library.show_array(array, 8);

    return 0;
}
