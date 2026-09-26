#include<iostream>
using namespace std;

//this is a simple program to manage ingredients in a recipe. 
int main(){
  float serving_size;
 //default ingredients for pancakes and amounts for one serving 
  float flour=0.5;
  float sugar=1;
  float milk=2;
  int eggs=1;
  

  cout<<"This is a simple program to calculate ingredients for pancakes"<<endl;
  cout<<"============================================================="<<endl;
  cout<<"Enter the serving size (number of pancakes):"<<endl;
  cin>>serving_size;
  if (serving_size==0 || serving_size<=0){
    cout<<"You have entered 0 serving size. Please enter a valid serving size greater than 0."<<endl;
    return 1;
}
  else{
     cout<<"you have entered "<<serving_size<<" serving size"<<endl;
  //output of the ingredients for pancakes based on the serving size
  cout<<"The ingredients for pancakes are:"<<endl;
  cout<<"flour: "<<flour*serving_size<<" cups"<<endl;
  cout<<"sugar: "<<sugar*serving_size<<" tablespoons"<<endl;
  cout<<"milk: "<<milk*serving_size<<" cups"<<endl;
  cout<<"eggs: "<<eggs*serving_size<<" units"<<endl;
  }
 

}