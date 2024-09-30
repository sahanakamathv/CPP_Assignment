#include <iostream>
#include <string>
using namespace std;

class Person {
  public:
    // Constructor that accepts both name and age
    Person(string name, int age) {
      this->name = name;
      this->age = age;
    }

    // Getter for the name
    string getName() {
      return name;
    }

    // Getter for the age (returns int instead of string)
    int getAge() {
      return age;
    }

    // Print information
    virtual void print_info() {
      cout << "I am " << name << " and I am " << age << " years old." << endl;
    }

  public:
    string name;
    int age;
};

class Student:public Person{
  public:
    Student(string name,int age,string department ):Person(name,age){
      this->department=department;
    }

    void print_info() override{
      cout << " I am " <<getName() <<",I am " <<getAge() <<" years old and I study in the " <<department << "department." <<endl;
    }
  private:
    string department;
};

//P9. Create a class called Teacher that inherits from Person. Add a field called salary. Add a constructor that takes a name, age and salary. Add a method called print_info() that prints out the name, age and salary of the teacher.
class Teacher:public Person{
  public:
    Teacher(string name,int age,int salary):Person(name,age){
      this->salary = salary;
    }
    void print_info() override{
      cout<< "I am " << name << " and i am" << age << " years old and my salary is " << salary << "."<<endl;
    }
  private:
    int salary;
};

int main() {

  Person person1("Sahana", 22);
  Student student1("Raksha",21,"ECE");
  person1.print_info();
  student1.print_info();

  //P10. Create an instance of Teacher and call print_info() on it.
  Teacher teacher1("Shreya",20,10000);
  teacher1.print_info();

  return 0;
}
