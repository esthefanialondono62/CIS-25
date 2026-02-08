#include <iostream>
using namespace std;

int main(){

// I organized the variables float one, two and three.

float  num1,num2,num3;

// I fixed " >> " adding doble at the other in between, only had " > " one.

cout << " Enter three numbers: " ;
cin >> num1;
cin >> num2 ;
cin >> num3;

// I fixed adding " { } " quotes after the parenthesis, so the IF statement can be into the block of code.

    if(num1 >= num2 && num1 >= num3){ // I fixed this line does not have one parenthesis at the end of the condition.

        cout << " largest number: " << num1;

    }

    if (num2 >= num1 && num2 >= num3){

        cout << " largest number: " << num2; // I fixed this line changing the logic operator equal eaqual to grater or equal to the number.

    }

    if(num3 >= num1 && num3 >= num2){

        cout << " largest number: " << num3; // This line does not have semicolon at the end on num2.Also I fixed this line changing the logic operator equal eaqual to grater or equal to the number.
  }

  
return 0;
}
