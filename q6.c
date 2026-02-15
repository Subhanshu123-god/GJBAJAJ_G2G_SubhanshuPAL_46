#include<stdio.h>
int main(){
  int first,second;
  printf("enter the value of first number : ");
  scanf("%d",&first);
  printf("enter the value of second number : ");
  scanf("%d",&second);
  if(first==second){
    printf("number are equal\n");
  }
  else{
    printf("number are not equal\n");
  }

  return 0;
}