#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "arraylist.h"

//normal array
typedef struct ArrayList {
    void **data;
    int capacity;
    int size;
} ArrayList;

ArrayList *createList(void) {
    ArrayList *l = NULL;
    l = (ArrayList *) malloc(sizeof(ArrayList));
    if(l == NULL) exit(EXIT_FAILURE);
    l->data = (void *) calloc(2,sizeof(void));
    l->capacity = 2;
    l->size = 0;
    return l;
}

void append(ArrayList * l, void * data){

}

void push(ArrayList * l, void * data, int i){

}

void* pop(ArrayList * l, int i){
    return NULL;
}

void* get(ArrayList * l, int i){
    return NULL;
}

int get_size(ArrayList * l){
    return l->size;
}

//remove elements
void clean(ArrayList * l){
    
}
