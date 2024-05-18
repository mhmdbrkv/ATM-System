#include <iostream>
using namespace std;

void Menu() {

    cout << "************ Menu ************" << endl;
    cout << "* 1. Check Balance.          *" << endl;
    cout << "* 2. Deposit.                *" << endl;
    cout << "* 3. Withdraw.               *" << endl;
    cout << "* 4. Exit.                   *" << endl;
    cout << "******************************" << endl;


}


int main()
{
    
    int choice;
    double balance = 0, deposit = 0, withdraw = 0;
    
    
    Menu();
    do {
       
        cout << "Choose your choice\n";
        cin >> choice;

        switch (choice) {
        case 1: cout << "Balance is: " << balance << endl;
            break;
        case 2: cout << "Enter your deposit: " << endl;
            cin >> deposit;
            balance += deposit;
            break;
        case 3: cout << "Enter your Withdraw : " << endl;
            cin >> withdraw;
            if (withdraw <= balance)
            {
                balance -= withdraw;
            }
            
            break;

        }
        
    } while (choice != 4);
    system("cls");


    
    return 0;
}
