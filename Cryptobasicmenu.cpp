#include <iostream>
using namespace std; 

int main(){
    while(true){
        cout <<"1: Print Help" << endl;
        cout <<"2: Print Exhange stats" << endl;
        cout <<"3: Make an offer" << endl;
        cout <<"4: Make a bid" << endl;
        cout <<"5: Print Wallet " << endl;
        cout <<"6: Continue " << endl;
        cout <<"7: Quit " << endl;
        int userOption;
        cout <<"====================" << endl;
        cout <<"Type 1-6 to choose " << endl;
        cout <<"====================" << endl;
        cin >> userOption;
        cout <<"You chose " << userOption  << endl;          
        if(userOption == 0){
            cout<< "Invalid Choice. Type 1-6" << endl;
        }
        if(userOption == 1){
            cout<< "Our aim is to make money analyze the market.make bids and offers" << endl;
        }
        if(userOption == 2){
            cout<< "Market Exchange is Good. Business is being done" << endl;
        }
        if(userOption == 3){
            cout<< "Making an offer -type the ammount" << endl;
        }
        if(userOption == 4){
            cout<< "Making a Bid -Type the ammount" << endl;
        }
        if(userOption == 5){
            cout<< "Your wallet is empty" << endl;
        }
        if(userOption == 6){
            cout<< "Entering in next time frame" << endl;
        }
        if(userOption == 7){
            cout<< "Exiting " << endl;
            break;
        }
    }
    
    return 0;
}