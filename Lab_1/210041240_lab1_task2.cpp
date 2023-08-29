#include <iostream>
#include <string>
using namespace std;


class Book {
private:
    string book_title;
    string author_name;
    int publicationYear;
    bool available;

public:
    void setDetails(string title, string author, int year) {
        book_title = title;
        author_name = author;
        publicationYear = year;
        available = true;
    }

    void checkOut() {
        if (available) {
            available = false;
            cout << "Book " << book_title << " "<<"has been checked out"<<endl;
        } else {
            cout << "Book " << book_title << " "<<" is already checked out"<<endl;
        }
    }

    void checkIn() {
        if (!available) {
            available = true;
            cout << "Book " << book_title << " "<<" has been checked in"<<endl;
        } else {
            cout << "Book " << book_title << " "<<" is already checked in.\n";
        }
    }

    void displayStatus() {
        cout << "Title: " << book_title << endl;
        cout << "Author: " << author_name <<endl;
        cout << "Publication Year: " << publicationYear << endl;
        cout << "Availability: " << available  << endl;
    }

    bool isClassic() {
        
        return (2023 - publicationYear) >= 50;
    }
};

int main() {
    Book book1;
    book1.setDetails("Getanjali", "Rabindranath Tagore", 1910);
    book1.displayStatus();
    book1.checkOut();
    book1.displayStatus();
    book1.checkIn();
    book1.displayStatus();

    if (book1.isClassic()) {
        cout << "This book is a classic"<<endl;
    } else {
        cout << "This book is not a classic"<<endl;
    }

    return 0;
}

