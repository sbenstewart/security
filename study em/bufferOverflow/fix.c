#include<stdio.h>
#include<string.h>
void doIt()
{
  char buff[2];
  printf("\nEnter the text\n");
  fgets(buff,2,stdin);  
  printf("\nLoading into buffer\n");
}
int main(void)
{
    printf("Before");
    doIt();
    printf("After");
}
