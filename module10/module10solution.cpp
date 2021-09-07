// PasswordVerifier-string.cpp
// This program verifies a password using C++ string objects.
// Passwords must be between 6 and 20 characters long and contain
// at least one lower case letter, one upper case letter, and one digit. 

#include <iostream>
#include <string>
#include <cctype>
using namespace std; 

class PasswordVerifier
{
private:
        string password;
public:
        PasswordVerifier() {}
        PasswordVerifier(string password)
        {
                this->password = password;
        } 
       ~PasswordVerifier()  {}

        static const int MINLENGTH = 6;  // Minimum length for password
        static const int MAXLENGTH = 20; // Maximum length for password+ 

        // accessor
        const string getPassword()
        {
                return this->password;
        } 

        // mutator
        void setPassword(string password)
        {
                this->password = password;
        } 

        // misc function prototypes
        bool isCorrectLength();
        bool hasDigit();
        bool hasUpperAndLowerCase();
        bool hasSymbol();
}; 

//****************************************************
// isLongEnough
// Check is string has a minimum length.
//****************************************************
bool PasswordVerifier::isCorrectLength()
{
        bool result = false;
        if (this->password.length() >= MINLENGTH &&
                        this->password.length() <= MAXLENGTH)
                result = true;
        return result;
} 

//****************************************************
// hasDigit
// Check if string has at least one digit.
//****************************************************
bool PasswordVerifier::hasDigit()
{
        bool result = false;
        for (char c : this->getPassword())
                if (isdigit(c))
                {
                        result = true;
                        break;
                }
        return result;
} 

//************************************************************
// hasUpperAndLowerCase
// Check if a string has at least one upper case and at least
// one lower case letter.
//************************************************************
bool PasswordVerifier::hasUpperAndLowerCase()
{
        bool hasUpperCase = false;
        bool hasLowerCase = false;
        bool result = false;
        for (char c : this->getPassword())
        {
                hasUpperCase = hasUpperCase || isupper(c);
                hasLowerCase = hasLowerCase || islower(c);
                if (hasUpperCase && hasLowerCase)
                {
                        result = true;
                        break;
                }
        }
        return result;
} 

//************************************************************
// hasSymbol
// Check if a string has at least one symbol
// (as interpreted by “ispunct()”)
//************************************************************
bool PasswordVerifier::hasSymbol()
{
    bool result = false;
    for (char c : this->getPassword())
    {
        if (ispunct(c))
        {
            result = true;
            break;
        }
    }
    return result;
} 

int main()
{
        const string STR_PROMPT_TRYAGAIN = "\nPlease try again.\n";
        string password;
        bool isValid = false; 

        // start with an empty PasswordVerifier
        PasswordVerifier *pw = new PasswordVerifier();
        // Explain program to user and request a password
        cout << "This program checks passwords to see if they are secure."; 

        while (isValid == false)
        {
                cout << "\nEnter a password to check: ";
                getline(cin, password); 

                // got a string, verify it using the PasswordVerifier
                pw->setPassword(password); 

                // Check the password
                if (pw->isCorrectLength())
                        isValid = true;
                else
                {
                        cout << "Password must be at least " <<
                                PasswordVerifier::MINLENGTH <<
                                " characters long and less than " <<
                                PasswordVerifier::MAXLENGTH <<
                                " characters long.";
                        cout << STR_PROMPT_TRYAGAIN << endl;
                } 

                if (isValid == true)
                        if (pw->hasDigit())
                                isValid = true;
                        else
                        {
                                cout << "Password must have at least one digit.";
                                cout << STR_PROMPT_TRYAGAIN << endl;
                                isValid = false;
                        } 
                if (isValid == true)
                        if (pw->hasSymbol())
                                isValid = true;
                        else
                        {
                                cout << "Password must have at least one symbol.";
                                cout << STR_PROMPT_TRYAGAIN << endl;
                                isValid = false;
                        } 
                if (isValid == true)
                        if (pw->hasUpperAndLowerCase())
                                isValid = true;
                        else
                        {
                               cout << "Password must have both lower case and " <<
                                             "upper case letters.";
                                cout << STR_PROMPT_TRYAGAIN << endl;
                                isValid = false;
                        }
        }
        cout << "The password \"" << pw->getPassword() << "\" is valid.";
        return 0;
}