#pragma once
#include <string>

using namespace std;

class Person
{
public:
    Person();
    Person(string name, float newWeight);
    ~Person();
    float operator+(const Person &otherPerson);
    bool operator==(const Person &otherPerson);
    bool operator!=(const Person &otherPerson);
    bool operator<(const Person &otherPerson);
    bool operator>(const Person &otherPerson);
    operator int();
    operator string();
    operator float();

private:
    float weight;
    string firstname;
    int age;
};