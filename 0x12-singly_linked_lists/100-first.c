#include <stdio.h>

void myStartupFun(void) __attribute__((constructor));

/**
 * myStartupFun - This is a function that print before the main function
 *
 *
 *
 *
 */


void myStartupFun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
