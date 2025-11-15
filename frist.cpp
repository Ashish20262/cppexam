#include <iostream>
using namespace std;


class Movie {
public:
    string title;
    string genre;
    int releasedYear;
};

class BankAccount {
private:
    int accountNumber;
    double balance;
    string ownerName;

public:
    void setAccountNumber(int accNo) {
        accountNumber = accNo;
    }
    void setBalance(double bal) {
        balance = bal;
    }
    void setOwnerName(string name) {
        ownerName = name;
    }
    int getAccountNumber() {
        return accountNumber;
    }
    double getBalance() {
        return balance;
    }
    string getOwnerName() {
        return ownerName;
    }
};

int main() {

    Movie movies[3];

    movies[0].title = "Inception";
    movies[0].genre = "Sci-Fi";
    movies[0].releasedYear = 2010;

    movies[1].title = "Interstellar";
    movies[1].genre = "Adventure";
    movies[1].releasedYear = 2014;

    movies[2].title = "The Dark Knight";
    movies[2].genre = "Action";
    movies[2].releasedYear = 2008;


    for(int i = 0; i < 3; i++) {
        cout << "Title: " << movies[i].title << endl;
        cout << "Genre: " << movies[i].genre << endl;
        cout << "Year: " << movies[i].releasedYear << endl;
    }
    BankAccount acc;
    acc.setAccountNumber(12345);
    acc.setBalance(5000.50);
    acc.setOwnerName("Ashish");

    cout << "Account Number: " << acc.getAccountNumber() << endl;
    cout << "Owner Name    : " << acc.getOwnerName() << endl;
    cout << "Balance       : " << acc.getBalance() << endl;

    return 0;
}
