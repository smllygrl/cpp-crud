#include "include/list.h"
#include "include/database.h"
// args[0] is the name of the program (SimpleList)
int main(int arg_count, char *args[])
{
    List simpleList;
    Database data;

    if (arg_count > 1)
    {
        simpleList.name = string(args[1]);
        simpleList.mainList = data.read();
        simpleList.find_userList();
        simpleList.print_menu();
        data.write(simpleList.mainList);
    }
    else
    {
        cout << "Username not supplied... exiting program" << endl;
    }

    return 0;
}
