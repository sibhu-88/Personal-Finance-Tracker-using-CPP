#include <iostream>
#include <vector>
#include <string>
using namespace std;

class user_register
{
private:
    string name;
    string email;
    string username;
    string password;
public:
    void register_user()
    {
        string name;
        string email;
        string username;
        string password;
        string conform_password;

        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Email: ";
        cin >> email;
        cout << "Enter Username: ";
        cin >> username;
        do
        {
            cout << "Enter Password: ";
            cin >> password;
            cout << "Conform Password: ";
            cin >> conform_password;
            if (password == conform_password)
            {
                cout << "Registration Successful!" << endl;
            }
            else
            {
                cout << "Password do not match. Try again password!!" << endl;
            }
        } while (password != conform_password);
    }
};

int main()
{
    user_register ur;
    ur.register_user();
    return 0;
}