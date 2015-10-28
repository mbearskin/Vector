//Programmer: Martha Winger-Bearskin   Date:3/13/13
//File Name: vector.h                  Class:CS 53 A
//Purpose: This is a header file that contains the function prototypes and struc
//definitions for my vector program. 

#ifndef VECTOR_H
#define VECTOR_H
#include <iostream> 
using namespace std;


struct vector
{
  float m_elementA;
  float m_elementB;
  float m_elementC;
  
};


//The greetings() displays a gretting to user.
//Pre: none
//Post: greeting is displayed to screen 
void greetings();

//The menu() displays a menu to user.
//Pre: none
//Post: displays a menu to user and reads in and returns choice.
short menu();

//The enterVector() reads in vectors from user.
//Pre:  none
//Post: reads in 1 or 2 vectors and returns and a flag to signal if 1 or 2
//      vectors were entered
bool enterVector(vector &v1, vector &v2);

//The sum() calculates the sum of two vectors.
//Pre:  none
//Post: the sum of the two vectors entered by the user is calculated and that
//       vector is returned.
vector sum(const vector & v1, const vector &v2);

//The magnitude() calculates the magnitude of a vector.
//Pre:  none
//Post: the magnitude of the vector calculated and that value is returned.
float magnitude(const vector & v);

//The dotProduct() calculates the dot product of two vectors and
//returns this value.
//Pre:  none
//Post: the dot product of vectors entered by user are calculated and returned.
float dotProduct(const vector & v1, const vector &v2);

//The crossProduct() calculates cross product of two vectors and
//returns this vector.
//Pre:  none
//Post: the cross product of two vectors entered by user is calculated that
//      vector is returned. 
vector crossProduct(const vector & v1, const vector &v2);


//The signOff() displays a sign off message to user. 
//Pre: none
//Post: sign off is displayed to screen
void signOff();


//The numVectError() displays an error message to user if they choose an
//operation that requires two vectors to be entered and only one has been
//entered.
//Pre: none
//Post: displays error to screen. 
void numVectError();

//This Funtion overloads the << operator to display the user defined structure
//vector.
//Pre: none
//Post: the << can now be used to display a vector structure like this <a,b,c>
ostream& operator << (ostream& os,const vector& v);


#endif
