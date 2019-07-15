#include<stdio.h>
#include<string.h>
void doIt()
{
  char buff[2];
  printf("\nEnter the text\n");
  gets(buff);  
  printf("\nLoading into buffer\n");
}
int main(void)
{
    printf("Before");
    doIt();
    printf("After");
}
