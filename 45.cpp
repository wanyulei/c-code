#include <stdio.h>
#include <string.h>

struct Book
{
	char name[20];
	short price;	
	
	
};










int main()
{
	struct Book b1 = {"C���Գ������",55};
	strcpy(b1.name,"C++");
//	printf("������%s\n",b1.name);
//	printf("�۸�%dԪ\n",b1.price);
//	b1.price = 15;
//	printf("�޸ĺ�ļ۸�%dԪ\n",b1.price); 
//	struct Book* pb = &b1;
	printf("%s\n",b1.name);
//	printf("%d\n",pb->price); 
	
	
	
	
	
	return 0;
}
