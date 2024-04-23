#include <iostream>
#include <fstream>
#include <string>
#include <cctype>

using namespace std;

// Functions declaration
int calculateVowels(const string text);
int calculateWords(const string text);
void reverse(const string text);
void capitalizeSecond(string text);

int main()
{
    // Open file
    ifstream file("input.txt");

    // Variable to text from the file
    string fileData;

    // Assign contents of the file to variable filedata
    getline(file, fileData);

    // Print number of vowels in the file
    cout << "The file have " << calculateVowels(fileData) << " vowels" << endl;

    // Print number of words in the file
    cout << "The file have " << calculateWords(fileData) << " words" << endl;

    // Reverses the contents of the file
    reverse(fileData);
    cout << endl;

    // Capitalizes the second letter of each word of the file
    capitalizeSecond(fileData);
    file.close();
}

// Returns number of vowels of a sentence
int calculateVowels(const string text)
{
    int count = 0;
    for (int i = 0; i < text.length(); i++)
    {
        switch (tolower(text[i]))
        {
        case 'a':
            count++;
            break;
        case 'e':
            count++;
            break;
        case 'i':
            count++;
            break;
        case 'o':
            count++;
            break;
        case 'u':
            count++;
            break;
        }
    }
    return count;
}

// Returns the number of words of a sentence
int calculateWords(const string text)
{
    int count = 0;
    for (int i = 0; i < text.length(); i++)
    {
        if (isblank(text[i]))
        {
            count++;
        }
    }
    return count + 1;
}

// Prints a reversed sentence
void reverse(const string text)
{
    for (int i = text.length() - 1; i >= 0; i--)
    {
        cout << text[i];
    }
}

// Prints a sentence with the second letter of each word being capitalized
void capitalizeSecond(string text)
{
    for (int i = 0, index = 0; i < text.length(); i++, index++)
    {
        if (index == 1)
        {
            text[i] = toupper(text[i]);
        }
        // Reset index if found a new word
        if (isblank(text[i]))
        {
            index = -1;
        }
        cout << text[i];

    }
}