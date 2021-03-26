#include <stdio.h>
#include <math.h>
#include "triangle-lib.h"

/* Name: Chris Mayes
 * Last Updated: 3/26
 *
 * Description: Program designed to practice passing by reference. 
 * 	Gets 2 double values from user as sides of a right triangle,
 * 	displays these to the screen, and then displays the hypotenuse.
 * */

double getHypotenuse(double a, double b)
	/* Description: Takes two sides of a right triangle and returns
	 * the length of the hypotenuse.
	 *
	 * Parameters: a and b are doubles that represent the length
	 * of the base and leg of a right triangle.
	 *
	 * Returns: double c, which is the length of the hypotenuse
	 *
	 * */
{
	double c = sqrt(a * a + b * b);
      	return c;	
}

double getTriangleSides(double a, double *a_p, double b, double *b_p)
	/*Descrption: Gets two side lengths from a user, calculates the
	 * hypotenuse, and stores these in three variables a, b, c.
	 *
	 * Parameters: a and b represent input for scanf and will hold the
	 * side lengths. *a_p and *b_p are pointers for updating those
	 * variables in caller's scope.
	 *
	 * Returns: the length of the hypotenuse.
	 */
{
	printf("Please enter the length of one short side of a right triangle.\n");
	scanf("%lf", &a);
	printf("Please enter the length of the other short side of a right triangle.\n");
	scanf("%lf", &b);
	*a_p = a;
	*b_p = b;
	return getHypotenuse(a, b);
}

void displayRightTriangle(double a, double b, double c)
	/* Description: Used to display three side lengths of a
	 * right triangle.
	 * 
	 * Parameters: a, b, and c represent the side lengths.
	 * */
{
	printf("The first side you entered measured %lf\n", a);
	printf("The second side you entered measured %lf\n", b);
	printf("The length of the hypotenuse is %lf\n", c);
	return;
}



