#include <stdio.h>
#include <string.h>
int main()
{
  char a[100],b[100];
  printf("Take a input:\n");
  fgets(a,sizeof(a),stdin);
  strcpy(b,a);
  strrev(b);
  if(strcmp(a,b)==0)
    printf("The string is a palindrome.\n");
  else
    printf("The string is not a palindrome.\n");

  return 0;
}

