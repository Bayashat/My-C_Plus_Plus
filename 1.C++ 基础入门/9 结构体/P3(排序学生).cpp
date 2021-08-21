/*              P1. 排序学生

  需要将给定学生们按照分数降序排序。
   3
 Student1 100 IIN1 School1
 Student2 120 IIN2 School2
 Student3 91 IIN3 School3
*/
#include <iostream>
#include <algorithm>
using namespace  std;

struct student{
    string name;
    int score;
    string iin;
    string school;

    void read()
    {
        cin >> name >> score >> iin >> school;
    }

    void print()
    {
        cout << name << " " << score << " "  << iin  << " "  << school << endl;
    }
};

bool f(student s1, student s2)
{
    if(s1.score > s2.score) return  true;
    return  false;
}

int main() 
{

    int n;
    cin >> n;
    student s[n];

    for(int i = 0; i < n; ++i)
    {
        s[i].read();
    }

    sort(s, s + n, f);

    for(int i = 0; i < n; ++i)
    {
        s[i].print();
    }

    return 0;
}