//
//  main.cpp
//  Factorial
//
//  Created by Aj Gill on 9/22/18.
//  Copyright © 2018 Aj Gill. All rights reserved.
//

#include <iostream>
using namespace std;

#define NIL -1
#define MAX 100

int lookup[MAX];

void initializeArray(){
    for (int i=0; i<MAX; i++) {
        lookup[i] = NIL;
    }
}

int factorial(int num){
    if(lookup[num] == NIL){
        if (num <= 1){
            lookup[num] = num;
        }
        else{
            lookup[num] = num * factorial(num - 1);
        }
    }
    else if(lookup[num] != NIL){
        return lookup[num];
    }
    return lookup[num];
}

int main() {
    initializeArray();
    int factorialNum;
    cout << "Please enter the number for which you would like the factorial calculated\n";
    cin >> factorialNum;
    cout << "The factorial value is " << factorial(factorialNum) << endl;
}
