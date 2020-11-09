/* My name: Mohammed Ammar
   class: 2
   Department: Computer
   */





#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name[10],Class[10];
    char Exit, degree[10], department[10];
    int usernameID[10], average[10], var=0;
    int material[8];
    string materials[8] = {"Python: ","C++: ","Kotlin: ","Java: ","HTML: ","Dart: ","SQL: ","PHP: "};

    do
    {
        
        for (int i = 0; i < 10; i++)
        {
            cout << "Enter the student's name: ";
            cin >> name[i];
            cout << "Enter the student's usrenameID: ";
            cin >> usernameID[i];
            cout << "Enter the student's department A or T or C: ";
            cin >> department[i];
            if (department[i] == 'A')
            {
                Class[i]="CONTROL";
            }
            if (department[i] == 'T')
            {
                Class[i]= "Communication";
            }
            if (department[i] == 'C')
            {
                Class[i]="Computer" ;
            }
            cout << "Enter the degree of 8 materials: " <<endl;
            for (int x = 0; x < 8; x++)
            {
                cout<<materials[x];
                cin>>material[x];
            }

            for (int g = 0; g < 8 ; g++)
            {
                var += material[g];
            }

            for (int j= 0; j < 10; j++)
            {
                average[j] = var/8;
            }

            switch (average[i])
            {
            case 0 ... 59:
                degree[i] = 'F';
                break;
            case 60 ... 69:
                degree[i] = 'D';
                break;
            case 70 ... 79:
                degree[i] = 'C';
                break;
            case 80 ... 89:
                degree[i] = 'B';
                break;
            case 90 ... 100:
                degree[i] = 'A';
                break;
            default:
                cout << "Out Of Range!" << endl;
            }
        }
        
    
           
      
       
        

        cout << "~~~~~~~~~~~~~~~~~~THE RESULTS~~~~~~~~~~~~~~~~~~~" << endl;

        for (int i = 1; i <= 11 ; i++)
        {
        cout << "Studant:"<<i<<" Name:"<< name[i]<<" "<<" USERNAME_ID: "<<usernameID[i]<<" "<<"Department: "<< Class[i]<<" "<<" Average: "<<average[i]<<" "<<"Degree: "<<degree[i]<<endl;
        }
        


        cout << "Do you want Exit [Y or N] : ";
        cin >> Exit;
    } while (Exit != 'y');
    
    
    return 0;
}