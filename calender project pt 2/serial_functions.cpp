
/*
 * @topic S-0326-09-01-20 Serial date mock-up for Assignment a9
 * @brief mock-up definitions for serial date functions
*/

#include "serial_functions.h"

// CIS-155
// Please note:
// This is a mock-up implementation of the serial date.
// It is used for Assignment a9 demo -- Serial date class


int serial_julian_date( int G_Month, int G_Day, int Year )
{
    // return integer in format YYYYMMDD
    return Year * 10000 + G_Month * 100 + G_Day;

    // The formulas to get back to the calendar parts:

    // int Day = nDate % 100;
    // int Month = ( nDate - Day ) / 100 % 100;
    // int Year = ( nDate - Month * 100 - Day ) / 10000;
}//serial_julian_date()


int serial_2_day( int nDate )
{
    return nDate % 100;
}//serial_2_day()


int serial_2_month( int nDate )
{
    return ( nDate - serial_2_day( nDate ) ) / 100 % 100;
}//serial_2_month()


int serial_2_year( int nDate )
{
    return ( nDate - serial_2_month( nDate ) * 100 - serial_2_day( nDate ) ) / 10000;
}//serial_2_year()
bool result; 

bool is_leap_year( int Year ) {
        if ( ( Year % 100 ) == 0 ) {
            return result = (( Year % 400 == 0 ) ? true : false );
        } else {
            return result = ( ( Year % 4 == 0 ) ? true : false );
        }
    }

        
int main() {
	while(true){
		int G_Month = 0; // Gregorian Month
		int G_Day = 0; // Gregorian Day
		int Year = 0; // Gregorian Year
    is_leap_year(Year);
		std::cout << "Enter a date in MM DD YYYY format (separated by spaces:" << std::endl; // tells the user to input the date
		std::cin >> G_Month >> G_Day >> Year; //inputs the Gregorian month day and year
		int a = (( 14 - (G_Month) ) / 12); // finds a which is used to calcuate the serial Julian date
		int m = ((G_Month) + ( 12 * (a) ) - 3); // finds m which is used to calculate the serial Julian date
		int y = ((Year) + 4800 - (a)); // finds y which is used to calculate the seruak Julian date
		int nDate = (G_Day) + (((153 * m) + 2) / 5)  + (365 * y) + (y / 4) - (y / 100) + (y / 400) - (32045); // finds the serial Julian date from the Gregorian Month Day Year
		std::cout << "Serial Julian Date is: " << nDate << std::endl; //prints the serial Julian date
	
   		
   		if(G_Month > 12){
   		std::cout<<"Your Month input is too high."<<"\n";
   		}	
   		
   		if(G_Month == (1 | 3 | 5 | 7 | 8 | 12)){
   			if (G_Day > 31){
   				std::cout<<"Your Day input is too high"<<"\n";
   			}
   		}

   		if(G_Month == (4 | 6 | 9 | 10 | 11)){
   			if (G_Day > 30){
   				std::cout<<"Your Day input is too high"<<"\n";
   			}
   		}

   		if(G_Month == 2){
   			if(result == true){
   				if(G_Day > 29){
   					std::cout<<"Your Day input is too high."<<"\n";
   				}
   			}
   		  else{
   				if(G_Day > 28){
   					std::cout<<"Your Day input is too high."<<"\n";
   				}
   			}
   		}	   
	}
}