#ifndef DERIVEONE_H
#define DERIVEONE_H
#include <iostream>
class deriveOne : public Base{
	public:
		deriveOne();
		virtual void iam(){
			std::cout << "deriveOne";
		}
		~deriveOne();
	protected:
};

#endif