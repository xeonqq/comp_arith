#include <stdio.h>
#include <math.h>

int main()
{
	double x;
	double xo;
	double y;
	double base = 1;
	double z;
	double result=1;
	double table[10]={0.78539816,0.46364761,0.24497866,0.12435499,0.06241881,0.03123983,0.01562373,0.00781234,0.00390623,0.00195312};
	double angles[10] = {45,26.56505,14.03624,7.125016,3.576334, 1.789911,0.895174,0.447614,0.223811,0.111906};
	for (int i = 0;i<10;i++){
		result *= 1.0/sqrt(1.0+tan(table[i])*tan(table[i]));
	}
	printf("The constant is %.7lf\n",  result);
	x = result ; y =0;z=60;
	
	for (int i = 0;i<10;i++){
		xo = x;
		if( z > 0 ){
			x = x - y/base;
			y = y + xo/base;
			z -=angles[i];
		}
		else{
			x = x + y/base;
			y = y - xo/base;
			z +=angles[i];

		}
		base = 2*base;
		printf("The z(%d) is %.7lf\n", i, z);
		printf("The angle cos60 is %.7lf, sin60 is %.7lf\n",  x,y);
	}

	//printf("The angle cos60 is %.7lf, sin60 is %.7lf\n",  x,y);
	//printf("The z is %.7lf\n",  z);
	return 0;
}
