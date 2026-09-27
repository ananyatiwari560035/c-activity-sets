//Write a program find the square root of a number using babylonian method.
#include <stdio.h>
#include <math.h>

float input()
{
  float sq;
  printf("Enter the number\n");
  scanf("%f",&sq);
  return sq;
}

float squareroot(float sq)
{
  float guess = sq/2;
  float next_guess =  (guess + sq/guess)/2;
 
  while( fabs(guess - next_guess) > 0.00001 )
  {
    guess = next_guess;
    next_guess = (guess + sq/guess)/2;
  }
  return guess;
}

void output(float sq, float root)
{
  printf("The square root of %f is %f\n",sq,root);
}

int main()
{
  float sq,root;
  sq=input();
  root = squareroot(sq);
  output(sq,root);
}