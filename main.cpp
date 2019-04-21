# include <stdio.h>
# include <conio.h>

int x,y;
float r;

main()
{
	x=5;
	y=10;
	r=x+y;
	printf("La suma de %d m%cs %d es: %f\n",x,160,y,r);
	
	r=x-y;
	printf("La resta de %d menos %d es: %f\n",x,y,r);
	
	r=x*y;
	printf("La multiplicaci%cn de %d por %d es: %f\n",162,x,y,r);
	
	r=float(x)/float(y);
	printf("La divisi%cn de %d entre %d es: %f\n",162,x,y,r);
	
	r=x%y;
	printf("El residuo de %d entre %d es: %f\n",x,y,r);

	getche();
} 