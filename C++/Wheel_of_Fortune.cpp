// string::find
#include <iostream>       // std::cout
#include <stdio.h>
#include <string.h>


int main ()N
{
    char guess;
    char str[] = "This is a sample string";
    char * pch;
    std::cout << "Looking for the what character: \n";
    std::cin >> guess;
    pch=strchr(str,guess);
        if (pch==NULL){
           std::cout << "The letter "<< guess << "is not in the answer.\n";
       } else {
        while (pch!=NULL)
        {
            std::cout <<"found at \n" << pch-str+1;
            pch=strchr(pch+1,guess);
        }
       }
  return 0;
    
}
  