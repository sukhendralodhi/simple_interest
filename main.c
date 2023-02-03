#include <stdio.h>

int main(void) {
  float priciple, rate_interest,time, simpleInterest;
  printf("Enter the vlaues: ");
  scanf("%f%f%f",&priciple,&rate_interest,&time);

  simpleInterest = ((priciple*rate_interest*time)/100);

  printf("Simple Interest: %.2f",simpleInterest);
  
  return 0;
}