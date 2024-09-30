#include <string>
#include <iostream>

using namespace std;


class Person {
    
    public:
        Person(string name, int age) {
            this->name = name;
            this->age = age;
        }
        string getName() {
            return name;
        }
        int getAge() {
            return age;
        }
        void print_info() {
            cout << "I am " << name << " and I am " << age << " years old." << endl;
        }
    private:
        string name;
        int age;
};

int main() {

    // P2. Create two instances of Person and call print_info() on them.
    Person sahana("Sahana", 22);
    Person kamath("Kamath",22);

    sahana.print_info();
    kamath.print_info();

    return 0;
}
