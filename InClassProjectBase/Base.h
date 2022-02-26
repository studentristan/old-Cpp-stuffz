#ifndef BASE_H
#define BASE_H
#include <iostream>
class Base{
	public:
		Base();
		virtual void iam(){
			std::cout << "BASE";
		}
		~Base();
	protected:
};

#endif