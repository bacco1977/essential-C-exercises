//
//  Essential C++
//      Stanley Lippman
//      Antonio Senatore @May 2024
//
 
#include <iostream>
#include <string>

using namespace std;


int main(int argc, char *argv[]) 
{
    string first_name;
    string last_name;
    cout << "Please enter your first name: ";
    cin >> first_name;
     cout << "Please enter your last name: ";
    cin >> last_name;
    cout << '\n'
         << "Hello, "
         << first_name
         << " "
         << last_name
         << " ... and goodbye!\n";
    return 0;
}