#include <stdio.h>
#include <stdlib.h>

void insertion_sort(int * list, int size)
{
  for(int x=1;x<size; x++)
  {
    int min=list[x];
    int y=x-1;
    while (y>=0 && list[y]>=min) {
      list[y+1]=list[y];
      y=y-1;
     } 
    list[y+1]=min;
    }
  printf("Sorted list: ");
  for (int j=0; j<size; j++)
  {
    printf("%d ", list[j]); 
  }
  printf("\n");


}

int main(int argc, char *argv[])
{
  int len=0;
  printf("Length of Array: ");
  scanf("%d", &len);
  printf("\n");


  int * new_list =calloc(len, sizeof(int));

  for (int i=0; i<len; i++)
  {
    printf("Element on the %d position: ", i);
    scanf("%d", &new_list[i]);
    printf("\n");
  }
  
  printf("Unsorted list: ");

  for (int j=0; j<len; j++)
  {
    printf("%d ", new_list[j]); 
  }
  printf("\n"); 
  insertion_sort(new_list, len);

  free(new_list);
  return EXIT_SUCCESS;
}
  

