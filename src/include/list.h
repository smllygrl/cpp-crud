// .h is a header file
// definitions go in here

#include <iostream>
#include <vector>
using namespace std;

// private, protected, public = access specifiers
class List
{
    // private means only members of the class can access the private items
private:
    // protected means only members of the class, and those that inherit the class (polymorhpism) can access the protected items
protected:
    // public means members of any class can access items
public:
    List()
    {
        // constructor
    }
    ~List()
    {
        // destrcutor
    }

    // All the users in all the lists
    vector<vector<string>> mainList;
    // 1 user 1 list
    vector<string> list;
    string name;
    int currentUserIndex;

    void print_menu();
    void print_list();
    void add_item();
    void delete_item();
    bool find_userList();
    void save_list();
};