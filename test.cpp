#include <iostream>
using namespace std;

// typedef std::string text_t;

using text_t = std::string;
using number_t = int;

int main()
{   

    text_t firstName  = "Luka";
    number_t age = 21;
    cout << "Hello world " << "My name is " << firstName <<endl;
    cout<< "And I am " << age << " years old" << endl;

    return 0;
}
