#include <iostream>
using namespace std;

int main(){
    int n=0;

    cin >> n;

    if(n%2==0)
    {
         if(n>2 && n<5)
        {
            cout << "Not Super" << endl;
        }
        else if(n>6 && n<20)
        {
            cout << "Super" << endl;
        }
        else if(n>20)
        {
            cout << "Not Super" << endl;
        }  
    }
    else if(n%2==1)
    {
        cout <<"Super" << endl;
    }
    return 0;
}