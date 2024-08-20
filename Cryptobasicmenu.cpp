#include <iostream>
using namespace std;

void printmenu() {
    cout << "1: Print Help" << endl;
    cout << "2: Print Exchange stats" << endl;
    cout << "3: Make an offer" << endl;
    cout << "4: Make a bid" << endl;
    cout << "5: Print Wallet" << endl;
    cout << "6: Continue" << endl;
    cout << "7: Exit" << endl;  // New option to exit the program
}

int getuseroption() {
    int userOption;
    cout << "====================" << endl;
    cout << "Type 1-7 to choose" << endl;  // Updated to include option 7
    cout << "====================" << endl;
    cin >> userOption;
    cout << "You chose " << userOption << endl;
    return userOption;
}
void errorexception(){
    cout << "Invalid Choice. Type 1-7" << endl;
}
void printhelp(){
    cout << "Our aim is to make money, analyze the market, make bids and offers" << endl;
}
void exchngstats(){
    cout << "Market Exchange is Good. Business is being done" << endl;
}
void offer(){
    cout << "Making an offer - Type the amount" << endl;
}
void Bidding(){
    cout << "Making a Bid - Type the amount" << endl;
}
void Walletstatus(){
    cout << "Your wallet is empty" << endl;
}
void gototimeframe(){
    cout << "Entering in next time frame" << endl;
}
void exitloop(){
 cout << "Exiting the program. Goodbye!" << endl;
        exit(0);  // Exit the program
}
void processUserOption(int userOption) {

    if (userOption == 0) {
        errorexception();
    } else if (userOption == 1) {
        printhelp();
    } else if (userOption == 2) {
       exchngstats();
    } else if (userOption == 3) {
        offer();
    } else if (userOption == 4) {
        Bidding();
    } else if (userOption == 5) {
       Walletstatus();
    } else if (userOption == 6) {
        gototimeframe();
    } else if (userOption == 7) {  // New condition to handle exiting
       exitloop();
    }
}

int main() {
    while (true) {
        printmenu();
        int userOption = getuseroption();
        processUserOption(userOption);
    }
    return 0;
}
