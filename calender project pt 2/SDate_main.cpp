/*
 * @topic S-0326-09-02-55 Assignment a9 Serial date class
 * @brief Assignment a9 test driver program
*/

#include <cassert>
#include "std_lib_facilities.h"
#include "SDate.h"

int main()
{
    SDate date;
    // 7/4/1776  2369916
    date.set( 7, 4, 1776 );
    assert( date.serial() == 2369916 );

    date.serial( 2369916 );
    assert( date.serial() == 2369916 );
    assert( date.month() == 7 );
    assert( date.day() == 4 );
    assert( date.year() == 1776 );

    date.add( 1 ); // 7/5/1776
    assert( date.serial() == 2369917 );
    assert( date.month() == 7 );
    assert( date.day() == 5 );
    assert( date.year() == 1776 );

    // 12/31/2000  2451910
    date.set( 12, 31, 2000 );
    assert( date.serial() == 2451910 );
    assert( date.month() == 12 );
    assert( date.day() == 31 );
    assert( date.year() == 2000 );

    date.add( 1 ); // 1/1/2001
    assert( date.month() == 1 );
    assert( date.day() == 1 );
    assert( date.year() == 2001 );

    assert( date.set( 2, 29, 2000 ) );   // leap year
    assert( date.month() == 2 );
    assert( date.day() == 29 );
    assert( date.year() == 2000 );

    // Test validation
    assert( !date.set( 2, 29, 2001 ) );  // bad day
    assert( !date.set( 13, 31, 2001 ) ); // bad month
    assert( !date.set( 1, 32, 2001 ) );  // bad day

    std::cout << "Oll Korrect!\n";
    keep_window_open();
    return 0;
}
