//
//  main.cpp
//  Rock-paper-scissors
//
//  Created by Akhil Venkat on 11/4/23.
//

#include <iostream>
#include <unistd.h>
#include <random>
using namespace std;

int main() {
   
// Variables
    string space = "-------------------------------------------------------";
    string small_space = "--------------------------------";
    string response;
    string result;
    

    
    
    cout << "Welcome to Rock Paper Scissors!" << endl << endl;

    
  
    // Generating random value
    string choice[3] = {"Rock","Paper","Scissors"};
   
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dist(0,2);
    int num = dist(gen);
    
    
 //   cout << choice[num] << endl; // Debug
    
    
    cout << "Enter your choice (R/P/S): ";
    cin >> response;
    
    
    cout << endl << small_space << endl;
    cout << "Your choice: " << response << endl;
    cout << "Computer's choice: " << choice[num] << endl;
    cout << small_space << endl;
    
    
    
    
    // If user won
    if(num == 0 && (response == "Paper" || response == "paper" || response == "P" || response == "p")){
            result = "You won! \n";
            result = "You won! \n";
        
    }

    else if(num == 1 && (response == "Scissors" || response == "scissors" || response == "S" || response == "s")){
        result = "You won! \n";
        
    }
   else if(num == 2 && (response == "Rock" || response == "rock" || response == "R" || response == "r")){
        result = "You won! \n";
       
    }
    
    
    // if its a tie
   else if(num == 0 && (response == "Rock" || response == "rock" || response == "R" || response == "r")){
       result =  "Tie! \n";
   }
       
else if(num == 1 && (response == "Paper" || response == "paper" || response == "P" || response == "p")){
           result =  "Tie! \n";
}
       
else if(num == 2 && (response == "Scissors" || response == "scissors" || response == "S" || response == "s")){
        result =  "Tie! \n";
}
    
    
   // if user lost
else{
    result = "You lost! \n";
}
   
    
    cout << result;
    cout << small_space << endl << endl << endl;
    sleep(1);
    main();
    
 
    return 0;
}



