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
    Person()
    {
        name = "";
        id = "";
        age = 0;
    }
    // With Parameters
    Person(string Name, string Id, int Age)
    {
        name = Name;
        id = Id;
        age = Age;
    }

    // Obtain person information
    void personalInformation()
    {
        cout << "Hello, this is my personal information:" << endl;
        cout << "- Name : " << name << endl;
        cout << "- Id : " << id << endl;
        cout << "- Age : " << age << endl;
    }

    // Method to define if a person is "legal"
    bool isLegalAge()
    {
        return (age < 18);
    }

    // Method to get the first character from an string in an int value
    int gettingFirstValueFromString(string value)
    {
        char firstCharacter = value.at(0);
        cout << "This one is the first character: " << firstCharacter << endl;
        return 0;
    }

    // Method to define to define in which province the person was born based on the ID
    void provinceBornById()
    {
        switch (gettingFirstValueFromString(id))
        {
        case 1:
            /* code */
            break;

        default:
            break;
        }
    }
};