#ifndef     USER_ADDITION_H
#define     USER_ADDITION_H

// SystemC files
//Replace
//#include "systemc.h"

//by :
// SystemC files
#include "systemc"
using sc_dt::sc_uint;


SC_MODULE(addition){

	sc_core::sc_in< sc_dt::sc_uint<32> > a;
	sc_core::sc_in< sc_dt::sc_uint<32> > b;
	sc_core::sc_out< sc_dt::sc_uint<32> > result;

	SC_CTOR(addition);
	void addition_behavior();

};
#endif
