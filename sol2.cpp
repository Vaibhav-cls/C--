#include <bits/stdc++.h>
using namespace std;
int getLength(const string& str) {
    int length = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        length++;
    }
    return length;
}
int isPresent(string str, char key)
{
    int count = 0;
    for (int i = 0; i < getLength(str); i++)
    {
        if (str[i] == key)
            count++;
    }
    return count;
}
bool isDuplicate(string str)
{
    sort(str.begin(), str.end());
    for (int i = 1; i < getLength(str); i++)
    {
        if (str[i] == str[i - 1])
            return true;
    }
    return false;
}
string ans(string str1, string str2)
{
    string answer1 = "";
    string answer2 = "";
    string answer3 = "",finalAns;
    for (int i = 0; i < getLength(str1); i++)
    {
        for (int k = 0; k < isPresent(str2, str1[i]); k++)
        {
            if(str1[i] ==' ')
                continue;
            else if (str1[i] >= '0' && str1[i] <= '9')
            {
                answer2.push_back(str1[i]);
            }
            else if ((str1[i] >= 33 && str1[i] <= 47) || (str1[i] >= 58 && str1[i] <= 64) || (str1[i] >= 91 && str1[i] <= 96) || (str1[i] >= 123 && str1[i] <= 126))
                answer2.push_back(str1[i]);
            else
            {
                answer3.push_back(str1[i]);
            }
        }
    }
    if(answer3!="")
        finalAns+=answer3;
    if(answer1!=""){
        finalAns = finalAns+ " "+answer1;
    }
    if(answer2!=""){
        finalAns = finalAns+ " "+answer2;
    }
    return finalAns;
}
int main()
{
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    if (isDuplicate(s1))
        cout << "New Language Error";
    else
        cout << ans(s1, s2);
    return 0;
}