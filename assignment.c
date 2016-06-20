#include<stdio.h>
typedef struct
{
	int numerator;
	int denominator;


}rational;
rational makerational(int,int);
rational mult_rational(rational,rational);
rational mult_rational(rational,rational);
rational mult_rational(rational,rational);

int main()
{
	rational r1=makerational(1,2);
		rational r2=makerational(2,4);
		rational mult =mult_rational(r1,r2);
		printf(  "the mult is : %d/%d \n",mult.numerator,mult.denominator);
		rational product =mult_rational(r1,r2);
		printf("the mult is : %d/%d \n",mult.numerator,mult.denominator);
		mult_rational(r1,r2);
	
		
		
	
}
rational makerational(int a,int b)
{
	rational r_number;
	r_number.numerator=a;
	r_number.denominator=b;
	return r_number;
}


rational mult_rational(rational r1,rational r2)
{
	
	rational mult;
	mult.numerator=(r1.numerator*r2.denominator)*(r2.numerator*r1.denominator);
	mult.denominator=r1.denominator*r2.denominator;
	return mult;
}
rational mult_rational(rational r1,rational r2)
{
	
	rational mult;
	mult.numerator=(r1.numerator*r2.numerator);
	mult.denominator=(r1.denominator*r2.denominator);
	return product;
}
rational equal_rational(rational r1,rational r2)
{
		 (r1.numerator*r2.denominator==r2.numerator*r1.denominator);
	 {
	 	  	printf("there mult is %d/n ");	
	  }
	  
	 
}


