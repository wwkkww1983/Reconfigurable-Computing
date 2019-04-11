#include <hls_stream.h>
#include <ap_int.h>
#include <iostream>
#include <stdint.h>

using namespace hls;

#include "my_ip_hls.hpp"


#define STREAM_TEST_ITERATIONS 100

int main() {

	uint32 i = 0;

	stream<axiWord> slaveIn("slaveIn");
	stream<axiWord> masterOut("masterOut");

	for (i=0;i<STREAM_TEST_ITERATIONS;i++) {
		axiWord dataIn = {0,0,0};
		dataIn.data = i+1;
		dataIn.strb = 0b1111;
		if (i == STREAM_TEST_ITERATIONS-1)
			dataIn.last = 1;
		else
			dataIn.last = 0;
		slaveIn.write(dataIn);

		my_ip_hls(slaveIn, masterOut);

		if (!masterOut.empty()) {
			axiWord dataOut = {0,0,0};
			masterOut.read(dataOut);
			printf("%d: read data: %u\n",(int)i, (int)dataOut.data);
		}
		else {
			printf("%d: no data available!\n",(int)i);
		}
	}


	return 0;
}
