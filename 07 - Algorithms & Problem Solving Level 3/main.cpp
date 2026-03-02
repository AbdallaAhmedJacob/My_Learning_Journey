#include <iostream>

using namespace std;

// Declaration area.

void runMatrixRandomDemo();
void runSumMatrixRandomDemoRow();
void runSumMatrixRandomDemoRowWithArray();
void runSumMatrixRandomDemoCol();
void runSumMatrixRandomDemoColInArray();
void runMatrixOrderedDemo();
void runMatrixTransposedDemo();
void runSumDigitTooMatrix();
void runMiddleRowAndCol();
void runSumMatrixRandomNumbers();
void runCheckCompareTooMatrix();
void runCheckSumTowMatrix();
void runIdentity();
void runScalar();
void runCheckNumberInMatrix();
void runCheckSparseMatrix();
void runCheckNumInMatrix();
void IntersectedNumbers();
void runMinAndMaxNumbersInMatrix();
void runPalindromeMatrix();
void runFibonacciSeries();
void runFibonacciSeriesUsingRecharging();
void runPrintFirstLetterInWords();
void runUpperFirstLetterInWords();
void runLowerFirstLetterInWords();
void runUpperLowerOllLetter();
void runInvertCharacter();
void runInvertString();
void runLetterCounter();
void runCounterInString();
void runCounterInStringCAndS();
void runCheckerVowelLetters();
void runCounterVowelsInString();
void runPrintVowelsInString();
void runPrintWordsInString();
void runCountWordsInString();
void runPrintNumberAndItWords();
void runTrimLeftAndRight();
void runVectorOfString();
void runArrayOfString();
void runReverserWords();
void runReplaceWords();
void runReplaceWordsDoNotMatchCase();
void runRemovePunctuations();
void runReadClintData();
void runPrintClientData();
void runSaveClientDataToFile();
void runShowData();
void runFindClientByAccountNumber();
void runDeleteClientByAccountNumber();
void runUpdateClientByAccountNumber();

short ReadNumberPointStart()
{
    short Choose = 0;
    do
    {
        cout << "1- Matrix Random Demo                       "; cout << "26- Upper and Lower Oll Letter\n";
        cout << "2- Sum Matrix Random Demo                   "; cout << "27- Invert Character\n";
        cout << "3- Sum Matrix Random Demo With Array        "; cout << "28- Invert String\n";
        cout << "4- Sum Matrix Random Demo Col               "; cout << "29- Letter Counter\n";
        cout << "5- Sum Matrix Random Demo Col               "; cout << "30- Counter In String\n";
        cout << "6- Matrix Ordered Demo                      "; cout << "31- Counter In String CAndS\n";
        cout << "7- Matrix transposed Demo                   "; cout << "32- Checker Vowel Letters\n";
        cout << "8- Sum Digit too Matrix                     "; cout << "33- Counter Vowels In String\n";
        cout << "9- Middle Row And Col                       "; cout << "34- Print Vowels In String\n";
        cout << "10- Sum Matrix Random Numbers               "; cout << "35- Print Words In String\n";
        cout << "11- Check Compare too Matrix                "; cout << "36- Counter Words In String\n";
        cout << "12- Check Sum Tow Matrix                    "; cout << "37- Counter Vowels In String\n";
        cout << "13- Identity                                "; cout << "38- Trim Left And Right\n";
        cout << "14- Scalar                                  "; cout << "39- Vector Of String\n";
        cout << "15- Check Number In Matrix                  "; cout << "40- Array Of String\n";
        cout << "16- Check Sparse Matrix                     "; cout << "41- Reverser Words\n";
        cout << "17- Check Num In Matrix                     "; cout << "42- Replace Words\n";
        cout << "18- Intersected Numbers                     "; cout << "43- Replace Words Don\'t Match Case\n";
        cout << "19- Min and Max Numbers in Matrix           "; cout << "44- Remove Punctuations\n";
        cout << "20- Palindrome Matrix                       "; cout << "45- Read Clint Data\n";
        cout << "21- Fibonacci Series                        "; cout << "46- Print Client Data\n";
        cout << "22- Fibonacci Series Using Recharging       "; cout << "47- Save Client Data To File\n";
        cout << "23- Print First Letter In Words             "; cout << "48- Show Data\n";
        cout << "24- Upper First Letter In Words             "; cout << "49- Find Client By Account Number\n";
        cout << "25- Lower First Letter In Words             "; cout << "50- Delete Client By Account Number\n";
                                                                cout << "51- Update Client By Account Number\n";
        
        cout << "Please enter a number algorithm from 1 to 51:\n\n";

        cin >> Choose;

        while (cin.fail())
        {
            // user didn't input a number
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            
            cout << "Invalid Number, enter valid one" << endl;
            cin >> Choose;
        }
    } while (Choose < 0 || Choose > 51);
    return Choose;
}

void runPointStart()
{
    char* ptnRunAgain = new char;

    do
    {
        short Choose = ReadNumberPointStart();

        switch (Choose)
        {
        case 1:
            runMatrixRandomDemo();
            break;
        case 2:
            runSumMatrixRandomDemoRow();
            break;
        case 3:
            runSumMatrixRandomDemoRowWithArray();
            break;
        case 4:
            runSumMatrixRandomDemoCol();
            break;
        case 5:
            runSumMatrixRandomDemoColInArray();
            break;
        case 6:
            runMatrixOrderedDemo();
            break;
        case 7:
            runMatrixTransposedDemo();
            break;
        case 8:
            runSumDigitTooMatrix();
            break;
        case 9:
            runMiddleRowAndCol();
            break;
        case 10:
            runSumMatrixRandomNumbers();
            break;
        case 11:
            runCheckCompareTooMatrix();
            break;
        case 12:
            runCheckSumTowMatrix();
            break;
        case 13:
            runIdentity();
            break;
        case 14:
            runScalar();
            break;
        case 15:
            runCheckNumberInMatrix();
            break;
        case 16:
            runCheckSparseMatrix();
            break;
        case 17:
            runCheckNumInMatrix();
            break;
        case 18:
            IntersectedNumbers();
            break;
        case 19:
            runMinAndMaxNumbersInMatrix();
            break;
        case 20:
            runPalindromeMatrix();
            break;
        case 21:
            runFibonacciSeries();
            break;
        case 22:
            runFibonacciSeriesUsingRecharging();
            break;
        case 23:
            runPrintFirstLetterInWords();
            break;
        case 24:
            runUpperFirstLetterInWords();
            break;
        case 25:
            runLowerFirstLetterInWords();
            break;
        case 26:
            runUpperLowerOllLetter();
            break;
        case 27:
            runInvertCharacter();
            break;
        case 28:
            runInvertString();
            break;
        case 29:
            runLetterCounter();
            break;
        case 30:
            runCounterInString();
            break;
        case 31:
            runCounterInStringCAndS();
            break;
        case 32:
            runCheckerVowelLetters();
            break;
        case 33:
            runCounterVowelsInString();
            break;
        case 34:
            runPrintVowelsInString();
            break;
        case 35:
            runPrintWordsInString();
            break;
        case 36:
            runCountWordsInString();
            break;
        case 37:
            runPrintNumberAndItWords();
            break;
        case 38:
            runTrimLeftAndRight();
            break;
        case 39:
            runVectorOfString();
            break;
        case 40:
            runArrayOfString();
            break;
        case 41:
            runReverserWords();
            break;
        case 42:
            runReplaceWords();
            break;
        case 43:
            runReplaceWordsDoNotMatchCase();
            break;
        case 44:
            runRemovePunctuations();
            break;
        case 45:
            runReadClintData();
            break;
        case 46:
            runPrintClientData();
            break;
        case 47:
            runSaveClientDataToFile();
            break;
        case 48:
            runShowData();
            break;
        case 49:
            runFindClientByAccountNumber();
            break;
        case 50:
            runDeleteClientByAccountNumber();
            break;
        case 51:
            runUpdateClientByAccountNumber();
            break;

        default:
            cout << "There is something wrong!\n";
        }
        cout << "\nDo you more Y/N ";
        cin >> *ptnRunAgain;

    } while (*ptnRunAgain == 'Y' || *ptnRunAgain == 'y');

    delete ptnRunAgain;
}

int main()
{
    srand((unsigned)time(NULL));

    runPointStart();
}