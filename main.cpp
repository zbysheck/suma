#include <iostream>//comment
int main(){
	int a, b, temp, c;
	std::cin >> c;
	int tab[c];
	for (int i = 0; i < c; i++)
		std::cin >> tab[i];
	std::cin >> c;
	for (int i = 0; i < c; i++){
		std::cin >> a >> b;
		for (temp = 0; a <= b; ++a)
			temp+=tab[a];
		std::cout << temp << "\n";
	}
    return 0;
}
