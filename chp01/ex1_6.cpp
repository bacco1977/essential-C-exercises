#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
   vector <int> vec;
   int number, sum  = 0;
   double average;

   cout << "Please enter some numbers: ";
   while (cin >> number)
      vec.push_back(number);
      //calculate the sum of the numbers
    for (int i = 0; i < vec.size(); i++){
        sum += vec[i];
        average = sum / vec.size();
        
    }
    cout << "The sum of the numbers is: " << sum << endl;
    cout << "The average of the numbers is: " << average << endl;
    cout << "THE SIZE of int is: " << sizeof(int) << " bytes" << endl;
    return 0;
   
}