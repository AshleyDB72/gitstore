#include <iostream>
#include <vector>
#include <string>
 
int main() {
 
  // Whale, whale, whale.
  // What have we got here?
 
std::string phrase = "turpentine and turtles";
std::vector <char> vowels;

vowels.push_back('a');
vowels.push_back('e');
vowels.push_back('i');
vowels.push_back('o');
vowels.push_back('u');

std::vector <char> results;
std::vector <char>

for (int i = 0; i < phrase.size(); i++)
{
    for (int j = 0; j < vowels.size(); j++)
    {
       if (phrase[i] == vowels[j])
       {
          results.push_back(phrase[i]);
       }
       
    }
    
}



for (int k; k < results.size(); k++){
  std::cout << results[k];
}
}