/*LAB 2.1 Working with the cout Statement 
Exercise 1: Retrieve   program name.cpp from the Lab 2 folder. 
Fill in the code so that the program will do the following: 
Write your first and last name on one line. 
Write your address on the next line (recall the function of the endl 
statement). Write your city, state and zip on the next line. 
Write your telephone number on the next line. 
Remember that to output a literal, such as “Hello”, you must use quotes. 
Compile and run the program. 
Example: Deano Beano 
123 Markadella   Lane 
Fruitland, Md. 55503 
489-555-5555 
The code   for name.cpp is as follows: */

// This program will write the name, address and telephone 
// number of the programmer. 
// Aayush Yadav
#include <iostream> 
using namespace std; 
int main() 
{ 
cout<<"******************************"<<endl;
cout <<"Progammer: Aayush Yadav"<<endl;// Fill in this space to write your first and last name 
cout <<"\t  300 8th ave s"<<endl;// Fill in this space to write your address (on new line) 
cout <<"\t  st.cloud, Mn. 56301"<<endl;// Fill in this space to write you city, state and zip (on new line) 
cout <<"Telephone: 320-291-0087"<<endl;// Fill in this space to write your telephone number (on new line) 
cout<<"******************************"<<endl;
return 0; 
} 