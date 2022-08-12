// Book_Collection.cpp
// I apologize for not completing all the tasks assigned.

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

struct books
{
    char title[25];
    char author[25];
    char genre[25];
    int year;
    char publisher[25];
    int pages;
};

void ReadArray(books* csa, const int count);

int main(void)
{
    int recordcount = 0;

    books* book;

    cout << "Please enter the number of book records to keep track of: ";
    cin >> recordcount;

    book = new books[recordcount];

    ReadArray(book, recordcount);

    return 0;
}

void ReadArray(books* csa, const int count)
{
    int i, j, option;
    char exit;

    do
    {
        cout << "\n--Welcome to Your Book Collection--\n";
        cout << "Please input a number for corresponding action: \n 1 - Add a book \n 2 - Remove a book \n 3 - Access reports \n 4 - Exit \n";
        cin >> option;

        switch (option) {
        case 1:
            for (int i = 0; i < count; i++)
            {
                cout << "\n--Adding book--\n";
                cout << "Enter required book details: \n";
                cout << "-----------------------------\n";
                cout << "\nTitle : ";
                cin >> csa[i].title;

                cout << "\nAuthor : ";
                cin >> csa[i].author;

                cout << "\nGenre : ";
                cin >> csa[i].genre;

                cout << "\nYear : ";
                cin >> csa[i].year;

                cout << "\nPublisher : ";
                cin >> csa[i].publisher;

                cout << "\nPages : ";
                cin >> csa[i].pages;

                cout << "Book Added!\n";
            }
            break;
        case 3:
            cout << "=====================================================\n";
            cout << "Book Title \t|Author \t|Genre \t\t|Year \t\t|Publisher \t\t|Pages\n";
            cout << "=====================================================\n";

            for (j = 0; j < count; j++)
            {
                cout << "\n" << csa[j].title << "\t\t|" << csa[j].author << "\t\t|" << csa[j].genre << "\t\t|" << csa[j].year << "\t\t|" << csa[j].publisher << "\t\t|" << csa[j].pages << "\t\t|";
            }
            cout << "\n=================================================\n";
            break;
        default:
            cout << "\nLooking forward to the Weekend \n";
            break;
        }
        cout << "Return to menu? (y/n) \n";
        cin >> exit;
    }
    while (exit == 'y');
}