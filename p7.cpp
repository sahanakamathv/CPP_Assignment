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

//P7. Add a class called Student that inherits from Person. Add a field called department. Add a constructor that takes a name, age and department. Add a method called print_info() that prints out the name, age and department of the student.

class Student : public Person {
    public:
        
        Student(string name, int age, string department) : Person(name, age) {
            this->department = department;
        }


        void print_info(){
            cout << "I am " << getName() << ", I am " << getAge() << " years old, and I am in the " << department << " department." << endl;
        }
    private:
        string department;
};

int main() {
    Person sahana("Sahana", 22);
    Person raksha("Raksha", 22);

    sahana.print_info();
    raksha.print_info();


    Student Sahana("Sahana", 22, "Electronics and communication");
    Sahana.print_info();

    return 0;
}

