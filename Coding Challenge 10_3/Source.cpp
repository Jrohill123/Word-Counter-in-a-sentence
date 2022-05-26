#include <iostream>
#include <cstring>
#include <string>
using namespace std;

/*We start off by making our char function and constant integer.We must return a char because if we return an int
*  it will be random numbers.
*/

const int lenchar = 1000;

int wordequation(char*);


int main() {
	/* inside of our main we have made an integer variable that will hold the length of our sentence called length and
	* we have made a char variable array called wrdlength that can hold up to 1000 characters as provided by our constant int.
	* we hold this sentence in a pointer variable called ptr which points to a char. 
	* We ask the user a question and we get the answer by using the getline function to include whitespaces.
	* then we print out what the user entered, and then we also print out the length of the sentence to the user by using the strlen function.
	* upon this, we also print out how many words are in the sentence by calling our function and passing in our ptr variable.
	*/
	int length;
	char wrdlength[lenchar];
	cout << "Enter a sentance and we will count how many words are in it." << endl;
	cin.getline(wrdlength, lenchar);
	char* ptr = wrdlength;
	cout << "The sentence you entered is " << ptr << endl;
	length = strlen(ptr);
	cout << "This sentence is this long " << length << endl;
	cout << "You have this many words in your sentence " << wordequation(ptr);
	





		return 0;

}


/*
inside of our function defintion we first make a char variable called wordcount which is intialized with a char value of 1.
we then make an int variable called length and intialize it with the number of characters inside our ptr variable which is pointing
to the sentence. upon here we use a for loop and test for i to be less than the length. When i encounters any whitespace we then increment it
by one value each time. in the end we return the wordcount back to the main function.

*/

int wordequation(char* str)
{
	int wordcount = 1;
	int length = strlen(str);
	for (int i = 0; i < length; i++)
	{
		if (str[i] == ' ')
			wordcount++;
	}
	return wordcount;
}