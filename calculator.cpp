#include <iostream>
using namespace std;

int main(){
    int num1,num2;


    cout<<"This is a simple calculator program"<<endl;
    cout<<"==================================="<<endl;
    //menu of the program
    cout<<"1.addition"<<endl;
    cout<<"2.subtraction"<<endl;
    cout<<"3.multiplication"<<endl;
    cout<<"4.division"<<endl;
    int choice;
    if (choice==1){
        cout<<"you have selected addition"<<endl;
        cout<<"Enter your first number:";
        cin>>num1;
        cout<<"Enter your second number:";
        cin>>num2;
        cout<<"The sum of the numbers is:"<<num1+num2<<endl;
    }
    if(choice==2){
        cout<<"You have selected substration"<<endl;
        cout<<"Enter your first number:";
        cin>>num1;
        cout<<"Enter your second number:";
        cin>>num2;
        cout<<"the difference of the two numbers is:"<<num1-num2<<endl;
    }
    if(choice==3){
        cout<<"You have selected multiplication"<<endl;
        cout<<"Enter your first number:";
        cin>>num1;
        cout<<"Enter your second number:";
        cin>>num2;
        cout<<"The product of the two numbers is:"<<num1*num2<<endl;
    }

    //menu
}