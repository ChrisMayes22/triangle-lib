/* Name: Chris Mayes
 * Last Updated: 3/26
 *
 * Description: Program designed to practice passing by reference. 
 * 	Gets 2 double values from user as sides of a right triangle,
 * 	displays these to the screen, and then displays the hypotenuse.
 * */

#include <stdio.h>
#include "triangle-lib.h"

int main()
{
	double a;
	double b;
	double c = getTriangleSides(a, &a, b, &b);
	displayRightTriangle(a, b, c);	
	return 0;
}


