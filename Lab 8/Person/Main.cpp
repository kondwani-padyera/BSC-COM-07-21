#include <iostream>
#include "Person.h"
#include <fstream>

int main(){
    ofstream file("file.txt", ios::app);
    Person Jane = Person("Jane", 90);
    Person John = Person("John", 75);

    float totalWeight = Jane + John;

    file << "Total Weight: " << totalWeight << endl;

    if (Jane == John){
        file << "This is the same person" << endl;
    }

    if (Jane != John){
        file << "This is not the same person" << endl;
    }

    if (Jane < John){
        file << "Jane is younger than John" << endl;
    }

    if (Jane > John){
        file << "John is younger than Jane" << endl;
    }

    int johnAge  = John;
    file << "John's Age: " << johnAge << endl;

    string johnName = John;
    file << "John's firstname is: " << johnName << endl;

    float johnWeight = John;
    file << "John's weight is: " << johnWeight;
}