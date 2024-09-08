#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main ()
{
    
    double x1, y1, r1; 
    double x2, y2, r2; 
    double d, r, R, s; 

  
    cin >> x1 >> y1 >> r1;
    cin >> x2 >> y2 >> r2;

    
    if (r1 > r2) {
        R = r1;
        r = r2;
    } else {
        R = r2;
        r = r1;
    }

  
    d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    
    if (d >= r1 + r2 || d <= abs(r1 - r2)) {
        cout << fixed << setprecision(2) << 0.00 << endl;
        return 0;
    }

    
    double part1 = r * r * acos((d * d + r * r - R * R) / (2 * d * r));
    double part2 = R * R * acos((d * d + R * R - r * r) / (2 * d * R));
    double part3 = 0.5 * sqrt((-d + r + R) * (d + r - R) * (d - r + R) * (d + r + R));

    s = part1 + part2 - part3;

   
    cout << fixed << setprecision(2) << s << endl;

    return 0;
}
