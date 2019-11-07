//Kellie Henderson, Dr. Tyson McMillan: Dr_T, 09-04-2019
//This code made the compiler compile random stuff that helps me to understand a compiler - I hope.
/*
	Input Validation with Ref Functions 
	A cleaner way to do input validation
	Validating input, an essential process.
	Source: http://stackoverflow.com/questions/514420/how-to-validate-numeric-input-c
	Keeping Dr. McMillan from breaking my code, defend against "dark side of the force",
	and/or legitimate user error. 
	//Try and Catch blocks are used in error checking
	Teacher: Dr. Tyson McMillan 
*/
#include <cstdlib>  // Provides EXIT_SUCCESS
#include <iostream>  // Provides cout, cerr, endl
#include "Input_Validation_Extended.h" // Provides getValidatedInput<T>(), a header File with a Template Class
                              // Extended 2-11-2016 by Dr. McMillan to add validation methods by datatype
#include<string> //for string manipulation
#include <cmath>
#include<sstream> //for string manipulation and comparison
using namespace std;

//$_earned       mom  dad
double MakeBank(bool,bool); //function prototype
double numberCube(double); // function prototype
void welcomeMessage (); // function prototype
void dayOFTheWeek(int); // function prototype

#include <iomanip>

int main()
{ 

int dayMain = 0; // day input from the user
double numMain = 0.0;
 cout << fixed << setprecision(4) << numberCube(numMain) << endl;
 char exit ='\0'; // null char initialization
 
 do
 { //begin do
 welcomeMessage();

 
    //function calls (true = "yes", false="no"
    cout << "\nLittle Sister Function calls: ";
    cout << "\nOption 1, Little Sister Earns: $ " << MakeBank(true,false);
    cout << "\nOption 2, Little Sister Earns: $ " << MakeBank(false,true);
    cout << "\nOption 3, Little Sister Earns: $ " << MakeBank(true,true);
    cout << "\nOption 4, Little Sister Earns: $ " <<  MakeBank(false,false);
 
  cout << "\nPlease enter the day of the week (1-7): " << endl;
  dayMain = validateInt(dayMain);
  dayOFTheWeek(dayMain); // call: pass as argument the value from the user

  cout << "\n Please enter a number. I will cube it for you: " << endl;
  cin >> numMain; // accept input from the user of a double variable.
  cout << "\nCube result of number " << numMain << " = " << numberCube(numMain);
  cout << endl;

    /*Programming Challenges
      1. Extend this program to output how much Little Sister earns in each scenario.
      2. Create a void welcomeMessage(); function to show a nice greeting on screen to the program.
      3. Extend this program to write a void dayOfTheWeek(int); function given user input of the number (1 output Sunday);
      4. Output each day of the week in a different color.
      5. Extend this program create a function double numberCube(double); to output the cube of the number passed.
      6. Extend this program set the precision of the numberCube result to 4 decimal places
      7. Loop the program until exit conditions 'E' AND 'e', clear the screen upon each loop #include<cstdlib> system("cls");
    */
    cout << "\nPress any key to continue (E or e to exit): " ; 
    cin >> exit; // ask the user to loop the program E to exit (get data)
    } while (exit != 'e' && exit != 'E'); // DeMorgan's law //end do-while
    return 0;
}

double MakeBank(bool mom, bool dad)
{
	double amtEarned = 0.0; //what sister can get from parents
	//handle each scenario How much does Little Sister earn $20 increments.
  if(mom == true)
    {
      amtEarned += 20.0; // mom said yes
    }
  if(dad == true)
    {
      amtEarned += 20.0; // dad said yes
    }
  if(mom == false)
    {
      cout << "\nAin't $" ;
    }
  if(dad == false)
    {
      cout << "\nNo $.";
    }
	return amtEarned;
}
void welcomeMessage ()
{
  for(int i = 0; i<= 20; i++)
  cout << "*";
  cout << "\x1b[32;1mI work hard for the money! So hard for it honey!\x1b[0m\n" << endl;
}

void dayOFTheWeek(int day)
{
  if (day == 1)
  {
    cout << "\x1b[44;1mSunday\x1b[0m\n" << endl; // bold 1
  }
  else if (day == 2)
  {
    cout << "\x1b[33;1mMonday\x1b[0m\n"; // Bold 2
  }
  else if (day == 3)
  {
    cout << "\x1b [31;1mTuesday\x1b[0m\n"; //Bold  3
  }
  else if (day == 4)
  {
    cout << "\x1b[45;1mWednesday\x1b[0m\n" << endl; // bold 4
  }
  else if (day == 5)
  {
    cout << "\x1b[36;1mThursday\x1b[0m\n"; // Bold 5
  }
  else if (day == 6)
  {
    cout << "\x1b[32;1mFriday\x1b[0m\n" << endl; // bold 6
  }
  else if (day == 7)
  {
    cout << "\x1b[32;1mSaturday\x1b[0m\n"; // Bold 7
  }
  else if (day > 7 ) // default clause
  {
    cout << "\nError: Something went wrong." << endl;
  }
}
double numberCube(double n)
  {
  //return (n*n*n);
// must add #include <cmath>
 return pow(n, 3.0);  
  }


/* The program ends with uninformative and/or limited loops if I enter incorrect inputs enough times. */ 

