#include<iostream>
#include "C:\Users\Shreelekha\Desktop\FinalProject\booking.cpp"
using namespace std;

namespace welcome
{
    void hello()
    {
        cout<<"***********************************************************WELCOME TO AMITY HOTEL *****************************************************"<<endl;
    }
   inline void count()
    {
          cout<<"Number of customers :"<< Customer::objectCount<<endl;
    }
}
int Customer::objectCount = 0;
int main() {
    BookingSystem bookingSystem;
    welcome::hello();
    while (true) {
        try{
             cout << "1. Sign Up" << endl;
             cout << "2. Log In" << endl;
             cout << "3. Book a Room" << endl;
             cout << "4. Cancel Booking" << endl;
             cout << "5. Reschedule Booking" << endl;
             cout << "6. Display Rooms" << endl;
             cout << "7. Display Waiting List" << endl;
             cout << "8. Number of Customers" << endl;
             cout << "9.  Exit" << endl;
       
        int choice;
         cout << "Enter your choice: ";

        cin >> choice;
        if(cin.fail()){
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            throw runtime_error("Invalid input\n");
        }
        

        switch (choice) {
            case 1:
            system("cls");
                bookingSystem.signUp();
                break;
            case 2:
            system("cls");
                bookingSystem.logIn();
                break;
            case 3:
            system("cls");
                bookingSystem.bookRoom();
                break;
            case 4:
                bookingSystem.cancelBooking();
                break;
            case 5:
                bookingSystem.rescheduleBooking();
                break;
            case 6:
                bookingSystem.displayRooms();
                break;
            case 7:
                bookingSystem.displayWaitingList();
                break;
            case 8:
                welcome::count();
               
                 break;  
            case 9:
                 cout << "Hope You had Good Experience !\n Have a Good Day" << endl;
                return 0;
            
            default:
                 cout << "Invalid choice. Please try again." << endl;
                break;
        }

       
        }
        catch(...){
            cout<<"Enter a valid input:\n"<<endl;
        }
           cout << endl;
    }
       
    }
 
