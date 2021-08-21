#include<iostream>
using namespace std;

int main()

{
    int a[3][2];
    for(int i = 0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin >> a[i][j];
        }
    }

    int x = a[0][0]+a[1][0]+a[2][0];
    int y = a[0][1]+a[1][1]+a[2][1];
    if(x >y) cout << "Grats Yelnur" ;
    else if(x==y) cout << "Draw";
    else cout << "Hee Hee Losers";
    
    /*
    int r,b,c,d,e,f ;
    cin >> r >> b >> c >> d >> e >> f;

    if(r + c + e > b + d + f)
        cout << "Grats Yelnur" ;

    else if(r + c + e == b +d + f)
        cout << "Draw" ;

    else if(r + c + e < b + d + f) 
        cout << "Hee Hee Losers" ;
    */
    return 0;
}
