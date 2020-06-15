using namespace std;
#include <string>
#include <iostream>
#include <fstream>

class Students
{
private:
    string name;
    string lastName;
    string bachalor;
    int enrollment;

public:
    Students(string nameP, string lastNameP, string bachalorP, int enrollmentP)
    {
        name = nameP;
        lastName = lastNameP;
        bachalor = bachalorP;
        enrollment = enrollmentP;
    };

    void createTxt(string msg)
    {
        ofstream myTxt;
        myTxt.open("myTxt");
        myTxt << msg;
        myTxt.close();
    }

    void presentation()
    {
        cout << "\n\n";
        cout << "====================================================";
        cout << "\n";
        string tmpPerson = "Yo soy " + name + ", " + "estudio " + bachalor + " y mi matricula es " + std::to_string(enrollment);
        cout << tmpPerson;
        cout << "\n";
        cout << "====================================================";
        cout << "\n\n";
        createTxt(tmpPerson);
    }
};

int main()
{
    Students student("Jansel", "Estevez", "Informatica Gerencial", 201909289);
    student.presentation();
    return 0;
}