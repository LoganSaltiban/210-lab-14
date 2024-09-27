#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Student
{
private: // Private variables
int ID;
double GPA;
string name;

public: // Public methods
void set_ID(int i) { ID = i;}
int get_ID() { return ID; }
void set_GPA(double newGPA) { GPA = newGPA; }
double get_GPA() { return GPA; }
void set_name(string newName) { name = newName; }
string get_name() { return name; }


};

int main()
{

    Student Taylor;
    string tempName;
    cout << "Enter Student's Name: ";
    cin >> tempName;
    Taylor.set_name(tempName);
    cout << "The Students name is: " << Taylor.get_name() << endl;


    return 0;
}