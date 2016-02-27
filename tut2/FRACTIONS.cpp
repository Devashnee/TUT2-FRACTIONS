#include<iostream>

using namespace std;

class FRACTIONS


{

private:

	int num;
	int denom;

public:

	FRACTIONS(int, int);
	FRACTIONS getNumDenom();
	void setNumDenom(int, int);
	FRACTIONS add(FRACTIONS);
	FRACTIONS subtract(FRACTIONS);
	FRACTIONS multiply(FRACTIONS);
	FRACTIONS divide(FRACTIONS);
	void print();
};


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


FRACTIONS FRACTIONS::add(FRACTIONS frac)
{
	return FRACTIONS(num*frac.denom + frac.num*denom, denom * frac.denom);
}


FRACTIONS FRACTIONS::subtract(FRACTIONS frac)
{
	return FRACTIONS(num*frac.denom - frac.num*denom, denom * frac.denom);
}


FRACTIONS FRACTIONS::multiply(FRACTIONS frac)
{
	return FRACTIONS(num*frac.num, denom * frac.denom);
}


FRACTIONS FRACTIONS::divide(FRACTIONS frac)
{
	return FRACTIONS(num * frac.denom, denom * frac.num);
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


