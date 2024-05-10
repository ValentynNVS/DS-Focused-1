/*
* FILE : f1.cpp
* PROJECT : Focused 1 assignment
* PROGRAMMER : Valentyn Novosydliuk
* FIRST VERSION : 05/10/2024
* DESCRIPTION :
* This program gets user flight infomation and aims to work with active memory allocation using malloc();
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


const int kMaxStrSize = 30;
const int kNumberOfFlights = 10;

void fillFlightInfo(struct FlightInfo *flight, const char* destination, const char* date);
void printFlightInfo(struct FlightInfo* flights);

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


/*
Function: fillFlightInfo
Parameters: struct FlightInfo* flight - a pointer to a struct FlightInfo (which is a
										pointer to an element of the array)
			const char* destination - constant pointer to flight information string
			const char* date - constant pointer to flight information string
Description: Thhis fucntion fills in the struct field and allocates memory blocks
Return value: void
*/
void fillFlightInfo(struct FlightInfo* flight, const char* destination, const char* date) {



}


/*
Function: printfFlightInfo
Parameters: struct FlightInfo* flight - a pointer to a struct FlightInfo
Description: This functions prints the formatted output after the fillFlightInfo
Return value: void
*/
void printFlightInfo(struct FlightInfo* flights) {

	
}