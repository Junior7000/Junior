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
    char Exit;
    int usernameID, degree;

    do
    {
        cout << "Enter your name: ";
        cin >> name;
        cout << "Enter your usrename: ";
        cin >> usernameID;
        cout << "Enter your department A or T or C: ";
        cin >> department;
        cout << "Enter your degree: ";
        cin >> degree;
       
        
        cout << "Name: " << name << endl;
        cout << "Username: " << usernameID << endl;
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
            cout << "Degree: F" << endl;
            break;
        case 60 ... 69:
            cout << "Degree: D" << endl;
            break;
        case 70 ... 79:
            cout << "Degree: C" << endl;
            break;
        case 80 ... 89:
            cout << "Degree: B" << endl;
            break;
        case 90 ... 100:
            cout << "Degree: A" << endl;
            break;
        default:
            cout << "Out Of Range!" << endl;
        
        
        }
        cout << "Do you want Exit [Y or N]";
        cin >> Exit;
    } while (Exit != 'y');
    
    
    return 0;
}