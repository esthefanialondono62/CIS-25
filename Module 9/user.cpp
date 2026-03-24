#include <iostream>
#include <string>
using namespace std;

class User {
protected:
string username;

public:
User(string name)
{
username = name;
}

virtual void accessLevel()
{
cout << "user base" << endl;
}

};

class Employee : public User 
{

public:
Employee(string name) :User(name)
{

}

void accessLevel() override
{
cout << " 1." << "name: " << username << endl;

cout << "type of user: Employee" << endl;

cout << "can: check" << endl;
}

};

class Manager : public User
{
public:
Manager(string name) : User(name) {
}

void accessLevel() override {
cout << " 2." << "name: " << username << endl;

cout << "type of user: Manager" << endl;

cout << "can: check and update" << endl;
}

};

class Admin : public User
{
public:
Admin(string name) : User(name)
{

}

void accessLevel() override {
cout << " 3." <<  "name: " << username << endl;
cout << "type of user: Admin" << endl;
cout << "can: add, update and delete" << endl;
}

};

int main() {

Employee emp("esthefania");
Manager mgr("albert");
Admin adm("sofia");

	cout << "users: " << endl;

	emp.accessLevel();
	cout << endl;

	mgr.accessLevel();
	cout << endl;

	adm.accessLevel();

	return 0;
}
