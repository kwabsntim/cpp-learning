//this is a number guessing game built using cpp
#include<iostream>
#include<cstdlib>
#include<ctime>


using namespace std;

int main(){
    int attempts=0;
    srand(time(0));
    int secret_number=rand() % 100 + 1;
    int user_guess=0;
    int max_attempts=5;
    cout<<"Welcome to the Number Guessing Game!"<<endl;
    cout<<"I have selected a number between 1 and 100. You have "<<max_attempts<<" attempts to guess it."<<endl;
    do{
        cout<<"Enter your guess: ";
        cin>>user_guess;
        attempts++;
        if(user_guess==secret_number){
            if (attempts==1){
                cout<<"congrats you guessed the number on the first attempt"<<endl;
            }
            else if (attempts==2){
                cout<<"congrats you guessed the number on the second attempt"<<endl;
            }
            else if (attempts==3){
                cout<<"congrats you guessed the number on the third attempt"<<endl;
            }
            else if (attempts==4){
                cout<<"congrats you guessed the number on the fourth attempt"<<endl;
            }
            else if (attempts==5){
                cout<<"congrats you guessed the number on the fifth attempt"<<endl;
            }
        }
        else if (user_guess<secret_number){
            cout<<"Your guess is too low. Try again."<<endl;
        }
        else if (user_guess>secret_number){
            cout<<"Your guess is too high. Try again."<<endl;
        }
    }
    while(attempts<=max_attempts);

    if (attempts>=max_attempts){
        cout<<"Sorry, you have used all your attempts. The secret number was "<<secret_number<<endl;
    }

    return 0;
}