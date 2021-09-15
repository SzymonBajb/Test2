#include <iostream>
#include <vector>
// using namespace std;
using std::cout;
using std::endl;
using std::string;
using std::cin;
using std::vector;


class List {
    private:
    protected:
    public:
    List(){
        //constructor
    }
    ~List(){
        //destructor
    }
    vector<string> list;
    string name;

    void print_menu();
    void print_list();
    void add_item();
    void delete_item();
};