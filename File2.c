/*

Program To Check Whether A Given Number Is Odd Or Even

*/


#include<stdio.h>

int main()
{
  int n;
  printf("Please Enter A Positive Integer: ");
  scanf("%d",&n);
  if(n%2==0)
      printf("The Number Is Even);
  else
	  printf("The Number Is Odd);
  
  return 0;
}