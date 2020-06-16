// -*- coding: utf-8 -*-


/**
   The Prime Number Checker (TPNC)
   Encoding = UTF-8
   Written by: Hemanya Sharma
   The Prime Number Checker (TPNC)
   Copyright (C) 2020  Hemanya Sharma
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.
   Please contribute to this by reporting bugs and making it better....
**/

#include <iostream>
#include <cmath>

using namespace std;

int isPrime(int num) {
        num = abs(num);
        if (num<=1) {
                  cout << "The number "<<fixed << num <<" neither prime nor a composite number."<< endl;
                  return 1;
        }
        for (int i=2; i < 2+int(sqrt(num)); i=i+1) {
                  if (num % i == 0) {
                      cout << "The number "<< fixed << num << " is not a prime number." << endl;
                      return 1;
            }
        }
        cout << "The number "<< fixed << num << " is a prime number." << endl;
        return 0;
    }

int main(){
       int input;
       cout << "Enter a number..." << endl;
       cin >> input;
       isPrime(input);

}
