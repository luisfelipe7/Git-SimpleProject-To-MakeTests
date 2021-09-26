/*

Author: Felipe Castro
Class: Main.cpp
Information: Created to perform simple tests with Git

*/

#include <iostream>

using namespace std;

class Person
{

// Attributes
private:
string name;
string id;
int age;

// Constructors
public:
// Without Parameters
Person(){
name = "";
id = "";
age = 0;
}
// With Parameters
Person(string Name, string Id, int Age){
name = Name;
id = Id;
age = Age;
}


};