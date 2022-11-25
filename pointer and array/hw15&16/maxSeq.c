#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

size_t maxSeq(int * array, size_t n)
{
  size_t max=1;
  if(array==NULL||n==0)
  return 0;
  for(size_t i=0;i<n-1;i++)
  {
    size_t count=1;
    for(size_t j=i;j<n-1;j++)
    {
      if (*(array+j)<*(array+j+1))
      {
        count++;
      }
      else
      break;
    }
    if(count>max)
    max=count;

  }
  return max;
}

int main(void) {
  if (maxSeq(NULL, 0)) {
    return EXIT_FAILURE;
  }

  int array1[] = {1, 2, 3, 2};
  int array2[] = {2, -3, 5, 6, 8};
  int array3[] = {5};
  int array4[] = {2, 4, 3, 6, 10, 15, -1, 7, 8, 2};
  int array5[] = {-2};
  int array6[] = {2,2,2,3};
  int array7[] = {1,1,4,5,1,4};
  if (maxSeq(array1, 0)) {
    return EXIT_FAILURE;
  }
  if (maxSeq(array1, 4) != 3) {    
    return EXIT_FAILURE;
  }
  if (maxSeq(array2, 5) != 4) {
    return EXIT_FAILURE;
  }
  if (maxSeq(array3, 1) != 1) {
    return EXIT_FAILURE;
  }
  if (maxSeq(array4, 10) != 4) {
    return EXIT_FAILURE;
  }
 if (maxSeq(array5, 1) != 1) {
    return EXIT_FAILURE;
  }
  if (maxSeq(array6, 4) != 2) {
    return EXIT_FAILURE;
  }
  if (maxSeq(array7,6) != 3 ) {
    return EXIT_FAILURE;
  }
  return EXIT_SUCCESS;
}