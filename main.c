#include <stdio.h>
#include <stdlib.h>

void insert(int array, int rightIndex, int value){
  int i;
  
  for(i = rightIndex; i >= 0 && array[i] > value; i--){
    array[i + 1] = array[i];
  }
  
  array[i + 1] = value;

}

void selectionSort(int array[]){
  int i;

  for(i = 1; i < sizeof(array); i++){
    insert(array, i - 1, array[i]);
  }
  
}

void print(array){
  int i;
  for(i = 0; i < sizeof(array); i++){
    printf("%d ", array[i]);
  }
}

int main(){
  int size, i, j, input;
  
  printf("Input array Size: ");
  scanf("%d", &size);
  
  int array[size];
  
  for(i = 0; i < size; i++){
    scanf("%d", &input);
     array[i] = input;
  }
  
  selectionSort(array);
  print(array);
}
