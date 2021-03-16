#include <stdio.h>

#include "mm.h"
#include "memlib.h"


int main(void)
{
  mem_init();
  mm_init();
  void * ptr1 = mm_malloc(100);
  void * ptr2 = mm_malloc(35);
  void * ptr3 = mm_malloc(7);
  void * ptr4 = mm_malloc(1);
  printf("%p %p %p %p %zu\n", ptr1, ptr2, ptr3, ptr4, sizeof(ptr1));
  return 0;
}
