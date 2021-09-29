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
        return firstCharacter - 48;
    }

    // Method to get the name of the Person
    string getName()
    {
        return name;
    }

    // Method to get the id of the Person
    string getId()
    {
        return id;
    }

    // Method to define to define in which province the person was born based on the ID
    void provinceBornById()
    {
        // Evaluating the first letter of the ID to define the province
        switch (gettingFirstValueFromString(id))
        {
        case 1:
            cout << "The person was born in San Jose" << endl;
            break;
        case 2:
            cout << "The person was born in Alajuela" << endl;
            break;
        case 3:
            cout << "The person was born in Cartago" << endl;
            break;
        case 4:
            cout << "The person was born in Heredia" << endl;
            break;
        case 5:
            cout << "The person was born in Guanacaste" << endl;
            break;
        case 6:
            cout << "The person was born in Puntarenas" << endl;
            break;
        case 7:
            cout << "The person was born in Limon" << endl;
            break;
        case 8:
            cout << "The person is Naturalized" << endl;
            break;
        case 9:
            cout << "The person is part of the Special Birth Group" << endl;
            break;
        default:
            cout << "The ID is not valid" << endl;
            break;
        }
    }
};