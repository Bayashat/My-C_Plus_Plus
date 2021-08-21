#include <iostream> 
using namespace std; 
  
int main() 
{
    int n;
    cin >> n;
    long long sum=0;
    long long sum2=0;
    
    int x;

    while(n!=0)
    {
        x = 0;
        x = n%10;
        
        if(x%2==0)
        {
            sum = sum + x;
        }
        else
        {
            sum2 = sum2 + x;
        }
        n=n/10;
    }

    if(sum==sum2)
    {
        cout << sum+sum2 << endl;
    }
    else if(sum>sum2)
    {
        cout << sum << endl;
    }
    else
    {
        cout << sum2 << endl;
    }
    return 0;
}
   