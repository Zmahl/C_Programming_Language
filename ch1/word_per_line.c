#include <stdio.h>

int main() {

  int c;
  
  c = getchar();
  while (c != EOF) {
    if (c == 32) 
      putchar(10);
    
    else 
      putchar(c);

    c = getchar();   
  }
}
