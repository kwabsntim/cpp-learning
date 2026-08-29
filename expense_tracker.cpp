//this is a personal expense tracker program 

#include <iostream>
#include <vector>
using namespace std;
//declaring a struct to hold the expense data 
struct expense {
    string expense_name;
    double expense_amount;
    string expense_date;

};

//function for adding an expense
void add_expense(vector<expense>& expenses_list) {
    //reference the struct
    expense newExpense;
    cout<<"Enter the name of the expense:";
    cin>>newExpense.expense_name;
    cout<<"Enter the amount of the expense (GHc):";
    cin>>newExpense.expense_amount;
    cout<<"Enter the date of the expense (format: YYYY-MM-DD):";
    cin>>newExpense.expense_date;
    // to save the expense to the vector 
    expenses_list.push_back(newExpense);
}
void view_expenses(const vector<expense>& expenses_list){
    //this is to view the expenses that i have added 
    expense newExpense;
    cout<<"viewing expenses"<<endl;
    cout<<"Enter the name of the expense to view:";
    cin>>newExpense.expense_name;
    bool found = false;
    for (const auto& expense: expenses_list){
        if (expense.expense_name == newExpense.expense_name) {
            cout<<"Expense found below!"<<endl;
            cout<<"========================"<<endl;
            cout<<"Expense Name: "<<expense.expense_name<<endl;
            cout<<"Expense Amount: "<<expense.expense_amount<<endl;
            cout<<"Expense Date: "<<expense.expense_date<<endl;
            cout<<"========================"<<endl;
            cout<<"\n"<<endl;
            found= true;

        }
    }
    if(!found){
        cout<<"Expense not found"<<endl;
        cout<<"\n"<<endl;
    }
   
}
void delete_expense(vector<expense>& expenses_list){
    //this is to delete an expense that i have added 

    if(expenses_list.empty()){
        cout<<"No expenses to delete"<<endl;
        return;
    }
    string expense_name;
    cout<<"Enter your expense name to delete";
    cin>>expense_name;
    bool found = false;

    // Scan through our records manually
    for (size_t i = 0; i < expenses_list.size(); i++) {
        if (expenses_list[i].expense_name == expense_name) {
            // Cut this item out of the vector line
            expenses_list.erase(expenses_list.begin() + i);
            found = true;
            cout << " Expense '" << expense_name << "' deleted successfully!\n";
            i--; // Move step back so we don't skip the next item shifting forward
        }
    }

    if (!found) {
        cout << "Expense name not found.\n";
    }
}

int main(){
    //creating the vector file to hold all the expenses
     vector<expense> expenses_list;
    //for the the menu to show again use the do loop
    do{
    cout<<"\n"<<endl; 
    cout<<"This is a personal expense tracker program"<<endl;
    cout<<"============================================="<<endl;
    cout<<"Select an option from the menu below:"<<endl;
    cout<<"1.Add an expense"<<endl;
    cout<<"2.View expenses"<<endl;
    cout<<"3.Delete an expense"<<endl;
    cout<<"4.Exit program"<<endl;
    cout<<"Enter your choice:";
    int choice;
    cin>>choice;
    
    switch (choice)
    {
    case 1:
        add_expense(expenses_list);
        break;
    case 2:
        view_expenses(expenses_list);
        break;
    case 3:
        delete_expense(expenses_list);
        break;
    case 4:
    // this exits the program
        cout<<"Exiting the program.Goodbye!"<<endl;
        return 0;
    default:
        cout<<"Invalid choice. Please try again."<<endl;
        break;
    }
    }while(true);

    return 0;
}
