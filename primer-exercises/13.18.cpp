#include <string>

class Employee {
    static int curr_id;
    std::string name;
    int id;
    public:
    Employee() :id(curr_id++) {}
    Employee(std::string& name) :name(name), id(curr_id++) {}
    Employee(Employee& e) :name(e.name), id(curr_id++) {}
    Employee& operator=(Employee& e) {
        name = e.name;
    }
};