//
//  main.cpp
//  playground 5
//
//  Created by Akhil Venkat on 1/4/23.
//

#include <iostream>
#include <unistd.h> // sleep function
#include <random>
using namespace std;



int main() {
    string space = "-------------------------"; 
    int difficulty;
    cout << "Welcome to the number guessing game!" << endl;
    cout << "Please choose your difficulty." << endl;
    cout << space << endl;
    cout << "1) " << "Easy: (1-100)" << endl;
    cout << "2) " << "Medium: (1-500)" << endl;
    cout << "3) " << "Hard: (1-1000)" << endl;
    cout << "4) " << "Super Hard: (1-10000)" << endl;
    cout << space << endl;
    string codes[4] = {"akhil2006-1","akhil2006-2","akhil2006-3","akhil2006-4"};
    
    cout << "Difficulty: ";
    cin >> difficulty;
    
  
   
    
// easy difficulty
    
    if(difficulty == 1){
        // Generating a random number
        random_device rd;
        mt19937 gen(rd());
        uniform_int_distribution<int> dist(1,100);
        int num = dist(gen);
 // cout << num << endl; // debug
        
        int guess;
        int numguess = 9;
        bool haschance = true; // Add a boolean variable to track whether the user has a second chance
        cout << "Easy: (1-100)" << endl;
        cout << "I'm thinking of a number between 1 and 100. Can you guess what it is?" << endl << endl;
        
        do{
            cout << "Guesses left: " << numguess << endl << "Guess the number: ";
            cin >> guess;
            numguess = numguess - 1;
            cout << endl;
            if(guess > num){
                cout << "Too high, try again  " << endl;
            }
            else if (guess < num){
                cout << "Too low, try again  " << endl;
            }
            else if(guess == num){
                cout << "Correct guess!" << endl;
                cout << "Do you want to play again?(Y/N)  ";
                string res;
                cin >> res;
                if(res == "Y" ||res == "y" || res == "Yes" || res == "yes"){
                    cout << "Restarting..." << endl << endl << endl;
                    main();
                }
                else{
                    cout << "Thank You for playing." << endl << endl;
                }
            
            }
            // If user runs out of guesses
            if(numguess < 0 && haschance){
                haschance = false;
                cout << "Oops, you ran out of guesses!" << endl;
                cout << "Enter the code to get 5 more guesses: ";
                string code;
                cin >> code;
                if(code == codes[0]){
                    numguess = numguess + 5;
                    
                }
                else{
                    cout << "Incorrect code, restarting..." << endl << "The number was: " << num << endl << endl << endl;
                    main();
                }
            }
            else if(numguess < 0 && !haschance){
                cout << "Oops, you ran out of guesses!" << endl;
                cout << "The number was: " << num << endl;
                cout << "Restarting programme..." << endl << endl;
                usleep(50000);
                main();
            }
            
            // Hints
            if(num - guess <= 10 && num - guess > 0){
                cout << "*"<< endl;
            }
            if(guess - num <= 10 && guess - num > 0){
                cout << "*"<< endl;
            }
            if(num - guess <= 20 && num - guess > 10){
                cout << "**"<< endl;
            }
            if(guess - num <= 20 && guess - num > 10){
                cout << "**"<< endl;
            }
            if(num - guess <= 30 && num - guess > 20){
                cout << "***"<< endl;
            }
            if(guess - num <= 30 && guess - num > 20){
                cout << "***"<< endl;
            }
            if(guess < 1 || guess > 100){
                cout << "Only values between 1 and 100" << endl;
            }
            
        }while(guess != num && numguess >= 0 );
    }
    
  
    
    
// Medium Difficulty
    
    else if(difficulty == 2){
        // Generating a random number
        random_device rd;
        mt19937 gen(rd());
        uniform_int_distribution<int> dist(1,500);
        int num = dist(gen);
// cout << num << endl; // debug
        
        int guess;
        int numguess = 12;
        bool haschance = true; // Add a boolean variable to track whether the user has a second chance
        cout << "Medium: (1-500)" << endl;
        cout << "I'm thinking of a number between 1 and 500. Can you guess what it is?" << endl << endl;
        
        do{
            cout << "Guesses left: " << numguess << endl << "Guess the number: ";
            cin >> guess;
            numguess = numguess - 1;
            cout << endl;
            if(guess > num){
                cout << "Too high, try again  " << endl;
            }
            else if (guess < num){
                cout << "Too low, try again  " << endl;
            }
            else if(guess == num){
                cout << "Correct guess!" << endl;
                cout << "Do you want to play again?(Y/N)  ";
                string res;
                cin >> res;
                if(res == "Y" ||res == "y" || res == "Yes" || res == "yes"){
                    cout << "Restarting..." << endl << endl << endl;
                    main();
                }
                else{
                    cout << "Thank You for playing." << endl << endl;
                }
            }
            // If user runs out of guesses
            if(numguess < 0 && haschance){
                haschance = false;
                cout << "Oops, you ran out of guesses!" << endl;
                cout << "Enter the code to get 6 more guesses: ";
                string code;
                cin >> code;
                if(code == codes[1]){
                    numguess = numguess + 6;
                    
                }
                else{
                    cout << "Incorrect code, restarting..." << endl << "The number was: " << num << endl << endl << endl;
                    main();
                }
            }
            else if(numguess < 0 && !haschance){
                cout << "Oops, you ran out of guesses!" << endl;
                cout << "The number was: " << num << endl;
                cout << "Restarting programme..." << endl << endl;
                usleep(50000);
                main();
                
            }
            
            // Hints
            if(num - guess <= 10 && num - guess > 0){
                cout << "*"<< endl;
            }
            if(guess - num <= 10 && guess - num > 0){
                cout << "*"<< endl;
            }
            if(num - guess <= 20 && num - guess > 10){
                cout << "**"<< endl;
            }
            if(guess - num <= 20 && guess - num > 10){
                cout << "**"<< endl;
            }
            if(num - guess <= 30 && num - guess > 20){
                cout << "***"<< endl;
            }
            if(guess - num <= 30 && guess - num > 20){
                cout << "***"<< endl;
            }
            if(num - guess <= 40 && num - guess > 30){
                cout << "****"<< endl;
            }
            if(guess - num <= 40 && guess - num > 30){
                cout << "****"<< endl;
            }
            if(num - guess <= 50 && num - guess > 40){
                cout << "*****"<< endl;
            }
            if(guess - num <= 50 && guess - num > 40){
                cout << "*****"<< endl;
            }
            if(num - guess <= 60 && num - guess > 50){
                cout << "******"<< endl;
            }
            if(guess - num <= 60 && guess - num > 50){
                cout << "******"<< endl;
            }
            
            
            
            if(guess < 1 || guess > 500){
                cout << "Only values between 1 and 500" << endl;
            }
            
        }while(guess != num && numguess >= 0 );
    }
    
    
   
    
// Hard difficulty
    else if(difficulty == 3){
        // Generating a random number
        random_device rd;
        mt19937 gen(rd());
        uniform_int_distribution<int> dist(1,1000);
        int num = dist(gen);
// cout << num << endl; // debug
        
        int guess;
        int numguess = 14;
        bool haschance = true; // Add a boolean variable to track whether the user has a second chance
        cout << "Hard: (1-1000)" << endl;
        cout << "I'm thinking of a number between 1 and 1000. Can you guess what it is?" << endl << endl;
        
        do{
            cout << "Guesses left: " << numguess << endl << "Guess the number: ";
            cin >> guess;
            numguess = numguess - 1;
            cout << endl;
            if(guess > num){
                cout << "Too high, try again  " << endl;
            }
            else if (guess < num){
                cout << "Too low, try again  " << endl;
            }
            else if(guess == num){
                cout << "Correct guess!" << endl;
                cout << "Do you want to play again?(Y/N)  ";
                string res;
                cin >> res;
                if(res == "Y" ||res == "y" || res == "Yes" || res == "yes"){
                    cout << "Restarting..." << endl << endl << endl;
                    main();
                }
                else{
                    cout << "Thank You for playing." << endl << endl;
                }
            }
            // If user runs out of guesses
            if(numguess < 0 && haschance){
                haschance = false;
                cout << "Oops, you ran out of guesses!" << endl;
                cout << "Enter the code to get 7 more guesses: ";
                string code;
                cin >> code;
                if(code == codes[2]){
                    numguess = numguess + 7;
                    
                }
                else{
                    cout << "Incorrect code, restarting..." << endl << "The number was: " << num << endl << endl << endl;
                    main();
                }
            }
            else if(numguess < 0 && !haschance){
                cout << "Oops, you ran out of guesses!" << endl;
                cout << "The number was: " << num << endl;
                cout << "Restarting programme..." << endl << endl;
                usleep(50000);
                main();
            }
            
            // Hints
            if(num - guess <= 10 && num - guess > 0){
                cout << "*"<< endl;
            }
            if(guess - num <= 10 && guess - num > 0){
                cout << "*"<< endl;
            }
            if(num - guess <= 20 && num - guess > 10){
                cout << "**"<< endl;
            }
            if(guess - num <= 20 && guess - num > 10){
                cout << "**"<< endl;
            }
            if(num - guess <= 30 && num - guess > 20){
                cout << "***"<< endl;
            }
            if(guess - num <= 30 && guess - num > 20){
                cout << "***"<< endl;
            }
            if(num - guess <= 40 && num - guess > 30){
                cout << "****"<< endl;
            }
            if(guess - num <= 40 && guess - num > 30){
                cout << "****"<< endl;
            }
            if(num - guess <= 50 && num - guess > 40){
                cout << "*****"<< endl;
            }
            if(guess - num <= 50 && guess - num > 40){
                cout << "*****"<< endl;
            }
            if(num - guess <= 60 && num - guess > 50){
                cout << "******"<< endl;
            }
            if(guess - num <= 60 && guess - num > 50){
                cout << "******"<< endl;
            }
            if(num - guess <= 70 && num - guess > 60){
                cout << "*******"<< endl;
            }
            if(guess - num <= 70 && guess - num > 60){
                cout << "*******"<< endl;
            }
            if(num - guess <= 80 && num - guess > 70){
                cout << "********"<< endl;
            }
            if(guess - num <= 80 && guess - num > 70){
                cout << "********"<< endl;
            }
            if(num - guess <= 90 && num - guess > 80){
                cout << "*********"<< endl;
            }
            if(guess - num <= 90 && guess - num > 80){
                cout << "*********"<< endl;
            }
            if(num - guess <= 100 && num - guess > 90){
                cout << "#"<< endl;
            }
            if(guess - num <= 100 && guess - num > 90){
                cout << "#"<< endl;
            }
            
            
            if(guess < 1 || guess > 1000){
                cout << "Only values between 1 and 1000" << endl;
            }
            
        }while(guess != num && numguess >= 0 );
    }
    
    
    
    
    
    
    
//  Super Hard difficulty
        else if(difficulty == 4){
            // Generating a random number
            random_device rd;
            mt19937 gen(rd());
            uniform_int_distribution<int> dist(1,10000);
            int num = dist(gen);
// cout << num << endl; // debug
            
            int guess;
            int numguess = 16;
            bool haschance = true; // Add a boolean variable to track whether the user has a second chance
            cout << "Super Hard: (1-10000)" << endl;
            cout << "I'm thinking of a number between 1 and 10000. Can you guess what it is?" << endl << endl;
            
            do{
                cout << "Guesses left: " << numguess << endl << "Guess the number: ";
                cin >> guess;
                numguess = numguess - 1;
                cout << endl;
                if(guess > num){
                    cout << "Too high, try again  " << endl;
                }
                else if (guess < num){
                    cout << "Too low, try again  " << endl;
                }
                else if(guess == num){
                    cout << "Correct guess!" << endl;
                    cout << "Do you want to play again?(Y/N)  ";
                    string res;
                    cin >> res;
                    if(res == "Y" ||res == "y" || res == "Yes" || res == "yes"){
                        cout << "Restarting..." << endl << endl << endl;
                        main();
                    }
                    else{
                        cout << "Thank You for playing." << endl << endl;
                    }
                }
                // If user runs out of guesses
                if(numguess < 0 && haschance){
                    haschance = false;
                    cout << "Oops, you ran out of guesses!" << endl;
                    cout << "Enter the code to get 8 more guesses: ";
                    string code;
                    cin >> code;
                    if(code == codes[3]){
                        numguess = numguess + 8;
                        
                    }
                    else{
                        cout << "Incorrect code, restarting..." << endl << "The number was: " << num << endl << endl << endl;
                        main();
                    }
                }
                else if(numguess < 0 && !haschance){
                    cout << "Oops, you ran out of guesses!" << endl;
                    cout << "The number was: " << num << endl;
                    cout << "Restarting programme..." << endl << endl;
                    usleep(50000);
                    main();
                }
                
                // Hints
                if(num - guess <= 10 && num - guess > 0){
                    cout << "*"<< endl;
                }
                if(guess - num <= 10 && guess - num > 0){
                    cout << "*"<< endl;
                }
                if(num - guess <= 20 && num - guess > 10){
                    cout << "**"<< endl;
                }
                if(guess - num <= 20 && guess - num > 10){
                    cout << "**"<< endl;
                }
                if(num - guess <= 30 && num - guess > 20){
                    cout << "***"<< endl;
                }
                if(guess - num <= 30 && guess - num > 20){
                    cout << "***"<< endl;
                }
                if(num - guess <= 40 && num - guess > 30){
                    cout << "****"<< endl;
                }
                if(guess - num <= 40 && guess - num > 30){
                    cout << "****"<< endl;
                }
                if(num - guess <= 50 && num - guess > 40){
                    cout << "*****"<< endl;
                }
                if(guess - num <= 50 && guess - num > 40){
                    cout << "*****"<< endl;
                }
                if(num - guess <= 60 && num - guess > 50){
                    cout << "******"<< endl;
                }
                if(guess - num <= 60 && guess - num > 50){
                    cout << "******"<< endl;
                }
                if(num - guess <= 70 && num - guess > 60){
                    cout << "*******"<< endl;
                }
                if(guess - num <= 70 && guess - num > 60){
                    cout << "*******"<< endl;
                }
                if(num - guess <= 80 && num - guess > 70){
                    cout << "********"<< endl;
                }
                if(guess - num <= 80 && guess - num > 70){
                    cout << "********"<< endl;
                }
                if(num - guess <= 90 && num - guess > 80){
                    cout << "*********"<< endl;
                }
                if(guess - num <= 90 && guess - num > 80){
                    cout << "*********"<< endl;
                }
                if(num - guess <= 100 && num - guess > 90){
                    cout << "#"<< endl;
                }
                if(guess - num <= 100 && guess - num > 90){
                    cout << "#"<< endl;
                }
                if(num - guess <= 200 && num - guess > 100){
                    cout << "##"<< endl;
                }
                if(guess - num <= 200 && guess - num > 100){
                    cout << "##"<< endl;
                }
                if(num - guess <= 300 && num - guess > 200){
                    cout << "###"<< endl;
                }
                if(guess - num <= 300 && guess - num > 200){
                    cout << "###"<< endl;
                }
                if(num - guess <= 400 && num - guess > 300){
                    cout << "####"<< endl;
                }
                if(guess - num <= 400 && guess - num > 300){
                    cout << "####"<< endl;
                }
                if(num - guess <= 500 && num - guess > 400){
                    cout << "#####"<< endl;
                }
                if(guess - num <= 500 && guess - num > 400){
                    cout << "#####"<< endl;
                }
                
                
                if(guess < 1 || guess > 10000){
                    cout << "Only values between 1 and 10000" << endl;
                }
                
            }while(guess != num && numguess >= 0 );
        }
    
    
    
    
// help desk
        else if(difficulty == 505){
            cout << "Help desk coming soon." << endl;
            cout << "Restarting..." << endl << endl;
            main();
        }
    
    
    
    
    
    
    
    
    
    
        else{
            usleep(500000);
            cout << "More levels coming soon..." << endl;
            usleep(500000);
            cout << "Please choose a value between 1 - 4" << endl;
            cout << "Restarting programme..." << endl << endl << endl;
            usleep(500000);
            main();
        }
    
    
    
    
    
    
    
    return 0;
}
