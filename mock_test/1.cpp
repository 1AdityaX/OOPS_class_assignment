#include <iostream>
#include <string.h>

using namespace std;

class my_string
{
private:
    string s;

public:
    my_string(string str)
    {
        this->s = str;
    }
    void capitalize_string()
    {
        for (int j = 0; j < s.length(); j++)
        {
            if (s[j] >= 'a' && s[j] <= 'z')
            {
                s[j] = s[j] - 32;
            }
        }
        cout << s << endl;
    }
    void lower_string()
    {
        for (int j = 0; j < s.length(); j++)
        {
            if (s[j] >= 'A' && s[j] <= 'Z')
            {
                s[j] = s[j] + 32;
            }
        }
        cout << s << endl;
    }
    void search_letter(char ch)
    {
        for (int j = 0; j < s.length(); j++)
        {
            if (s[j] == ch)
            {
                cout << "Letter " << ch << " is in index " << j << endl;
            }
        }
    }
    void find_index(char ch)
    {
        for (int j = 0; j < s.length(); j++)
        {
            if (s[j] == ch)
            {
                cout << "Letter " << ch << " is in index " << j << endl;
            }
        }
    }

    void add_string(char ch)
    {
        s[s.length()] = ch;
        cout << s << endl;
    }
};

int main()
{
    my_string s1("Hello");
    s1.search_letter('e');
    s1.capitalize_string();
    s1.lower_string();
    s1.add_string('e');
}