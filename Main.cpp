/*

Author: Felipe Castro
Class: Main.cpp
Information: Created to perform simple tests with Git

*/

#include "Person.cpp"

using namespace std;

int main()
{
    // Saying Hello and explaining the creation of this class
    cout << "Hello World, I am making this as a test to practice Git Branches" << endl;
    cout << endl;
    system("pause");
    cout << endl;

    // Creating one person and testing the methods
    Person p1("Yenifer", "902300414", 25);
    p1.personalInformation();
    if (!(p1.isLegalAge()))
    {
        cout << "This person is having the legal age (+18)" << endl;
    }
    else
    {
        cout << "This person is not having the legal age (-18)" << endl;
    }

    cout << endl;
    system("pause");
    cout << endl;

    cout << "Here we are checking based on the ID where the person was born:" << endl;
    p1.provinceBornById();
    cout << endl;
    system("pause");

    cout << "Until here is completed the Release v2.0" << endl;

    return 0;
}