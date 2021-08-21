#include <iostream>

using namespace std;

int main ()
{
        int n;
        cin >> n;
        int a[n];
        for(int i =0;i<n;i++)
        {
                cin >> a[i];
        }

        int max = 0,min = 1001;
        for(int i =0;i<n;i++)
        {
                if(a[i]>max)
                {
                        max = a[i];
                }
        }
        for(int i =0;i<n;i++)
        {
                if(a[i]<min)
                {
                        min = a[i];
                }
        }
        cout << max - min << endl;
  return 0;
}