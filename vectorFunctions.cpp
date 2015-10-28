//Programmer: Martha Winger-Bearskin   Date:3/13/13
//File Name: vectorFunctions.cpp                  Class:CS 53 A
//Purpose: This file contains the fuction definitions 

#include "vector.h"
#include <iostream>
#include <cmath>
using namespace std;


void greetings()
{
  cout << "Welcome to Lisa's Vector Math Calculator!" << endl;
  return;
}


short menu()
{
  short choice;
  
  cout << "1. Enter Vectors" << endl;
  cout << "2. Sum" << endl;
  cout << "3. Magnitude" << endl;
  cout << "4. Dot Product" << endl;
  cout << "5. Cross Product" << endl;
  cout << "6. Quit" << endl << endl;
  cout << "Enter your choice: " << endl;
  cin >> choice;
  return choice;
  
}

bool enterVector(vector &v1, vector &v2)
{
  short numVectors;
  do
  {
    cout << "How many vectors would you like to enter? (1 or 2):" << endl;
    cin >> numVectors;
    if (numVectors < 1 || numVectors > 2)
      cout << "Error you may only enter one or two vectors" << endl;
  }while(numVectors < 1 || numVectors > 2);
  
  cout << "Enter the first element of your vector: " << endl;
  cin >> v1.m_elementA;
  cout << "Enter the second element of your vector: " << endl;
  cin >> v1.m_elementB;
  cout << "Enter the third element of your vector: " << endl;
  cin >> v1.m_elementC;
  
  if (numVectors == 2)
  {
    
    cout << "Enter the first element of your second vector: " << endl;
    cin >> v2.m_elementA;
    cout << "Enter the second element of your second vector: " << endl;
    cin >> v2.m_elementB;
    cout << "Enter the third element of your second vector: " << endl;
    cin >> v2.m_elementC;
    return true;
  }
  else
    return false;
}

vector sum(const vector &v1, const vector &v2)
{
  vector answer;
  
  answer.m_elementA = (v1.m_elementA + v2.m_elementA);
  answer.m_elementB = (v1.m_elementB + v2.m_elementB);
  answer.m_elementC = (v1.m_elementC + v2.m_elementC);
  
  return answer;
    
}

float magnitude(const vector & v)
{
  float answer;
  
  answer = sqrt((v.m_elementA * v.m_elementA) +(v.m_elementB * v.m_elementB)
                + (v.m_elementC * v.m_elementC));
  return answer;
}

float dotProduct(const vector & v1, const vector &v2)
{
  float answer;
  
  answer = ((v1.m_elementA * v2.m_elementA) + (v1.m_elementB * v2.m_elementB)
              + (v1.m_elementC * v2.m_elementC));
    
  return answer;
}

vector crossProduct(const vector & v1, const vector &v2)
{
  vector answer;
  
  answer.m_elementA = ((v1.m_elementB * v2.m_elementC)
                         - (v2.m_elementB * v1.m_elementC));
  answer.m_elementB = ((v2.m_elementA * v1.m_elementC)
                         - (v1.m_elementA * v2.m_elementC));
  answer.m_elementC = ((v1.m_elementA * v2.m_elementB)
                         - (v2.m_elementA * v1.m_elementB));
  
  return answer;
}

void signOff()
{
  cout << endl <<  "Have a great day!" << endl;
  return;
}

  
void numVectError()
{
  cout << " ERROR: This operation cannot be performed on one vector"
  << endl << endl;
  return;
}

void option1Error()
{
  cout << "You must choose option 1 first" << endl << endl;
  return;
}

ostream& operator << (ostream& os, const vector & v)
{
  os << "<" << v.m_elementA << "," << v.m_elementB
  << "," << v.m_elementC << ">";
  return os;
}