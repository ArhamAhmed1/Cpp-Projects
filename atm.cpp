#include<iostream>

using namespace std;

int option;
float balance = 30000;
float deposit;
float withdraw;

void menu()    //DISPLAYS MENU
{
    cout<<"*********MENU*********"<<endl;
    cout<<"1. Check Balance"<<endl;
    cout<<"2. Deposit"<<endl;
    cout<<"3. Withdraw"<<endl;
    cout<<"4. Exit"<<endl;
    cout<<"**********************"<<endl;
}

void checkBal()    //FUNCTION TO CHECK BALANCE
{
    cout<<"Your balance is: Rs "<<balance<<endl;
    cout<<""<<endl;
}

int depositAmount()   //FUNCTION TO DEPOSIT AMOUNT
{
    cout<<"Enter the amount you want to deposit: ";
    cin>>deposit;
    balance = balance + deposit;
    cout<<"Your amount is depositted succesfully!"<<endl;
    cout<<"Your avaialable balance now is: Rs "<<balance<<endl;
    cout<<""<<endl;
    return balance;
}

int withdrawAmount()   //FUNCTION TO WITHDRAW AMOUNT
{
    cout<<"Enter amount to withdraw: ";
    cin>>withdraw;
    if (withdraw > balance)
    {
        cout<<""<<endl;
        cout<<"Transaction Failed!"<<endl;
        cout<<"Not Enough Funds!"<<endl;
        cout<<""<<endl;
    }
    else
    {
        balance = balance - withdraw;
        cout<<"Your available balance now is: Rs "<<balance<<endl;
        cout<<""<<endl;
    }
    return balance;
}

int main()
{
    do                  
    {
    menu();
    cout<<"Choose your Option: ";
    cin>>option;
    cout<<""<<endl;
    if (option == 1)
    {
        checkBal();
    }
    else if (option == 2)
    {
        depositAmount();
    }
    else if (option == 3)
    {
        withdrawAmount();
    }
    else if (option == 4)
    {
        cout<<"Bye Bye :)"<<endl;
        cout<<""<<endl;
        
    }
    } while (option != 4);
    
    return 0;
}