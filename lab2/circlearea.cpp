/*LAB 2.2 Working with Constants, Variables and Arithmetic Operators 
Exercise 1: Bring in the file circlearea.cpp from the Lab 2 folder. 
The code   of circlearea.cpp is as follows: 

*/
// This program will output the circumference and area 
// of the circle with a given radius. 
// Aayush Yadav

#include <iostream> 
using namespace std; 

const double PI = 3.14; 
const double RADIUS = 5.4; 

int main() 

{
int area; // definition of area of circle
int circumference; // definition of circumference 
circumference = 2 * PI * RADIUS; // computes circumference 
area =PI * RADIUS* RADIUS; // computes area
 
cout<<"The circumference of the circle is "<<circumference<<endl;// Fill in the code for the cout statement that will output (with description) 
// the circumference 
cout<<"The area of the circle is "<<area<<endl;// Fill in the code for the cout statement that will output (with description) 
// the area of the circle 
return 0; 
} 