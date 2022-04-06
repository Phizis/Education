#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int a, b, c;

  cout << "a, b, c:";
  cin >> a >> b >> c;

  if (a == 0)
    cout << "Not a quadratic equation!" << endl;
  else 
    {
      int discriminant = b*b - 4*a*c;

      if (discriminant > 0){
        int x1 = (-b + sqrt(discriminant)) / (2  * a);
        int x2 = (-b - sqrt(discriminant)) / (2 * a);
        cout  << "Root 1, 2: " << x1 << ", " << x1 << endl;
      }
      else 
        if (discriminant == 0){
          int x = -b/(2 * a);
          cout << "Root: " << x << endl;
        }
        else
          cout << "Complex scenario is not supported!" << endl;
    }
}