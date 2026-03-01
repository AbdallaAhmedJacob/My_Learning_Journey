#pragma warning(disable : 4996)


#include <iostream>
#include <ctime>


using namespace std;

int main()
{
    time_t Time = time(0); // Get time now.

    char* dt = ctime(&Time); // convert in string from.
    cout << "Local date ans time is: " << dt << "\n";

    tm* gmtm = gmtime(&Time); // converting now to tm stract for UTC date/time.
    dt = asctime(gmtm);
    cout << "UTC date and time is: " << dt;

    


    /*  
    int tm_sec; // seconds of minutes from 0 to 61
    int tm_min; // minutes of hour from 0 to 59 
    int tm_hour; // hours of day from 0 to 24  
    int tm_mday; // day of month from 1 to 31 
    int tm_mon; // month of year from 0 to 11 
    int tm_year; // year since 1900 
    int tm_wday; // days since sunday
    int tm_yday; // days since January 1st 
    int tm_isdst; // hours of daylight savings time
    */
        time_t t = time(0);   // get time now 
        tm* now = localtime(&t); 
        cout << "\nYear: " << now->tm_year + 1900 << endl; 
        cout << "Month: " << now->tm_mon + 1 << endl;
        cout << "Day: " << now->tm_mday << endl;
        cout << "Hour: " << now->tm_hour << endl; 
        cout << "Min: " << now->tm_min << endl;
        cout << "Second: " << now->tm_sec << endl;
        cout << "Week Day (Days since sunday): " << now->tm_wday << endl;
        cout << "Year Day (Days since Jan 1st): " << now->tm_yday << endl;
        cout << "hours of daylight savings:" << now->tm_isdst << endl;


        cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
      
        cout << "\nnow->tm_year  " <<  now->tm_year;
        cout << "\nnow->tm_mon   " << now->tm_mon;
        cout << "\nnow->tm_wday  " <<  now->tm_wday;
        cout << "\nnow->tm_hour  " <<  now->tm_hour;
        cout << "\nnow->tm_min   " << now->tm_min;
        cout << "\nnow->tm_sec   " << now->tm_sec;
        cout << "\nnow->tm_wday  " <<  now->tm_wday;
        
        cout << "\nnow->tm_mday  " << now->tm_mday;
        cout << "\nnow->tm_isdst " << now->tm_isdst;

        cout << "\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
       

        // This function Micro softe

            time_t Time_s = time(nullptr); // Current time

            // Convert to Current time
            char localBuffer[26]; // Lingth size
            ctime_s(localBuffer, sizeof(localBuffer), &Time_s);
            cout << "Local date and time is: " << localBuffer << "\n";

            // Convert to UTC
            tm gmtm_s;
            gmtime_s(&gmtm_s, &Time_s);

            char utcBuffer[26];
            asctime_s(utcBuffer, sizeof(utcBuffer), &gmtm_s);
            cout << "UTC date and time is: " << utcBuffer;
            

            cout << "\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
            

            cout << "\ngmtm_s.tm_year  " << gmtm_s.tm_year;
            cout << "\ngmtm_s.tm_mon   " << gmtm_s.tm_mon;
            cout << "\ngmtm_s.tm_wday  " << gmtm_s.tm_wday;
            cout << "\ngmtm_s.tm_hour  " << gmtm_s.tm_hour;
            cout << "\ngmtm_s.tm_min   " << gmtm_s.tm_min;
            cout << "\ngmtm_s.tm_sec   " << gmtm_s.tm_sec;
            cout << "\ngmtm_s.tm_wday  " << gmtm_s.tm_wday;
            cout << "\ngmtm_s.tm_mday  " << gmtm_s.tm_mday;
            cout << "\ngmtm_s.tm_isdst " << gmtm_s.tm_isdst;
        
}