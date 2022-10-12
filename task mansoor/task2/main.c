#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

int main(void)
{
  FILE* fil1_re;
  FILE* fil2_wri;

  fil1_re = fopen("input.txt", "r");
  fil2_wri = fopen("putput.txt", "w");
  char symbole = fgetc(fil1_re);

  int height = 4;
  
  for (int i = 1; i <= height; i++)
  {

    int starCount = (i * 2) - 1;
    int spaceCount = height - i + 1;
    
    // print out the spaces
    for (int j = 0; j < spaceCount; j++)
    fputc(' ', fil2_wri);
    
    // print out the stars
    for (int j = 0; j < starCount; j++)
    fputc(symbole, fil2_wri);
    
    // print new line
    fputc('\n', fil2_wri);
}
fclose(fil2_wri);
return 0;
}