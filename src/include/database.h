#include <iostream>
#include <vector>
#include <fstream>


// using namespace std;
using std::cout;
using std::endl;
using std::string;
using std::cin;
using std::vector;
using std::ofstream;
using std::ifstream;


class Database {
    private:
    protected:
    public:
    Database(){
        //constructor
    }
    ~Database(){
        //destructor
    }
    vector<vector<string>> mainList;
    string name;

    void write(vector<vector<string>> mainList);
    vector<vector<string>> read();
};