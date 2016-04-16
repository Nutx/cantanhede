// qqcoisa.cpp : Defines the entry point for the console application.
//
#include <stdio.h>
#include <string.h>
#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	/* Exercice 1
  int a = 3;
  float b = 4.5;
  double c = 5.25;
  float sum;

  sum = a+b+c;
    printf("%f", sum);

	*/
	/*Exercise 2
	 TODO: define the grades variable here 
  int average;
  int x = 85;
  int grades[3];

  grades[0] = 80;
  */
  /* TODO: define the missing grade
     so that the average will sum to 85. 
  grades[1] = x;
  grades[2] = 90;

  average = (grades[0] + grades[1] + grades[2]) / 3;
  printf("The average of the 3 grades is: %d", average);
  */
	
  // Exercise 4


  int array[] = {1, 7, 4, 5, 9, 3, 5, 11, 6, 3, 4};
    int i = -1;

    while (i < 10) {
		i++;
		if (array[i] < 5)
		{
			continue;
		}
		if (array[i] >10)
		{
			break;
		}
		printf("%d\n", array[i]);
    }



  char charX;
  printf("\n press any key .. ");
   scanf_s("%c", &charX);
  return 0;
}
