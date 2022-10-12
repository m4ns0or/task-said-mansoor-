#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

int main(void)
{
  
  FILE *fi1_re;
  FILE *fil1_wri;

  FILE *fil2_wri;




  fi1_re = fopen("input.txt", "r");
  fil1_wri = fopen("input.txt", "r+");
  fil2_wri = fopen("output.txt", "w");



  if (fi1_re == NULL || fil1_wri == NULL)
  {
    printf("Error opening file.\n");
    return 1;
  }

  int c;
  

  int count = 0;


  while (true)
  {
    c = fgetc(fi1_re);

    if (feof(fi1_re) || ferror(fi1_re))
      break;

     if (c % 2 != 0)
    {
      fputc(c, fil1_wri);
      count++;
    }
    else{
      fputc(c, );
      count++;
    }

  }

  return 0;
}