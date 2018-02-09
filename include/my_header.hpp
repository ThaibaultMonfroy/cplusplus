//  Copyright (c) 2017 MONFROY DAI
//

#ifndef MY_HEADER_HPP
#define MY_HEADER_HPP

#include <cmath>

int essayer_code(unsigned short code);

void exo1(void)
{
	long a = 2, b = 1, c = 0;

	while (a + b > 0)
	{
		a = a - 2;
		b = b + 1;
		c = c + 1;
	}
}

void exo2(void)
{
	long n = 3, fac = 1, i = 1;

	if (n > 0)
		while (i <= n)
		{
			fac = fac * i;
			i = i + 1;
		}
	else
		if (n < 0)
			fac = 0;
}
      
void exo3(void)
{
	int test = 0;
	unsigned short code = 0;

		while (test == 0)
		{
		   test = essayer_code(code);

		   if(test == 0)
				code = code + 1;
		}
}

#endif // MY_HEADER_HPP

