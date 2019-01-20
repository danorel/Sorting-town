//
// Created by Dan Orel on 1/20/19.
//

#include "Town.h"

void Library::insertion_sort(int *integer_array, int size) {
    int iteration_index;
    for(int iteration = 1; iteration < size; iteration++){
        iteration_index = iteration;
        for(int current_index = iteration - 1; current_index != -1; current_index--){
            if(integer_array[current_index] > integer_array[iteration_index]){
                swap(&integer_array[current_index], &integer_array[iteration_index]);
                iteration_index--;
            } else {
                break;
            }
        }
    }
}

void Library::swap(int *first, int *second) {
    int temp = *first;
    *first = *second;
    *second = temp;
}

void Library::show_array(int *integer_array, int size) {
    for(int counter = 0; counter < size; counter++){
        std::cout << integer_array[counter] << " ";
    }
}

