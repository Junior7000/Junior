/* My name: Mohammed Ammar
   class: 2
   Department: Computer
   */

#include <iostream>
#include <string>
using namespace std;
class Student
{

private:
    string name, Class, materials[8] = {"Python: ", "C++: ", "Kotlin: ", "Java: ", "HTML: ", "Dart: ", "SQL: ", "PHP: "};
    char department, degree;
    int usernameID, average;
    int material, var = 0;

public:
    void setName()
    {
        cout << "Enter the Studan's Name: ";
        cin >> name;
    }

    void setUsernameID()
    {
        cout << "Enter the Studan's UserNameID: ";
        cin >> usernameID;
    }
    void SetDepartment()
    {
        cout << "Enter the Studan's Department: ";
        cin >> department;

        if (department == 'A')
        {
            Class = "CONTROL";
        }
        else if (department == 'T')
        {
            Class = "Communication";
        }

        else if (department == 'C')
        {
            Class = "Computer";
        }
        else
        {
            Class = "Unknown";
        }
    }
    void SetMaterialDegree()
    {
        cout << "Enter the degree of 8 materials: " << endl;
        for (int x = 0; x < 8; x++)
        {
            cout << materials[x];
            cin >> material;
            var += material;
        }
        average = var / 8;

        switch (average)
        {
        case 0 ... 19:
            degree = 'F';
            break;
        case 20 ... 39:
            degree = 'D';
            break;
        case 40 ... 59:
            degree = 'C';
            break;
        case 60 ... 79:
            degree = 'B';
            break;
        case 80 ... 100:
            degree = 'A';
            break;
        default:
            cout << "Out Of Range!" << endl;
        }
    }

    void print()
    {

        cout << "\n\n\n~~~~~~~~~~~~~~~~~~THE RESULTS~~~~~~~~~~~~~~~~~~~\n\n\n"
             << endl;

        cout << "Studant Name: " << name << endl;
        cout << "USERNAME_ID: " << usernameID << endl;
        cout << "Department: " << Class << endl;
        cout << "Average: " << average << endl;
        cout << "Degree: " << degree << endl;
    }
};

char Exit;

int main()
{

    do
    {
        Student student;

        student.setName();
        student.setUsernameID();
        student.SetDepartment();
        student.SetMaterialDegree();
        student.print();

        cout << "Do you want to Exit [Y or N] : ";
        cin >> Exit;
    } while (Exit != 'y');

    return 0;
}