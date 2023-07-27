#include<stdio.h>

/**
 * myStartupFun ->
 *   Apply the constructor attribute to myStartupFun()
 *   is executed before main mstartupFun()
 */
void myStartupFun(void) __attribute__ ((constructor));

/**
 * myStartupFun - implementation in  myStartupFun
 */
void myStartupFun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
