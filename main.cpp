#include <iostream>
using namespace std;

// starts with return value
void print_menu(string name);

// args[0] is the name of the program (SimpleList)
int main(int arg_count, char *args[])
{
    cout << "Morning fakas" << endl;

    if (arg_count > 1)
    {
        string name(args[1]);
        print_menu(name);
    }
    else
    {
        cout << "Username not supplied... exiting program" << endl;
    }

    return 0;
}

void print_menu(string name)
{
    int choice;

    cout << "******************\n";
    cout << " 1 - Print List \n";
    cout << " 2 - Add to List\n";
    cout << " 3 - Delete from List\n";
    cout << " 4 - Quit\n";
    cout << " Enter your choice and press enter: ";

    // cin takes user input
    cin >> choice;

    // equivalence is ==
    // assignment is =
    if (choice == 4)
    {
        exit(0);
    }
    else
    {
        cout << "Sorry choice not implemented yet";
    }
}