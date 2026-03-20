#include <iostream>

int main(){

    double temp;
    char unit;

    std::cout << "Enter temp: ";
    std::cin >> temp;
    std::cout << "Was it in C or F?: ";
    std::cin >> unit;

    if (unit == 'c' || unit == 'C'){
        std::cout << "Temp is " << (1.8 * temp)  + 32 << "F";
    }
    else if (unit == 'f' || unit == ' F'){
        std::cout << "Temp is " << (temp - 32)  / 1.8 << "C";
    }
    else{
        std::cout << "Wrong Unit";
    }




    return 0;
}