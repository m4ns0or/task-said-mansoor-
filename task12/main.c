#include <stdbool.h>
#include <stdio.h>
#include <unistd.h>

int main(void) {

  FILE *fi;

  fi = fopen("input.txt", "r");

  if (fi)
    printf("test");

  int x;
  int count = 0;
  float sum = 0;

  while (true) {

    fscanf(fi, "%d", &x);
    count += 1;
    sum += x;
  }
  double average = sum / count;
  printf("Avrage: %f", average);

  return 0;
}