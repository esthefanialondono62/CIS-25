#include <iostream>
#include <string>
using namespace std;

void menu(string menu){

    cout << " Menu : " << menu << endl;
   
}

int main(){

    int option = 3;

    cout << " Welcome for the Menu of today! " << endl;


    menu(" hot dog  ");
    
    menu("chicken wings ");
    
    menu(" Fried fish  ");

    cout << " Choose an option: " << endl;
    cin>> option;

    switch (option)
    {
        case 1 :
        cout << " hot dog  ";
    break;

        case 2 :
        cout << " Chicken wings ";
    break;

        case 3 :
        cout << " Fried fish ";
    break;

    default:
        break;
    }
        

return 0;    
}
