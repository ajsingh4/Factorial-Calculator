//
//  main.cpp
//  Factorial
//
//  Created by Aj Gill on 9/22/18.
//  Copyright © 2018 Aj Gill. All rights reserved.
//

#include <iostream>
using namespace std;

int factorial(int num){
    if (num == 0){
        return 1;
    }
    else{
        return num * factorial(num - 1);
    }
}

int main() {
    int total = factorial(5);
    cout << total << endl;
}
