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
    vector<string> list;
    string name;

    void write();
    void read();
};