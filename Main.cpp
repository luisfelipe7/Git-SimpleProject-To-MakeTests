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

    // Creating one person and testing the methods
    Person p1("Yenifer","402300414",25);
    p1.personalInformation();
    if(!(p1.isLegalAge())){
        cout<<"This person is having the legal age"<<endl;
    }else{
        cout<<"This person is not having the legal age"<<endl;
    }
    cout<<endl;
    system("pause");

    return 0;
}
