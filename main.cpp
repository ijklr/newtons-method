#include <iostream>
#include <iomanip>

using namespace std;

//Finding sqrt(2) is same as finding the root for the equation x^2 -2 = 0
//let f(x) = x^2 -2. f'(x) = 2x.
//Iteration step: X_{n+1} = X_n - f(X_n)/f'(X_n).
double sqrt2(int n)
{
    double ans = 1.4, x = ans;
    for(int i = 0; i < n; ++i) {
	ans = x - (x*x-2)/(2*x);
	x = ans;
    }
    return ans;
}

int main()
{ 
    int n = 0;
    cout << "Enter nmber of iterations:";
    cin >> n;
    
    double ans = sqrt2(n);
    cout << "Using newton's method, sqrt(2) = " << setprecision(10) << ans << endl;
}
