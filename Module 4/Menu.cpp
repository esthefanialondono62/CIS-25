
#include <iostream>
using namespace std;

int main(){

  double option = 0;
   
    cout << " Welcome to Esthefania's Menu! " << '\n';

    cout << " Enter the number of food: " << endl;
    cin >> option;

    if (option == 1){

        cout << " Breakfast: Baguel, Eggs and Coffee " << endl;

    }else if (option == 2){

        cout << " Lunch: Sushi Rolls " << endl;

    }else if (option == 3){

        cout << " Dinner: Mac and cheese " << endl;

    }else{

        cout << " The number does not exist in my menu! "  << endl;
    
    }
    
    return 0;        
}
