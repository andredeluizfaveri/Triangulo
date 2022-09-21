#include <iostream>
#include <cmath>
using namespace std;

int main(){

    double A, B, C;

    cin >> A >> B >> C;

   if ((A+B) == C)
   {
        cout.precision(1);
        cout << fixed;
        cout << "Area = " << ((A+B)*C)/2 << endl;
   }
   else if ((A + C ) == B )
   {
        cout.precision(1);
        cout << fixed;
        cout << "Area = " << ((A+B)*C)/2 << endl;   
   }
   else if ((C + B ) == A )
   {
        cout.precision(1);
        cout << fixed;
        cout << "Area = " << ((A+B)*C)/2 << endl;
   }else{
        cout.precision(1);
        cout << fixed;
        cout << "Perimetro = " << A + B + C << endl;
   }
   


}