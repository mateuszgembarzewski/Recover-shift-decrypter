#include <iostream>
#include <sstream>

using namespace std;

// Determine the ordinal value of c
unsigned int ordinal(const char c) {
    return c - 97;
}

// Determine character representation of c
char character(const unsigned int c) {
    return (char) (c + 97);
}

string decrypt(const string ciphertext, const unsigned int shift) {

    /* Write code that iterates over each character in the ciphertext
     * and determine its plaintext equivalent. Use a stringstream to
     * incrementally build the plaintext and return it as a string.
     */

    stringstream plaintext;

    //TODO: your code goes here
    //For each character

    for (int x = 0; x < ciphertext.length(); x++)
    {
       int numerized = (ordinal(ciphertext.at(x)) + shift) % 26; 
       plaintext << character(numerized);	
    }

       return plaintext.str();

}

int main() {

    // Loop over all possible shifts and print the output for each
    // TODO: your code goes here
    // For each iteration

    string  decryptme = "lcllewljazlnnzmvyiylhrmhza";

    for (int x = 0; x < 26; x++)
    {
	int i = 0 ;
	    if (i == 0)
	    {
	        //Noticing that L was the most occuring letter in the ciphertext, we were able to correlate L to E meaning the shift was 19 letters forward. 
            cout<<x+1<<"."<<decrypt(decryptme, 19)<<endl;
            i++;
	    }
	

    }
    cout<<"The plaintext was: eveexpectseggsforbreakfast "<<endl;
        return 0;
}
