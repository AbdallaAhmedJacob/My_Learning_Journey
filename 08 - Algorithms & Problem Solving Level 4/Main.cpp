#include <iostream>
#include"Import.h"

using namespace std;

short ReadNumberPointStart()
{
    short Choose = 0;
    do
    {
        cout << "\n1_NumberToText" << "                                  |     " << "18_AgeInDaysColculator\n";
        cout << "\n2_LeapYearChecker_Basic" << "                         |     " << "19_DefferenceInDatesTwo_Way\n";
        cout << "\n3_LeapYearChecker_Optimized" << "                     |     " << "20_ProplemsFrom20To32\n";
        cout << "\n4_TimeCalculator_Basic" << "                          |     " << "33_ProplemsFrom33To47\n";
        cout << "\n5_MonthCalculator_Basic" << "                         |     " << "47_ProplemsFrom47To53\n";
        cout << "\n6_MonthCalculator_Optimized" << "                     |     " << "54_ActucalVacationColculator\n";
        cout << "\n7_DayNameOfWeek" << "                                 |     " << "55_ColculateTheVacationReturnDate\n";
        cout << "\n8_MonthCalendar" << "                                 |     " << "56_Date1AfterDate2Colculate\n";
        cout << "\n9_YearCalendar" << "                                  |     " << "57_DateCombarer\n";
        cout << "\n10_TotalDaysBiginninigOfYear" << "                    |     " << "58_PeriodsOverLapChecker\n";
        cout << "\n11_ConvertNumberToDate" << "                          |     " << "59_PeriodLingthInDaysColculator\n";
        cout << "\n12_AddDaysCalcultor" << "                             |     " << "60_DateInAPeriodChecker\n";
        cout << "\n13_DateLessChecker" << "                              |     " << "61_CountOverlapDaysInTwoPeriods\n";
        cout << "\n14_DateEqualChecker" << "                             |     " << "62_ValidateDate\n";
        cout << "\n15_LastDayInMonthAndLastMonthInYearChecker" << "      |     " << "63and64_ConvertDate\n";
        cout << "\n16_AddOneDayToDate" << "                              |     " << "65_FormatDate\n";
        cout << "\n17_DefferenceInDates" << "                            |     " << endl;
        cout << "\nPlease enter a number algorithm :\n";

        cin >> Choose;

        while (cin.fail())
        {
            // user didn't input a number
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            cout << "\nInvalid Number, enter valid one" << endl;
            cin >> Choose;
        }
    } while (Choose < 0 || Choose > 66);
    return Choose;
}

void runPointStart()
{
    char RunAgain, * pRunAgain = &RunAgain;

    do
    {
        short Choose = ReadNumberPointStart();

        switch (Choose)
        {
        case 1:
            runNumberToText();
            break;
        case 2:
            runLeapYearChecker_Basic();
            break;
        case 3:
            runLeapYearChecker_Optimized();
            break;
        case 4:
            runTimeCalculator_Basic();
            break;
        case 5:
            runMonthCalculator();
            break;
        case 6:
            runMonthCalculator_Optimized();
            break;
        case 7:
            runDayNameOfWeek();
            break;
        case 8:
            runMonthCalendar();
            break;
        case 9:
            runYearCalendar();
            break;
        case 10:
            runTotalDaysBeginningOfYear();
            break;
        case 11:
            runConvertNumberToDate();
            break;
        case 12:
            runAddDaysCalcultor();
            break;
        case 13:
            runDateLessChecker();
            break;
        case 14:
            runDateEqualChecker();
            break;
        case 15:
            runLastDayInMonthAndLastMonthInYearChecker();
            break;
        case 16:
            runAddOneDayToDate();
            break;
        case 17:
            runDefferenceInDates();
            break;
        case 18:
            runAgeInDaysColculator();
            break;
        case 19:
            runDefferenceInDatesTwo_Way();
            break;
        case 20:
            runProplemsFrom20To32();
            break;
        case 33:
            runProplemsFrom33To46();
            break;
        case 47:
            runProplemsFrom47to53();
            break;
        case 54:
            runActucalVacationColculator();
            break;
        case 55:
            runColculateTheVacationReturnDate();
            break;
        case 56:
            runDate1AfterDate2Colculate();
            break;
        case 57:
            runDateCombarer();
            break;
        case 58:
            runPeriodsOverLapChecker();
            break;
        case 59:
            runPeriodLingthInDaysColculator();
            break;
        case 60:
            runDateInAPeriodChecker();
            break;
        case 61:
            runCountOverlapDaysInTwoPeriods();
            break;
        case 62:
            runValidateDate();
            break;
        case 63:
            runConvertDate();
            break;
        case 65:
            runFormatDate();
            break;

        default:
            cout << "\nInvalid Number, enter valid one" << endl;
        }
        cout << "\nDo you more Y/N ";
        cin >> *pRunAgain;

    } while (*pRunAgain == 'Y' || *pRunAgain == 'y');
}

int main()
{
    runPointStart();
}