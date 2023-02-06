/*
 * @topic S-0326-09-02-35 Assignment a9 Serial date class
 * @brief class SDate
*/

#ifndef SDATE_H_INCLUDED_
#define SDATE_H_INCLUDED_

class SDate {
public:
    // Function to set calendar date. Returns:
    // -- false if given month/day/year are invalid
    // -- true if everything is okay.
    bool set( int mm, int dd, int yyyy );

    //----------------------------------------------
    // functions to manipulate serial value
    //----------------------------------------------
    void serial( int sDate ); // set serial date

    int serial();             // get serial date

    void add( int days );     // add days to the serial value

    //----------------------------------------------
    // functions to change or get calendar parts:
    //----------------------------------------------
    void set_month( int mm );   // set month

    int month();                // get month

    void set_day( int dd );     // set day

    int day();                  // get day

    void set_year( int yyyy );  // set year

    int year();                 // get year

};//class SDate

#endif //SDATE_H_INCLUDED_
