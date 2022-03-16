#include <iostream>
using namespace std;

class stringType
{

    string first, second;

public:
    stringType()
    {

        first = " ";
        second = " ";
    }
    ~stringType()
    {
        cout << "destructor called :" << endl;
    }

    void setvalues(string str1, string str2)
    {
        first = str1;
        second = str2;
    }

    void printValues()
    {
        cout << " first string is: " << first << endl;
        cout << " second string is:  " << second << endl;
    }

    int maxLength()
    {

        int s1L = 0, s2L = 0;

        for (int i = 0; i < 150; i++)
        {
            if (first[i] == '\0')
            {

                s1L++;

                break;
            }
        }

        for (int i = 0; i < 150; i++)
        {
            if (second[i] == '\0')
            {

                s2L++;

                break;
            }
        }

        if (s1L > s2L)
        {

            return s1L;
        }

        else
        {

            return s2L;
        }
    }

    int compare(string s1, string s2)
    {

        for (int i = 0; i < 150 && s1[i] != '\0' && s2[i] != '\0'; i++)
        {

            if (s1[i] < s2[i])

            {

                return -1;
            }

            else if (s1[i] > s2[i])
            {

                return 1;
            }
        }
        return 0;
    }

    void copy(string source, string destination)
    {

        for (int i = 0; i < 150; i++)
        {
            if (destination[i] != '/0')
            {
                destination[i] = source[i];
            }
            else
            {

                break;
            }
        }

        cout << source;
    }

    string concatenate(string s1, string s2)
    {

        int i;
        for (i = 0; s1[i] != '\0'; i++)
            ;

        for (int j = 0; s2[j] != '\0'; j++, i++)
        {
            s1[i] = s2[j];
        }

        return s1;
    }

    int searchWord(string word)
    {

        bool check = false;
        int wL = 0;

        while (word[wL] != '\0')
        {

            wL++;
        }

        int counter = 0;

        for (int i = 0; first[i] != '\0'; i++)

        {
            if (word[counter] == first[i])
            {
                counter++;
                check = true;
            }

            else
            {

                counter = 0;
                check = false;
            }
        }

        if (check)
        {

            return 1;
        }

        else
        {

            return -1;
        }
    }

    int searchChar(char ch)

    {

        bool check = false;
        for (int i = 0; first[i] != '\0'; i++)
        {
            if (first[i] == ch)
            {

                check = true;
                break;
            }

            else
            {

                check = false;
            }
        }

        if (check)
        {

            return 1;
        }

        else
        {

            return -1;
        }
    }
};

int main()
{

    stringType sr1;

    return 0;
}
