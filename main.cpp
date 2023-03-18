#include <iostream>
#include <iomanip>

int main()
{
    std::cout <<
        
        /* ----- Width and Alignment ----- */
        /*                                 */
        std::left << // moves stream to the left of the width
        std::setw(10) << // sets the string width to 10 (fills rest with spaces)
        "TEXT" << // text to the left
        std::endl <<
        
        std::right << // moves stream to the right of the width
        std::setw(10) << // sets the string width to 10 (fills rest with spaces)
        "TEXT" << // text to the right
        std::endl <<

        std::setfill('#') << // replaces extra spaces by width with '#'
        std::setw(10) << // sets the string width to 10 (fills rest with spaces)
        "TEXT" << // text to the right
        " Other " << // spaces here are not replaced
        std::endl <<

        std::internal <<
        std::setfill(' ') <<
        std::setw(10) <<
        "TEXT" << 
        std::endl <<



        /* ----- Boolean as text ----- */
        /*                             */
        true << // outputs 1
        false << // outputs 0
        std::endl <<
        std::boolalpha << // outputs "true" and "false" for bools
        true <<
        false <<
        std::endl <<
        std::noboolalpha << // disable boolalpha, output "1" for true and "0" for false



        /* ----- Show/High `+` for Positive signed numbers ----- */
        /*                                                       */
        std::showpos << // shows the positive sign for signed numbers
        15 << // outputs +15
        std::endl <<
        15u << // outputs 15
        std::endl <<



        /* ----- Print numbers inf different numeric base formats ----- */
        /*                                                              */
        std::dec << // All the numbers are output by cout are in decimal format in the future
        15 <<
        std::endl <<
        std::hex << // All the numbers are output by cout are in HEX format in the future
        15 <<
        std::endl <<
        -15 <<
        std::endl <<
        std::oct << // All the numbers are output by cout are in OCTAL format in the future
        15 <<
        std::endl <<
        -15 <<
        std::endl << 
        
        std::hex <<
        std::uppercase << // Hex and OCT letters are output as uppercase
        186348 << "  "
        "hi" <<
        std::nouppercase << // disable uppercase
        std::endl <<


        /* ----- Floating points formatting ----- */
        /*                                        */
        // C++ has Scientific and fixed views for floating numbers
        // by default the cout chooses the more suitable
        3.123456789123456789 <<
        std::endl <<
        24853.0 <<
        std::endl <<
        1.87e-12 <<
        std::endl <<
        
        std::fixed << // Show all floating points in fixed format
        3.123456789123456789 << // note the some values are turned into garbage
                                // because a floating point has a limited size
        std::endl <<
        24853.0 <<
        std::endl <<
        1.87e-12 <<
        std::endl <<
        
        std::scientific << // Show all floating points in scientific format
        3.123456789123456789 <<
        std::endl <<
        24853.0 <<
        std::endl <<
        1.87e-12 <<
        std::endl;
    // ----------- set floating point view to default.
    std::cout.unsetf(std::ios::scientific | std::ios::fixed);

        

    std::cout <<

        /* ----- Floating points Precision ----- */
    /*                                           */
        std::setprecision(20) << // output floating point with precision 20 in the future
        123456.0 <<
        std::endl <<
        0.123456789123456789f <<
        std::endl <<
        123.012 <<
        std::endl <<
        std::setprecision(6) << // The default floating point precision is 6
        std::endl <<
        
        
        /* ----- Floating point show `.0` when whole number ----- */
        /*                                                      */
        std::showpoint << // always show the point for fractional numbers
        12.0f <<
        std::endl << 
        std::noshowpoint << // don't show point when the float is a whole number
                            // This is the default
        12.0f <<
        std::endl
        ;


    return 0;
}