#include<iostream>
#include<iomanip>
#include<fstream>
#include<sstream>
#include<cmath>
#include<cstdlib>
#include<string>
#include<list>
#include <forward_list>
#include<vector>
#include<unordered_map>
#include<algorithm>
#include <array>
#include <regex>
#include<random>
#include<stdexcept>
bool result; 
int serial_julian_date(int G_Month, int G_Day, int Year); //converts the Gregorian date to the serial Julian date

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
	
   		int x = (nDate + 32044); //finds x which is used to convert the date back to Gregorian
   		int b = (((4 * x) + 3) / 146097); //finds b which is used to convert the date back to Gregorian
   		int c = x - ((146097 * b) / 4); //finds c which is used to convert the date back to Gregorian
   		int d = ((4 * c) / 1461); //finds d which is used to convert the date back to Gregorian
   		int e = c - ((1461 * d) / 4); //finds e which is used to convert the date back to Gregorian
   		int r = (((5 * e) + 2) / 153); //finds r which is used to convert the date back to Gregorian
   		int J_Day = e - (((153 * r) + 2) / 5) + 1; //finds J_Day which is used to convert the date back to Gregorian day
   		int J_Month = r + 3 - ( 12 * ( r / 10 )); //finds J_Month which is used to convert the date back to Gregorian month
   		int J_Year = (((100 * b) + d) - (4800)) + (r / 10); //finds J_Year which is used to convert the date back to Gregorian year
   		std::cout << "Back to Gregorian: " << J_Month << " " << J_Day << " " << J_Year << std::endl; // prints Gregorian date
   		

   		
   
    	
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