//
// Created by Dan Orel on 1/20/19.
//

#include "Town.h"

void Library::insertion_sort(int *integer_array, int size) {
    if(size != 0) {
        int iteration_index;
        for (int iteration = 1; iteration < size; iteration++) {
            iteration_index = iteration;
            for (int current_index = iteration - 1; current_index != -1; current_index--) {
                if (integer_array[current_index] > integer_array[iteration_index]) {
                    swap(&integer_array[current_index], &integer_array[iteration_index]);
                    iteration_index--;
                } else {
                    break;
                }
            }
        }
    }
}

void Library::selection_sort(int *integer_array, int size) {
    int MIN = INT32_MAX;
    int *current_array = new int[size];
    for(int iteration = 0; iteration < size; iteration++){

    }
    show_array(current_array, size);
}

void Library::merge_sort(int *integer_array, int start_index, int end_index){
    if(end_index > start_index){
        int middle_index = ((end_index - start_index) / 2);
        merge_sort(integer_array, start_index, middle_index);
        merge_sort(integer_array, middle_index + 1, end_index);
        merge(integer_array, start_index, middle_index, end_index);
    }
}

void Library::merge(int *integer_array, int start_index, int middle_index, int end_index) {
    int *fsub_integer_array = new int[middle_index - start_index + 1];
    int *ssub_integer_array = new int[end_index - middle_index];

    for(int index = 0; index < middle_index - start_index + 1; index++){
        fsub_integer_array[index] = integer_array[index];
    }

    for(int index = 0; index < end_index - middle_index; index++){
        ssub_integer_array[index] = integer_array[end_index - middle_index + index];
    }

    int f_iter = 0, s_iter = 0, iterator = start_index;
    while((f_iter < middle_index - start_index + 1) && (s_iter < end_index - middle_index)){
        if(fsub_integer_array[f_iter] >= ssub_integer_array[s_iter]){
            integer_array[iterator++] = ssub_integer_array[s_iter++];
        } else {
            integer_array[iterator++] = fsub_integer_array[f_iter++];
        }
    }

    while(f_iter < middle_index - start_index + 1){
        integer_array[iterator++] = fsub_integer_array[f_iter++];
    }

    while(s_iter < end_index - middle_index){
        integer_array[iterator++] = ssub_integer_array[s_iter++];
    }

}


bool Library::linear_search(int *integer_array, int size, int element) {
    if(size != 0){
        for(int iteration = 0; iteration < size; iteration++){
            if(integer_array[iteration] == element){
                return true;
            }
        }
    }
    return false;
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

