#include "Q16.h"

using namespace std;
// point default constructor
void Q16::con()
{
	x_ =0;
}
void Q16::pcon(int x)
{
	x_ =x;
}

int Q16::operator+(const Q16 &other) const
{
	return other.get()+x_;
}

bool Q16::operator==(const Q16 &other) const
{
	if(other.get() == x_){
		return true;
	}else{
		return false;
	}
}

