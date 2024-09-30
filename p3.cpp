#include <iostream>
#include <string>
using namespace std;


class Person {
    // P3. Make the attributes private and see if you can still access them from outside the class.
    private:
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
    Person sahana("Sahana", 22);

    // prit_info
    sahana.print_info();

    return 0;
}
