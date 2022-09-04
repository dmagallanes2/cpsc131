#include <iostream>
#include <cstring>
 
using namespace std;
  
int main()
{
    char inputString[1000];
    //initialize array to 0 to store frequency of characters using ascii value
    int count[256] = {0};
     
    cout << "Enter a String:\n";
    //gets string input from user with cstring 'gets'
    gets(inputString);
     
    for (int i=0; inputString[i] != '\0'; i++)
    {
        // Populate frequency count array
        count[inputString[i]]++;
    }
     
    cout << "\nCharacter   Frequency\n";
    for (int i = 0; i < 256; i++){
        if(count[i] != 0)
        {
        //converts num to char from ascii value
          cout << "  " << (char)i << "         " << count[i] << endl;                    
        }
    }
  
    return 0;
}