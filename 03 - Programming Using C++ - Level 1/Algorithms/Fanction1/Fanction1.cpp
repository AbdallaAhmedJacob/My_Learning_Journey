// Function1

#include <iostream>
using namespace std;

struct stStars
{
	string Stars30 = "******************************";
};

struct stCom
{
	string Email;
	unsigned int Phone;
	unsigned int WhetsApp;
	string FaceBook;
	string Instagram;
	string YouTube;
	string LinkedIn;
	string GitHap;
	string SnapChat;
};

struct stSalary
{
	float monthlySalary;
};

struct stInfo
{
	string Name;
	short Age;
	string City;
	string Country;
	stCom Com;
	stSalary Salary;
	string Marred;
	string Gender;

};

enum enMarred { Yes, No };
enum enGender { Male, Female };

void PersonInformation()
{
	stInfo Person1;
	stStars Stars;


	cout << "Pleas enter your Name\n";
	cin >> Person1.Name;

	cout << "Pleas enter your Age \n";
	cin >> Person1.Age;

	cout << "Pleas enter your City\n";
	cin >> Person1.City;

	cout << "Pleas enter your Country \n";
	cin >> Person1.Country;

	cout << "Pleas enter your Monthly Salary\n";
	cin >> Person1.Salary.monthlySalary;

	cout << "Pleas enter your Gender\n";
	cin >> Person1.Gender;

	cout << "Do you  is Marred enter 1,or 0\n";
	cin >> Person1.Marred;

	cout << "Pleas enter your Phone\n";
	cin >> Person1.Com.Phone;

	cout << "Pleas enter your Email\n";
	cin >> Person1.Com.Email;

	cout << "Pleas enter your Face Book\n";
	cin >> Person1.Com.FaceBook;

	cout << "Pleas enter your Instagram \n";
	cin >> Person1.Com.Instagram;

	cout << "Pleas enter your You Tube \n";
	cin >> Person1.Com.YouTube;

	cout << "Pleas enter your Whets App\n";
	cin >> Person1.Com.WhetsApp;

	cout << "Pleas enter your LinkedIn\n";
	cin >> Person1.Com.LinkedIn;

	cout << "Pleas enter your Git Hap" << endl;
	cin >> Person1.Com.GitHap;

	cout << "Pleas enter your Snap chat" << endl;
	cin >> Person1.Com.SnapChat;


	cout << Stars.Stars30 << "\n";
	cout << "This your Name :" << Person1.Name << "\n";
	cout << "This your Age    :" << Person1.Age << "\n";
	cout << "This your Gender :" << Person1.Gender << "\n";
	cout << "This your Country:" << Person1.Country << "\n";
	cout << "This your City   :" << Person1.City << "\n";
	cout << "This your Salary Monthly  :" << Person1.Salary.monthlySalary << "\n";
	cout << "This your Salary Yearly   :" << Person1.Salary.monthlySalary * 12 << "\n";
	cout << "This your Marred :" << Person1.Marred << "\n";
	cout << "This your Email  :" << Person1.Com.Email << "\n";
	cout << "This your Phone  :" << Person1.Com.Phone << "\n";
	cout << "This your WhetsApp :" << Person1.Com.WhetsApp << "\n";
	cout << "This your FaceBook :" << Person1.Com.FaceBook << "\n";
	cout << "This your You Tube :" << Person1.Com.YouTube << "\n";
	cout << "This your Instagram:" << Person1.Com.Instagram << "\n";
	cout << "This your Linked in:" << Person1.Com.LinkedIn << "\n";
	cout << "This your Git Hap  :" << Person1.Com.GitHap << "\n";
	cout << "This your Snap chat:" << Person1.Com.SnapChat << "\n";
	cout << Stars.Stars30 << endl;

}

void A()
{
	std::cout << "      *\n";
	std::cout << "     * *\n";
	std::cout << "    *   *\n";
	std::cout << "   *******\n";
	std::cout << "  *       *\n";
	std::cout << " *         *\n";
	std::cout << "*           *\n";
}


void Stars()
{
	string stars = "********";

	cout << stars << "\n";
	cout << stars << "\n";
	cout << stars << "\n";
	cout << stars << "\n";

}

void MySumProcedure()
{
	int Num1, Num2, Sum;

	cout << "Please enter 10\n";
	cin >> Num1;
	cout << "Please enter 20\n";
	cin >> Num2;
	cout << "*********************\n"<<Num1 + Num2<<endl;
}

int MySumFuntion()
{
	int Num1, Num2;

	cout << "Please enter 10\n";
	cin >> Num1;
	cout << "Please enter 20\n";
	cin >> Num2;
    return Num1 + Num2;
}

int Num1 = 900;
int Num2 = 300;

void main()
{
	int Num2 = 9;
	/*PersonInformation();
	A();
	Stars();*/
    //MySumProcedure();
	int Result = MySumFuntion();
	cout << Result<<"\n";
	cout << ::Num1 + ::Num2;

}