#include <stdio.h>
#include <stdlib.h>

typedef struct elementType {
  int length;
  int *data;
} elementType;

void display(elementType *e) {
  int length = e->length;
  printf("length: %d\n", length);
  for (int i = 0; i < length; i++) {
    printf("%d element value: %d\n", i, e->data[i]);
  }
}

elementType newElement(int length) {
  elementType e;
  e.length = length;
  e.data = (int *)malloc(sizeof(int) * length);
  return e;
}
