// PasswordVerifier.cpp
// M. Ozmen
// 4/13/2020
// This program verifies a password using C++ string objects only.
// Passwords must be between 6 and 20 characters long and contain
// at least one lower case letter, one upper case letter, one digit, and one punctuation character.

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

class PasswordVerifier
{
private:
        char* password = nullptr;
        strcpy(password, "");
        string password = *password;
public:
        static const int MINLENGTH = 6;  // Minimum length for password
        static const int MAXLENGTH = 20; // Maximum length for password

        // constructors
        PasswordVerifier() {}
        PasswordVerifier(string password) {
                this->password = password;
        }

        // destructor
        ~PasswordVerifier(){}

        // accessor
        string getPassword() const {
            return this->password;
        }

        // mutator
        void setPassword(string password){
            this->password = password;
        }

        // verification function prototypes
        bool isCorrectLength();
        bool hasDigit();
        bool hasUpperAndLowerCase();
        bool hasPunction();
};

//****************************************************
// Check is string has a minimum length.
//****************************************************
bool PasswordVerifier::isCorrectLength()
{
        bool result = false;
        if ((this->password).length() >= MINLENGTH &&
                        (this->password).length() <= MAXLENGTH)
                result = true;
        return result;
}

//****************************************************
// Check if string has at least one digit.
//****************************************************
bool PasswordVerifier::hasDigit()
{
        bool result = false;
        for (int k = 0; result == false && k < (this->password).length(); k++)
        {
                if (isdigit(this->password[k]))
                        result = true;
        }
        return result;
}

//**************************************************************
// Check if a string has at least one upper case and at
// least one lower case letter.
//**************************************************************
bool PasswordVerifier::hasUpperAndLowerCase()
{
        bool hasUpperCase = false;
        bool hasLowerCase = false;
        bool result = false;
        for (int k = 0; result == false && k < (this->password).length(); k++)
        {
                hasUpperCase = hasUpperCase || isupper(this->password[k]);
                hasLowerCase = hasLowerCase || islower(this->password[k]);
                if (hasUpperCase && hasLowerCase)
                        result = true;
        }
        return result;
}

//**************************************************************
// Check if a string has at least one symbol (e.g. !, @, #, $, etc.)
//**************************************************************
bool PasswordVerifier::hasPunction()
{
        bool result = false;
        for (int k = 0; result == false && k < (this->password).length(); k++)
        {
                if (ispunct(this->password[k]))
                        result = true;
        }
        return result;
}

int main()
{
        const string STR_PROMPT_TRYAGAIN = "\nPlease try again.\n";
        char password[PasswordVerifier::MAXLENGTH+1];
        bool isValid = false;

        // start with an empty PasswordVerifier
        PasswordVerifier *pw = new PasswordVerifier();

        // Explain program to user and request a password
        cout << "This program checks passwords to see if they are secure.";

        while (isValid == false)
        {
                cout << "\nEnter a password to check: ";
                cin.getline(password, PasswordVerifier::MAXLENGTH);

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
                        if (pw->hasUpperAndLowerCase())
                                isValid = true;
                        else
                        {
                                cout << "Password must have both lower case and upper case letters.";
                                cout << STR_PROMPT_TRYAGAIN << endl;
                                isValid = false;
                        }
                if (isValid == true)
                        if (pw->hasPunction())
                                isValid = true;
                        else
                        {
                                cout << "Password must have at least one symbol (e.g. !, @, #, $, etc.)";
                                cout << STR_PROMPT_TRYAGAIN << endl;
                                isValid = false;
                        }
        }
        cout << "The password \"" << pw->getPassword() << "\" is valid.";
        delete pw;

        return 0;
}
