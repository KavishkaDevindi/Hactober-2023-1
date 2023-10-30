#include <stdio.h>


void printArray(int data[], int num) {
  for (int i = 0; i < num; i++) {
    printf("%d ", data[i]);
  }
  printf("\n");
}

void insertionSort(int data[], int num) {
  for (int step = 1; step < num; step++) {
    int key = data[step];
    int j = step - 1;

    while (key < data[j] && j >= 0) {
      data[j + 1] = data[j];
      --j;
    }
    data[j + 1] = key;
  }
}


int main() {
    int data[50],a, num;    
    printf("Please Enter the Number: ");
    scanf("%d",&num);    
    printf("Please Enter the Value of Elements for the array: ");
    for(a = 0; a < num; a++)
        scanf("%d", &data[a]);
  insertionSort(data, num);
  printf("Sorted array in ascending order:\n");
  printArray (data,num);
}
