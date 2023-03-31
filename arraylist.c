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
    ArrayList *lista = NULL;
    lista = (ArrayList *) malloc(sizeof(ArrayList));
    if(lista == NULL) exit(EXIT_FAILURE);
    lista->data = (void *) calloc(2,sizeof(void));
    lista->capacity = 2;
    lista->size = 0;
    return lista;
}

void append(ArrayList * lista, void * data){
  if (lista->size == lista->capacity){
        lista->capacity = lista->capacity * 2;
        lista->data = (void **)realloc (lista->data, lista->capacity*sizeof(void *));
    }
    lista->data[lista->size] = data;
    lista->size++;
    return;
}

void push(ArrayList * lista, void * data, int i){
  if(i > lista->size) return;
  
    if (lista->size == lista->capacity){
        lista->capacity *= 2;
        lista->data = (void **) realloc (lista->data, lista->capacity*sizeof(void*));
    }
  
    for(int j = lista->size; j > i; j--){
      lista->data[j] = lista->data[j-1];
    }
  
    lista->data[i] = data;
    lista->size++;
    return;
}

void* pop(ArrayList * lista, int i){
    return NULL;
}

void* get(ArrayList * lista, int i){
    return NULL;
}

int get_size(ArrayList * lista){
    return lista->size;
}

//remove elements
void clean(ArrayList * lista){
    
}
