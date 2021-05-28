
#include <iostream>
#include  <string>
using namespace std;



int main()
{
    string answer = "lucas";
    string guess;
    int age_guess;
    int age_answer = 25;
    cout << "guess what's the coder name is" << endl;
    cin >> guess;
    cout << "guess what's the coder age is" << endl;
    cin >> age_guess;
    if (guess == answer or age_guess== age_answer)
    {
        cout << " you got one of them correct!!!";
    }
    else
    {
        cout << "try again" << endl;

    }

    return 0;

}



