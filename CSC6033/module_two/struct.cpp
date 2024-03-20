#include <iostream>
#include <string>

enum Month { None, Jan, Feb, Mar, Apr, May, Jun,
                Jul, Aug, Sep, Oct, Nov, Dec};
struct DOB {
    Month month;
    int day;
    int year;
};

int main(){
    DOB dob, phd;

    dob.month = Mar;
    dob.day = 14;
    dob.year =2012;

    std::cout << dob.month << "/" << dob.day << "/" << dob.year << std::endl;

    phd.month = Feb;
    phd.day = 23;
    phd.year = 1998;

    std::cout << phd.month << "/" << phd.day << "/" << phd.year << std::endl;

    return 0;
}
