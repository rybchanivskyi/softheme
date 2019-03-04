#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    char ch;

    ifstream fin("input.txt");
    string s;

    fin>>s;
    int schet=s.size();
    int countOne = 0;
    int one [100];
    int j = 0;
    for(int i = 0; i < schet; i++)
    {
        if (s[i] == '1')
            countOne++;
        else
        {
            one[j] = countOne;
            countOne = 0;
            j++;
        }
    }
    one [j] = countOne;
    j++;


    int max = one[0];
    for(int i = 0; i < j; i++)
    {
        if (one[i] > max)
            max = one[i];
    }

    ofstream fout("output.txt");
    fout << max;

    fin.close();
    fout.close();
    return 0;
}
