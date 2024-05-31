#include "Person.h"
#include <iostream>
#include <fstream>
Person::Person()
{
    weight = 50;
    firstname = "kondwani";
    age = 20;
}

Person::Person(string name, float newWeight)
{
    ifstream input("file.txt");
    input >> age;
    weight = newWeight;
    firstname = name;
}

Person::~Person() {}

float Person::operator+(const Person &otherPerson)
{
    Person person;
    person.weight = this->weight + otherPerson.weight;
    return person.weight;
}

bool Person::operator==(const Person &otherPerson)
{
    if ((this->age == otherPerson.age) && (this->firstname == otherPerson.firstname) && (this->weight == otherPerson.weight))
    {
        return true;
    }
    return false;
}

bool Person::operator!=(const Person &otherPerson)
{
    if (this->firstname != otherPerson.firstname || this->age != otherPerson.age || this->weight != otherPerson.weight)
    {
        return true;
    }
    return false;
}

bool Person::operator<(const Person &person)
{
    return this->age < person.age;
}

bool Person::operator>(const Person &person)
{
    return this->age > person.age;
}

Person::operator int()
{
    return age;
}

Person::operator string()
{
    return firstname;
}

Person::operator float()
{
    return weight;
}