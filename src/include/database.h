
#include <iostream>
#include <vector>
// below is FILE stream
#include <fstream>

using namespace std;

class Database
{
private:
protected:
public:
    Database()
    {
    }
    ~Database()
    {
    }
    vector<vector<string>> mainList;
    string name;

    void write(vector<vector<string>> mainList);
    vector<vector<string>> read();
};