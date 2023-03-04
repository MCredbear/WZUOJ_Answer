int myCmp(const void *a, const void *b) {
  ElementType *x = (ElementType *) a;
  ElementType *y = (ElementType *) b;
  if (*x < *y)
    return -1;
  else if (*x == *y)
    return 0;
  else return 1;
}

void heapSort(Heap H) {
  qsort(H->data + 1, H->size, sizeof(ElementType), myCmp);
}
