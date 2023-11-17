#include <stdio.h>

/**
 * pre_main -runs before main
 *
 */

void pre_main(void) __attribute__ ((constructor));

void pre_main(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
