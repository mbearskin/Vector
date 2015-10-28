//Programmer: Martha Winger-Bearskin   Date:3/13/13
//File Name: vectorCalculator.cpp                  Class:CS 53 A
//Purpose: This is the main file for program 6. This program will calculate
//different vector math functions for the user. This will be presented in a menu
//and perform the math operations on vector provided by user.


#include "vector.h"
#include <iostream>
using namespace std;

int main()
{
  // Variable Declarations 
  bool quit = false; 
  bool twoVect;     // signals where two vectors have been entered by user
  bool vectEntered = false; //signals if option 1 has been choosen first
  vector vect1;
  vector vect2;
  int choice;
  
  
  cout.precision(2);
  
  greetings();
  
  do
  {
    choice = menu();
    if (!vectEntered && choice != 1)
      cout << "Error: You must choose option 1 first" << endl << endl;
    else
    {
      switch (choice)
      {
        case 1 :
          twoVect = enterVector(vect1,vect2);
          vectEntered = true;
          break;
        case 2 :
          if (twoVect)
          {
            cout << "The sum of " << vect1 << " and " << vect2
                 << " is " << sum(vect1, vect2) << endl << endl;
          }
          else
            numVectError();
          break;
        case 3 :
          cout << "The Magnitude of " << vect1 << " is " << magnitude(vect1)
          << endl;
          if (twoVect)
            cout << "The Magnitude of " << vect2 << " is " << magnitude(vect2)
            << endl;
          break;
        case 4 :
          if (twoVect)
          {
            cout << "The Dot Product of " << vect1 << " and " << vect2
            << " is " << dotProduct(vect1, vect2) << endl << endl;
          }
          else
            numVectError();
          break;
        case 5 :
          if (twoVect)
          {
            cout << "The Cross Product of " << vect1 << " and " << vect2
            << " is " << crossProduct(vect1, vect2) << endl << endl;
          }
          else
            numVectError();
          break;
        case 6 :
          quit = true;
          break;
        default:
          cout << "ERROR: Not a vaild menu option!" << endl;
      }
    }
  }while(!quit);
  
  signOff();
  

  return 0;
}

