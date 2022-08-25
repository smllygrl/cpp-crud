#include "include/list.h"

// Define the definition with the Classname::function_name()
void List::print_menu()
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
    else if (choice == 3)
    {
        delete_item();
    }
    else if (choice == 2)
    {
        add_item();
    }
    else if (choice == 1)
    {
        print_list();
    }
    else
    {
        cout << "Sorry choice: " << choice << " not implemented yet";
    }
}

void List::add_item()
{
    cout << "\n\n\n";
    cout << "*** Add Item ***\n";
    cout << "Type in an item and press enter: ";

    string item;
    cin >> item;
    // places item in last index of vector 
    list.push_back(item);

    cout << "Success! Item added to list!\n\n\n";
    cin.clear();

    print_menu();
}

void List::delete_item()
{
    cout << "*** Delete Item***\n";
    cout << "Select an item index number to delete\n";
    if (list.size())
    {
        // casting list size as an int to avoid errors
        for (int i = 0; i < (int)list.size(); i++)
        {
            cout << i << ":" << list[i] << "\n";
        }
        int choiceNum;
        cin >> choiceNum;
        // list.begin returns where the list exists
        // choiceNum indicates what element of list to delete
        list.erase(list.begin()+choiceNum);
    }
    else
    {
        cout << "No items to delete.\n";
    }

    print_menu();
}

void List::print_list()
{
    cout << "\n\n\n";
    cout << "*** Printing List ***\n";

    if (list.size())
    {
        for (int list_index = 0; list_index < (int)list.size(); list_index++)
        {
            cout << "- " << list[list_index] << "\n";
        }

    }
    else
    {
        cout << "No items to list.\n";
    }

     cout << "M - Menu\n";
        char choice;
        cin >> choice;

        if (choice == 'M' || choice == 'm')
        {
            print_menu();
        }
}