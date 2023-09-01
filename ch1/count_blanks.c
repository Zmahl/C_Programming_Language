#include <stdio.h>

int main()
{
  int c, blanks, tabs, nl;

  blanks, tabs, nl = 0;

  while ((c = getchar()) != EOF) {
    if (c == "\n")
      ++nl;
    
    if (c == "\t") 
      ++tabs;
    

    if (c == " ") 
      ++blanks;
   
  }
  printf("\nnewlines: %d\ntabs: %d\n blanks: %d", nl, tabs, blanks);
  return 0;
}

