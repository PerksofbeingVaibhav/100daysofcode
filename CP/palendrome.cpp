#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
    string in;
    cin>>in;
    map<char, int> chars;
    string out;

    for (auto c : in)
    {
        ++chars[c];
    }

    string middle;
    for (auto e : chars)
    {
        if (e.second >= 2)
        {
            out.append(e.second/2, e.first);
            e.second = e.second%2;
        }

        if (e.second && middle.empty())
            middle = e.first;
    }

    string tail(out);
    reverse(tail.begin(), tail.end());
    out = out + middle + tail;

    cout << out << endl;
}
