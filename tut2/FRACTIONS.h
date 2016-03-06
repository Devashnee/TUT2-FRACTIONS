#pragma once
class FRACTIONS
{

private:

	int num;
	int denom;

public:

	FRACTIONS(int, int);
	FRACTIONS getNumDenom();
	void setNumDenom(int, int);
	FRACTIONS operator*(FRACTIONS);
	FRACTIONS operator/(FRACTIONS);
	FRACTIONS operator+(FRACTIONS);
	FRACTIONS operator-(FRACTIONS);
	void print();
};
