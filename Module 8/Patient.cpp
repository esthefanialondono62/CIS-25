#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct patient
{
   int id;
   string name;
   int age;
   string gender;
   string diagnosis;

};

patient* patients = new patient[100];
int total = 0;

void showmenu(){


cout << " -------Hospital Patient System-------" << endl;

cout << "------------ Menu ------------ " << endl;
cout << endl;

cout << "1. Add Patient " << endl;
cout << endl;
cout << "2. Display Patient " << endl;
cout << endl;
cout << "3. Search Patient " << endl;
cout << endl;
cout << "4. Update Patient " << endl;
cout << endl;
cout << "5. Save Patient " << endl;
cout << endl;
cout << "6. Exit " << endl;
cout << endl;


}

void AddPatient(){

cout << " Enter Patient ID: " << endl;
cin>>patients[total].id;
cout << endl;
cout << " Enter Name: " << endl;
cin>>patients[total].name;
cout << endl;
cout << " Enter Age: " << endl;
cin>>patients[total].age;
cout << endl;
cout << " Enter Gender: " << endl;
cin>> patients[total].gender;
cout << endl;
cout << " Enter Diagnosis: " << endl;
cin>>patients[total].diagnosis;

total++;

}

void DisplayPatient(){

for (int i = 0; i < total; i++){
   
cout << "ID: " << patients[i].id << endl;
cout << endl;
cout << "Name: " << patients[i].name << endl;
cout << endl;
cout << "Age: " << patients[i].age << endl;
cout << endl;
cout << "Gender: " << patients[i].gender << endl;
cout << endl;
cout << "Diagnosis: " << patients[i].diagnosis << endl;
cout << endl;

}

}
    
void SearchPatient(){
   
int searchID;
bool found;

cout << " Enter patient ID: " << endl;
cin >> searchID;

int left = 0;
int right = total - 1;
int mid;

while(left <= right){
mid = (left+right)/2;


if (patients[mid].id ==searchID){

found = true;
cout << " Patient Found " << endl;
cout << " Name: " << patients[mid].name << endl;
cout << " Age: " << patients[mid].age << endl;
cout << " Diagnosis: " << patients[mid].diagnosis << endl;
break;


}
else if (patients[mid].id <searchID){

left = mid + 1;

}
else{

right = mid -1;

}

}

if(found==false){

cout << " Patient NOT found " << endl;

}

}

void UpdatePatient(){

int searchID;

cout << " Enter ID update: " << endl;
cin>> searchID;


for (int i = 0; i < total; i++){

if(patients[i].id==searchID){

   cout << " New diagnosis: " << endl;
   cin >> patients[i].diagnosis;
   cout << " Patient update! " << endl;
   break;


}

}

}

void StorePatient(){
ofstream file (" patients.txt ");

for (int i = 0; i < total; i++)
{
   file << patients[i].id << patients[i].name << endl;

}

file.close();

}

void ExitSystem(){

cout << " Bye " << endl;

}


int main(){

int option;

while(option!=6){
showmenu();
cout << " Enter an option: " << endl;
cin>> option;

switch (option){

case 1:
AddPatient(); 
break;

case 2:
DisplayPatient(); 
break;

case 3:
SearchPatient();
break;

case 4:
UpdatePatient();
break;

case 5:
StorePatient();
break;

case 6:
ExitSystem();
break;

default:
 break;
}

}


return 0;    
}
