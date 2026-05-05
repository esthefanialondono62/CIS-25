#include <iostream>
#include <string>
using namespace std;


struct Patient {
    int id;
    string name;
    int age;
};

int main() {

    
    Patient patient;

    
    Patient* ptr = &patient;

    
    patient.id = 101;
    patient.name = "Maria Lopez";
    patient.age = 25;

   
    cout << "Patient Information:" << endl;
    cout << "ID: " << ptr->id << endl;
    cout << "Name: " << ptr->name << endl;
    cout << "Age: " << ptr->age << endl;

    return 0;
}
