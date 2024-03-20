#include <iostream>
#include <string>
using namespace std;

enum Month { None, Jan, Feb, Mar, Apr, May, Jun,
                Jul, Aug, Sep, Oct, Nov, Dec };

class DOB {
    public:
        Month month = None;
        int day = 0;
        int year = 0;

        DOB() {
        }
        DOB(Month m, int d, int y) {
            month = m;
            day = d;
            year = y;
        }
        void setMonth(){ month = Jan; }
        void setMonth(Month m) { month = m; }
        void setDay() { day = 1; }
        void setDay(int d) { day = d;}
        void setYear(int y) { year = y; }
        string getDate() const {return to_string(month) + "/" + to_string(day) + "/" + to_string(year);}
};

int main(){
    DOB dob(Mar,14,2012), phd;

    cout << dob.getDate() << " - " << phd.getDate() << endl;
    phd.setMonth(); phd.setDay(); phd.setYear(1998);
    cout << dob.getDate() << " - " << phd.getDate() << endl;
    return 0;
}