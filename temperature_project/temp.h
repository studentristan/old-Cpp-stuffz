#ifndef TEMP_H
#define TEMP_H
#include<iostream>

class temp
{
	public:
		temp(float, int);
		float FtoC(float);
		float CtoF(float);
		float FtoK(float);
		float CtoK(float);
		float KtoF(float);
		float KtoC(float);
		~temp();
	protected:
};

#endif