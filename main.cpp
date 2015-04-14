#include <iostream>
using namespace std;

int main(){
    int a, b, temp, c;
    cin >> c;
    int tab[c];
    for (int i = 0; i < c; i++){
        cin >> tab[i];
    }
    cin >> c;
    for (int i = 0; i < c; i++){
        cin >> a;
        cin >> b;
        for (temp = 0; a <= b; ++a)
            temp+=tab[a];
        cout << temp << "\n";
    }
    return 0;
}