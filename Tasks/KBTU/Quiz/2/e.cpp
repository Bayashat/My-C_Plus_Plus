#include <iostream>
using namespace std;
void AwesomeQuiz(string s)
{
    int nums[10];
    for(int i = 0; i < 10; i++)
    {
        nums[i] = 0;
    }
    for(int i = 0; i < s.size(); i++)
    {
        int x = int(s[i] - '0');
        nums[x]++;
    }
    for(int i = 0; i < 10; i++)
    {
        if(nums[i] != 0)
        {
            cout << i << ": " << nums[i] << endl;
        }
    }
}
int main()
{
    string s;
    cin >> s;
    AwesomeQuiz(s);
    return 0;
}