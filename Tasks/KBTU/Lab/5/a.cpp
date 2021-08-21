#include <iostream>
#include <string>
using namespace std;

int main()
{
    string n;
    cin >> n;

    int cntBig = 0, cntSmall = 0;

    for (int j = 0; j < n.size(); j++)
    {
        if (n[j] >= 'a' && n[j] <= 'z') // if(islower(s[i]))
            cntSmall++;
        else // if(isupper(s[i]))
            cntBig++;
    }
    cout << cntSmall << " " << cntBig << endl;
    
    return 0;
}