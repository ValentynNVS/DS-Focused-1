#include <stdio.h>
#include <stdlib.h>
#include <string.h>


const int kMaxStrSize = 30;
const int kNumberOfFlights = 10;


struct FlightInfo {

	char* destination;
	char* date;

};

int main(void) {

	char destination[kMaxStrSize] = "";
	char dateOfTheFlight[kMaxStrSize] = "";

	struct FlightInfo flight[kNumberOfFlights];

	for (int i = 0; i < kNumberOfFlights; i++) {


	}

	return 0;
}