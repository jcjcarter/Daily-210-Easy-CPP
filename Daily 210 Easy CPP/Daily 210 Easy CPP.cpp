// Daily 210 Easy CPP.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>

int main(int i, char *_[])
{
	unsigned int a = 0, b = 0, c;
	double s = 0;
	scanf("%u %u", &a, &b);
	c = a ^ ~b;
	for (i  = 0;  i < 32; i++)
	{
		s += c & 1;
		c >>= 1;
	}

	printf("%g%% compatibility\n"
           "%u should avoid %u\n"
           "%u should avoid %u\n",
		s * 3.125, a, ~a, b, ~b);

    return 0;
}

