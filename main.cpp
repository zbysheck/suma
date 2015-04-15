#include <stdio.h>
int main(){
	int a, b, temp, c;
	scanf("%d",&c);
	int *tab=new int[c];
	for (int i = 0; i < c; i++)
		scanf("%d",&tab[i]);
	scanf("%d",&c);
	for (int i = 0; i < c; i++){
		scanf("%d %d",&a,&b); 
		for (temp = 0; a <= b; ++a)
			temp+=tab[a];
			
		printf("%d \n",temp);
	}
    return 0;
}
