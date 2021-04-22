#include <iostream>
#include <math.h>

//int year

int main()
{
    int year;
        
std::cout << "what is the year?\n";
std::cin >> year;

int leap_year=floor(year);

if(leap_year!=0){
    std::cout << "This is not a leap year\n";
}else{
    std::cout << "This is a leap year\n";
}
}