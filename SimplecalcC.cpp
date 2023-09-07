//
//  main.cpp
// Simple  Calculator
//
//  Created by Akhil Venkat on 6/5/23.
//

#include <iostream>
#include <unistd.h>
using namespace std;
int main();

/*      Variables       */
float num1;
float num2;
float num3;
float num4;
string operation;
string small_line = "-----------------------";

/*     #####################################################################     */

/*      Functions       */

// Resatring
void restart(){
    cout << "Restarting";
    sleep(1);
    cout << '.';
    sleep(1);
    cout << '.';
    sleep(1);
    cout << '.' << endl << endl;
    main();
}



// Addition
void addition(float num1, float num2){
    
    float result = num1 + num2;
    cout <<  " = " << result << endl << endl;
}
// Subtraction
void subtraction(float num1, float num2){
    
    float result = num1 - num2;
    cout << " = " << result << endl << endl;
}
// multiplication
void multiplication(float num1, float num2){
    
    float result = num1 * num2;
    cout << " = " << result << endl << endl;
}
// division
void division(float num1, float num2){
    
    float result = num1 / num2;
    cout << " = " << result << endl << endl;
}
// Powers
void power(float num1, float num2){
    
    float result = pow(num1,num2);
    cout << " = " << result << endl << endl;
}
// root
void root(float num1, float num2){
    
    float result = pow(num1,1/num2);
    cout << " = " << result << endl << endl;
}
// factorial
void factorial(float num1){
    float result = 1;
    for(int i = 1; i <= num1; i++){
        result = result * i;
    }
    cout << " = " << result << endl << endl;
}

// in to cm
void in_cm(float num1){
    float result = num1 * 2.54;
    cout << " = " << result << " cm"<< endl << " = " << result/100 << " m" << endl << endl;
}

// cm to in
void cm_in(float num1){
    float result = num1 / 2.54;
    cout << " = " << result << " in"<< endl << endl;
}

// m to in
void m_in(float num1){
    float result = num1 * 39.37;
    cout << " = " << result << " in" << endl << " = " << num1*3.281 << " ft" << endl << endl;
}

// c to f
void c_f(float num1){
    float result = (num1 * 9/5) + 32;
    cout << " = " << result << "ºF" << endl << endl;
}

// f to c
void f_c(float num1){
    float result = (num1 - 32) * 5/9;
    cout << " = " << result << "ºC" << endl << endl;
}

// gal to l
void g_l(float num1){
    float result = num1 * 3.785;
    cout << " = " << result << " litres" << endl << endl;
}

// l to gal
void l_g(float num1){
    float result = num1/3.785;
    cout << " = " << result << " gallons" << endl << endl;
}


// trignometry

/* void trigg( float num1){
    float resultsin = sin(num2);
    float resultcos = cos(num2);
    float resulttan = tan(num2);
    float resultcosec = 1/sin(num2);
    float resultsec = 1/cos(num2);
    float resultcot = 1/tan(num2);
    
    cout << endl;
    cout << "Sin " << num1 << " = " << resultsin << endl;
    cout << "Cos " << num1 << " = " << resultcos << endl;
    cout << "Tan " << num1 << " = " <<resulttan << endl;
    cout << "Cosec " << num1 << " = " << resultcosec << endl;
    cout << "Sec " << num1 << " = " << resultsec << endl;
    cout << "Cot " << num1 << " = " << resultcot << endl;
}

void trig(float num1){
    string choice;
    cout << endl << "1)  Radians" << endl << "2)  Degrees" << endl;
    cin >> choice;
    
    if(choice == "1" || choice == "rad"){
        trigg(num1);
    }
  else if(choice == "2" || choice == "deg"){
      num2 = num1 * 3.14/180;
        trigg(num2);
    }
    
}
*/

/*     #####################################################################     */

/*      Funtional Functions     */

// Simplecalc
void simplecalc() {
    cout << "SimpleCalc" << endl << endl;
   
    cin >> num1 >> operation >> num2;

    if (operation == "+"){
        addition(num1,num2);
    }
    else if (operation == "-"){
        subtraction(num1,num2);
    }
    else if (operation == "*"){
        multiplication(num1,num2);
    }
    else if (operation == "/"){
        division(num1,num2);
    }
    else if (operation == "^"){
        power(num1,num2);
    }
    else if (operation == "&"){
        root(num1,num2);
    }
    else if (operation == "!"){
        factorial(num1);
    }
   /* else if (operation == "trig"){
        trig(num1);
    }
    */

/*      -----------------------------------------------      */
    
    else{
        cout << "Please choose a valid operation!" << endl;
        restart();
        
    }
}

/*     #####################################################################     */

// Converter
void convcalc(){
    cout << "ConvCalc" << endl << endl;
    cin >> num1 >> operation;
    
     if (operation == "in"){
        in_cm(num1);
    }
    else if(operation == "cm"){
        cm_in(num1);
    }
    else if(operation == "m"){
        m_in(num1);
    }
    else if(operation == "c"){
        c_f(num1);
    }
    else if(operation == "f"){
        f_c(num1);
    }
    else if(operation == "gal"){
        g_l(num1);
    }
    else if(operation == "l" || operation == "liter" || operation == "litre"){
        l_g(num1);
    }
    
}





int main() {
    string choice;
    cout << "Available programs" << endl << endl;
    cout << "1)" << "SimpleCalc" << endl;
    cout << "2)" << "ConvCalc" << endl << endl;
    cout << "Choice: ";
    cin >> choice;
    cout << endl;
    if(choice == "1" || choice == "S" || choice == "s"){
        simplecalc();
    }
    else if(choice == "2" || choice == "C" || choice == "c"){
        convcalc();
    }

    
    
    
  
}
