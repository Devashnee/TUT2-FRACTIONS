#include "FRACTIONS.h"
#include<iostream>

using namespace std;




FRACTIONS::FRACTIONS(int numerator, int denominator)
{
	num = numerator;
	denom = denominator;
}


FRACTIONS FRACTIONS::getNumDenom()
{
	return FRACTIONS(num, denom);
}


void FRACTIONS::setNumDenom(int numerator, int denominator)
{
	num = numerator;
	denom = denominator;
}


FRACTIONS FRACTIONS::operator+(FRACTIONS x){			//Adds the FRACTIONS to another given FRACTIONS
	return FRACTIONS(((num*x.denom) + (x.num * denom)), (denom * x.denom));
}

FRACTIONS FRACTIONS::operator-(FRACTIONS x){	//Subtracts a given fration from this FRACTIONS
	return FRACTIONS(((num*x.denom) - (x.num * denom)), (denom * x.denom));
}

FRACTIONS FRACTIONS::operator*(FRACTIONS x){	//Multiplies two FRACTIONS
	return FRACTIONS((num*x.num), (denom * x.denom));
}
FRACTIONS FRACTIONS::operator/(FRACTIONS x){		//Divides two frations
	return FRACTIONS((num * x.denom), (denom * x.num));
}

void FRACTIONS::print()
{

	if (num % denom == 0)
		cout << num / denom << endl;

	else
	{
		int i;
		int lcd = 1;
		if (num % denom == 0)
			cout << num / denom << endl;
		else
		{
			for (i = 1; i <= num; i++)
			{
				if (num%i == 0 && denom%i == 0)
					lcd = i;
			}

			cout << num / lcd << "/" << denom / lcd << endl;
		}
	}

}