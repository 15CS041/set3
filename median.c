#include <stdio.h>
#include <stdlib.h>

#define ELEMENTS 6

int values[] = { 40, 10, 100, 90, 20, 25 };

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main ()
{
  int n;
  qsort (values, ELEMENTS, sizeof(int), compare);
  for (n=0; n<ELEMENTS; n++)
  {   printf ("%d ",values[n]); }
  printf ("median=%d ",values[ELEMENTS/2]);
  return 0;
}
