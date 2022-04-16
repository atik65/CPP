#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{

    // Declaring string all possible alternatives

    // string testString = "Hello";
    // string testString1(5, 'a');
    // string testString;

    // ------------->      get string from user or string input

    //  ---->        without spaces
    // cin >> testString;

    // -----> with spaces
    // getline(cin,testString);

    string s1 = "Good Morning", s2 = "GBC";
    string num = "785";

    // -------------> string concatination

    // s1.append(" ").append(s2);

    // cout << s1;
    // cout << s1 + " " + s2;

    // s1.clear();
    // getline(cin, s1);
    // cout << s1;

    // -----------> string Compare
    // cout << s1.compare(s2);

    // ---------------> sting empty check
    // cout << s1.empty();

    // ------------> string erase
    // s1.erase(1, 3);

    // ------------> find
    // cout << s1.find(" ");

    // --------> insert
    // cout << s1.insert(6, "   Goo ");

    // ---------------> sting legth
    // cout << s1.length();
    // cout << s1.size();

    // -------------> substring
    // cout << s1.substr(2, 6);

    // -----------> sting to integer
    // cout << stoi(num) + 2;

    // ------------ string to double
    // cout << stod(num) + 2.244;

    // -----------> integer to string
    // cout << to_string(100.254) + "hello";

    // string sorting
    // sort(s1.begin(), s1.end());
    // cout << s1;

    cout << s1.find_first_not_of("G");
    return 0;
}