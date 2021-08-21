#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

float grade(int a1, int a2, int f)
{
  if(a1+a2<30 || f<20) return 0.0;
  else if(a1+a2+f < 55) return 1.0;
  else if(a1+a2+f < 60) return 1.0 + double(1.0/3.0);

  else if(a1+a2+f < 65) return 1.0 + double(2.0/3.0);
  else if(a1+a2+f < 70) return 2.0;

  else if(a1+a2+f < 75) return 2.0 + double(1.0/3.0);
  else if(a1+a2+f < 80) return 2.0 + double(2.0/3.0);

  else if(a1+a2+f < 85) return 3.0;
  else if(a1+a2+f < 90) return 3.0 + double(1.0/3.0);

  else if(a1+a2+f < 95) return 3.0 + double(2.0/3.0);
  else if(a1+a2+f <= 100) return 4.0;

}
int main()
{
  int n; cin >> n;
  int total =0;
  double sum = 0;
  for(int i=0;i<n;i++)
  {
      int a1,a2,f,c;
      cin >> a1 >> a2 >> f >> c;
      total += c;
      sum += grade(a1,a2,f)*c;
  }
  cout << sum/total;
  
  return 0;
}