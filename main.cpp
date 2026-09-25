#include <iostream>
#include <cmath>

using namespace std;

int hypothenus(int adj, int op);

int main() {

    int dy = 10;
    int dx = 3;
    double l1 = 6;
    int l1Speed = 5;
    int l2Speed = 2;

    int adj = dy - l1;

    double l2 = sqrt(pow(adj, 2) + pow(dx, 2)); // calcule segement l2
    cout << l2 << endl;

    // temps = distance / vitesse

    double tempsl1 = l1 / 5.;
    double tempsl2 = l2 / 2.;
    cout << tempsl1 + tempsl2 << " heure" << endl;


}
