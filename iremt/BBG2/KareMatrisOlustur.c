// Verilen bir n say�s� i�in a�a��daki �ekilde g�r�len bir kare matris bast�ran program. ��lem tek for ile yap�lmaktad�r.
// n=3 x x
//		x
//	   x x
#include <stdio.h>
int main()
{
	static char mat[100][100];
	int i,j,n,x,y;
	printf("Boyutu veriniz\n");
	scanf("%d",&n);
	for (i=0;i<n*n;i++)
	{
		x=i/n;
		y=i%n;
		if ((x+y)%2==0)
			mat[x][y]='x';
		else
			mat[x][y]=' ';
	}
	
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
			printf("%c ",mat[i][j]);
		printf("\n");
	}
	return 0;
}

