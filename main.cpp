#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int hypothenus(int adj, int op);

int main() {

    int dy = 10;
    int dx = 3;
    double l1 = 1;
    double l1Speed = 5.;
    double l2Speed = 2.;
    double oldTime = 100;


    for (int i = 1; i <= 20; i++) {

        l1 = i;


        int adj = dy - l1;

        double l2 = sqrt(pow(adj, 2) + pow(dx, 2)); // calcule segement l2



        double tempsl1 = l1 / l1Speed;
        double tempsl2 = l2 / l2Speed;
        double tempsTot = tempsl1 + tempsl2;


        if (oldTime < tempsTot) {
           tempsTot = oldTime;
        } else {
            oldTime = tempsTot;
        }
    }

    double finalTime = oldTime;

    cout << fixed << setprecision(2) << "Le temps final sera de " << finalTime << " heure" << endl;
    return 0;

}




