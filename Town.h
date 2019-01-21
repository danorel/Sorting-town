//
// Created by Dan Orel on 1/20/19.
//
#include <iostream>
#include <string>

#ifndef SORTINGTOWN_TOWN_H
#define SORTINGTOWN_TOWN_H

class Library{
public:
    void insertion_sort(int *, int);
    void selection_sort(int *, int);
    void merge_sort(int *, int, int);
    bool linear_search(int *, int, int);
    void show_array(int *, int);
private:
    void swap(int *, int *);
    void merge(int *, int, int, int);
};

#endif //SORTINGTOWN_TOWN_H
