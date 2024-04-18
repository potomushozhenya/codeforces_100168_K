#include <fstream>
#include <iomanip>

int main() {
    std::ifstream in("intersec1.in");
    std::ofstream out("intersec1.out");
    int a1,b1,c1,a2,b2,c2;
    in>>a1>>b1>>c1>>a2>>b2>>c2;
    long double y = ((long double)(a2*c1-c2*a1))/(b2*a1-b1*a2);
    long double x = ((long double)(b1*c2-b2*c1))/(a1*b2-b1*a2);
    out<<std::setprecision(16)<<x<<' '<<y;
    return 0;
}
