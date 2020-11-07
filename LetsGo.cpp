/* My name: Mohammed Ammar
   class: 2
   Department: Computer
   */





#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name, department;
    int username, degree;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your usrename: ";
    cin >> username;
    cout << "Enter your department A or T or C: ";
    cin >> department;
    cout << "Enter your degree: ";
    cin >> degree;
    cout << "Name: " << name << endl;
    cout << "Username: " << username << endl;
    if (department == "A")
    {
        cout << "Department: Control" << endl;
    }
    if (department == "T")
    {
        cout << "Department: Communication" << endl;
    }
    if (department == "C")
    {
        cout << "Department: Computer" << endl;
    }
    switch (degree)
    {
    case 0 ... 59:
        cout << "Degree: F";
        break;
    case 60 ... 69:
        cout << "Degree: D";
        break;
    case 70 ... 79:
        cout << "Degree: C";
        break;
    case 80 ... 89:
        cout << "Degree: B";
        break;
    case 90 ... 100:
        cout << "Degree: A";
        break;
    default:
        cout << "Out Of Range!" << endl;
    }

    return 0;
}