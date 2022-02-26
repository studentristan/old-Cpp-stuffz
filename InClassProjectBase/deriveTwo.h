#ifndef DERIVETWO_H
#define DERIVETWO_H
#include <iostream>
class deriveTwo{
	public:
		deriveTwo();
		virtual void iam(){
			std::cout << "derive two";
		}
		~deriveTwo();
	protected:
};

#endif