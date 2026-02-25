// Convert

#include <iostream>
#include<string>
#include<cmath>

using namespace std;

struct stNum
{
    string String = "43.2214523564587697067853424313212122222222451457755669898787575865878776888898999";
    int Int = 20;
    float Float = 55.23658658654543643643434364309870987;
    double Double = 33.5968659754645322441142653287989045654352352452;
};

struct Main
{
    stNum Mine;
};
int main()
{
    Main Main;

    cout << "Convert string to int    "<< stoi(Main.Mine.String) <<"\n";
    cout << "Convert string to float  "<< stof(Main.Mine.String) << "\n";
    cout << "Convert string to double "<< stod(Main.Mine.String) <<"\n\n";
   
    cout << "Convert int to float  " << float(Main.Mine.Int)<<" or "<<(float)Main.Mine.Int << "\n";
    cout << "Convert int to double " << double(Main.Mine.Int) << " or " << (double)Main.Mine.Int << "\n";
    cout << "Convert int to string " <<to_string(Main.Mine.Int) << "\n\n";
    
    cout << "Convert float to int    " << int(Main.Mine.Float) << " or " << (int)Main.Mine.Float << "\n";
    cout << "Convert float to double " << to_string(Main.Mine.Float) << "\n";
    cout << "Convert float to string " << to_string(Main.Mine.Float) << "\n";
    
                                          
    cout << "Convert double to int    "<< int (Main.Mine.Double)<<" or "<< (int)Main.Mine.Double << "\n";
    cout << "Convert double to float  "<< float(Main.Mine.Double) <<" or "<< float(Main.Mine.Double) << "\n";
    cout << "Convert double to string "<< to_string(Main.Mine.Double) << "\n";
    
}