#include <iostream>
#include <cstring>
using namespace std;

int length(char* str);
int count(char str[], char ch, int l);

int main()
{
    char test[100];
    char sr;
    cout << "文字列を入力してください。\n";
    cin >> test;

    int len = length(test);
    cout << "文字列の長さは" << len << "です。\n";

    cout << "文字列から探す文字を入力してください。\n";
    cin >> sr;
    int c = count(test,sr,len);
    cout << test << "の中に" << sr << "は全部で" << c << "個あります。\n";
    return 0;
}

int length(char* str)
{
    int s = strlen(str);

    return s;
}

int count(char str[], char ch, int l)
{
    int co = 0;
    for(int i = 0; i < l; i++)
    {
        if(str[i] == ch)
        {
            co++;
        }
    }
    return co;
}