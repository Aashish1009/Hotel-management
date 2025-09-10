#include <iostream>
#include <stdlib.h>  // for exit()
using namespace std;

int main() {
    int quant;   // to take quantity input
    int choice;  // menu choice

    // Quantity variables
    int Qrooms=0, Qpasta=0, Qburger=0, Qnoodles=0, Qshake=0, Qchicken=0;
    // Sold items
    int Srooms=0, Spasta=0, Sburger=0, Snoodles=0, Sshake=0, Schicken=0;
    // Total price
    int Total_rooms=0, Total_pasta=0, Total_burger=0, Total_noodles=0, Total_shake=0, Total_chicken=0;

    // Take initial stock
    cout << "\n\t Quantity of items we have";
    cout << "\n Rooms available: "; cin >> Qrooms;
    cout << "\n Quantity of pasta: "; cin >> Qpasta;
    cout << "\n Quantity of burger: "; cin >> Qburger;
    cout << "\n Quantity of noodles: "; cin >> Qnoodles;
    cout << "\n Quantity of shake: "; cin >> Qshake;
    cout << "\n Quantity of chicken-roll: "; cin >> Qchicken;

m:  // menu label
    cout << "\n\t\t Please select from the menu options ";
    cout << "\n 1) Rooms";
    cout << "\n 2) Pasta";
    cout << "\n 3) Burger";
    cout << "\n 4) Noodles";
    cout << "\n 5) Shake";
    cout << "\n 6) Chicken-roll";
    cout << "\n 7) Information regarding sales and collection";
    cout << "\n 8) Exit";

    cout << "\n\n Please enter your choice: ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "\n\n Enter the number of rooms you want: ";
            cin >> quant;
            if(Qrooms - Srooms >= quant) {
                Srooms += quant;
                Total_rooms += quant * 1200;
                cout << "\n\n\t" << quant << " room/rooms have been allotted to you.";
            } else {
                cout << "\n\tOnly " << Qrooms - Srooms << " rooms remaining in hotel.";
            }
            break;

        case 2:
            cout << "\n\n Enter Pasta quantity: ";
            cin >> quant;
            if(Qpasta - Spasta >= quant) {
                Spasta += quant;
                Total_pasta += quant * 250;
                cout << "\n\n\t" << quant << " Pasta is the order.";
            } else {
                cout << "\n\tOnly " << Qpasta - Spasta << " pasta remaining in hotel.";
            }
            break;

        case 3:
            cout << "\n\n Enter Burger quantity: ";
            cin >> quant;
            if(Qburger - Sburger >= quant) {
                Sburger += quant;
                Total_burger += quant * 120;
                cout << "\n\n\t" << quant << " Burger is the order.";
            } else {
                cout << "\n\tOnly " << Qburger - Sburger << " burgers remaining in hotel.";
            }
            break;

        case 4:
            cout << "\n\n Enter Noodles quantity: ";
            cin >> quant;
            if(Qnoodles - Snoodles >= quant) {
                Snoodles += quant;
                Total_noodles += quant * 140;
                cout << "\n\n\t" << quant << " Noodles is the order.";
            } else {
                cout << "\n\tOnly " << Qnoodles - Snoodles << " noodles remaining in hotel.";
            }
            break;

        case 5:
            cout << "\n\n Enter Shakes quantity: ";
            cin >> quant;
            if(Qshake - Sshake >= quant) {
                Sshake += quant;
                Total_shake += quant * 120;
                cout << "\n\n\t" << quant << " Shakes is the order.";
            } else {
                cout << "\n\tOnly " << Qshake - Sshake << " shakes remaining in hotel.";
            }
            break;

        case 6:
            cout << "\n\n Enter Chicken-roll quantity: ";
            cin >> quant;
            if(Qchicken - Schicken >= quant) {
                Schicken += quant;
                Total_chicken += quant * 150;
                cout << "\n\n\t" << quant << " Chicken-roll is the order.";
            } else {
                cout << "\n\tOnly " << Qchicken - Schicken << " chicken-rolls remaining in hotel.";
            }
            break;

        case 7:
            cout << "\n\t\tDetails of sales and collection";
            cout << "\n\n Number of rooms we had: " << Qrooms;
            cout << "\n Number of rooms rented: " << Srooms;
            cout << "\n Remaining rooms: " << Qrooms - Srooms;
            cout << "\n Total rooms collection: " << Total_rooms;

            cout << "\n\n Number of pasta we had: " << Qpasta;
            cout << "\n Number of pasta sold: " << Spasta;
            cout << "\n Remaining pasta: " << Qpasta - Spasta;
            cout << "\n Total pasta collection: " << Total_pasta;

            cout << "\n\n Number of burgers we had: " << Qburger;
            cout << "\n Number of burgers sold: " << Sburger;
            cout << "\n Remaining burgers: " << Qburger - Sburger;
            cout << "\n Total burger collection: " << Total_burger;

            cout << "\n\n Number of noodles we had: " << Qnoodles;
            cout << "\n Number of noodles sold: " << Snoodles;
            cout << "\n Remaining noodles: " << Qnoodles - Snoodles;
            cout << "\n Total noodles collection: " << Total_noodles;

            cout << "\n\n Number of shakes we had: " << Qshake;
            cout << "\n Number of shakes sold: " << Sshake;
            cout << "\n Remaining shakes: " << Qshake - Sshake;
            cout << "\n Total shakes collection: " << Total_shake;

            cout << "\n\n Number of chicken-rolls we had: " << Qchicken;
            cout << "\n Number of chicken-rolls sold: " << Schicken;
            cout << "\n Remaining chicken-rolls: " << Qchicken - Schicken;
            cout << "\n Total chicken-roll collection: " << Total_chicken;

            cout << "\n\n Total Collection for the day: "
                 << Total_rooms + Total_pasta + Total_burger + Total_noodles + Total_shake + Total_chicken;
            break;

        case 8:
            exit(0);

        default:
            cout << "\n Please select numbers mentioned above!";
    }

    goto m;  // return back to menu

    return 0;
}
