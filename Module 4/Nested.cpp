#include <iostream>
using namespace std;

int main(){

    float  num1,num2,num3;

    cout << " Enter three numbers: " ;
    cin >> num1;
    cin >> num2;
    cin >> num3;
    
    if (num1 >= num2){

        if(num1 >= num3){
    
        cout << " Largest number: " << num1;
    
        }

        else{
    
        cout << " Largest number: " << num3;
    
        }
    }

    else {

        if(num2 >= num3){

        cout << " Largest number: " << num2;

        }

        else{

        cout << " Largest number: " << num3;

        }


    }
    


return 0;    
}
