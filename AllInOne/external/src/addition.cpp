#include "addition.h"  // header file

using namespace sc_core;


addition::addition(sc_module_name name)
{
	SC_METHOD(addition_behavior);
	sensitive << a << b ;
}

void addition::addition_behavior()
{
	result.write( (a.read() + b.read()) );
}
