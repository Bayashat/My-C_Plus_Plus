/*
Идея решения заключается в следующем:

если первая строка меньше (если точнее, не больше) остальных, то она и является минимальной;
то же самое проверим для второй;
если ни первая, ни вторая строка не оказались меньше других, минимальной является третья.
*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a, b, c;
    cin >> a >> b >> c;

    if (a <= b && a <= c)
    {
        cout << a;
    }
    else if (b <= a && b <= c)
    {
        cout << b;
    }
    else
    {
        cout << c;
    }
    return 0;
}
/*
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
    string a;
    string b;
    string c;
    cin >> a >> b >> c;
    
    vector<string> words = {a, b, c};
    sort(begin(words), end(words));
    cout << words[0];
    
    return 0;
}
*/
