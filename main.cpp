//
//  main.cpp
//  cppPractice
//
//  Created by Leah Riffell on 2/1/21.
//

#include <iostream>

using namespace std;

void madLib();
double cube(double num);

int main() {
    madLib();
    cout << cube(3);
    
    return 0;
}

void madLib() {
    string color, pluralNoun, celebrity;
    
    cout << "enter a color: ";
    getline(cin, color);
    cout << "enter a plural noun: ";
    getline(cin, pluralNoun);
    cout << "enter a celebrity: ";
    getline(cin, celebrity);
    
    cout << "Roses are " << color << endl;
    cout << pluralNoun << " are blue" << endl;
    cout << "I love " << celebrity << endl;
}

double cube(double num) {
    double result = num * num * num;
    return result;
}
