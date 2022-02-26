#include <iostream>
#include "Base.h"
#include "deriveOne.h"
#include "deriveTwo.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	Base *bptr;
	deriveOne *dptr;
	deriveTwo *dptrb;
	
	deriveOne dobject;
	
	bptr = &dobject;			
	dptr = &dobject;
	dptrb = &dobject;
	
	bptr->iam();			
	dptr->iam();
	dptrb->iam();
	return 0;
}