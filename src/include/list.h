#include <iostream>
#include <vector>
// using namespace std;
using std::cout;
using std::endl;
using std::string;
using std::cin;
using std::vector;
using std::ofstream;
using std::ifstream;


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
    vector<vector<string>> mainList;
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