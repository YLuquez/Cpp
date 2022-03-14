#include <iostream>
#include "locale.h"
#include "conio.h"

using namespace std;

void criarTriangulo(int op)
{
	int nums[op][op];
	for(int i = 0;i < op;i++)
	{
		nums[i][0] = 1; 
		cout << "n = " << i << ": " <<nums[i][0] << " ";
		
		if(i > 1) 
		{
			for(int j = 1;j < i;j++) 
			{
			  
				nums[i][j] = nums[i-1][j-1] + nums[i-1][j];
				cout << nums[i][j] << " ";
					
			}
		}
		
		if(i > 0) 
		{
			nums[i][i] = 1;
			cout << nums[i][i];
		}
		cout <<endl;
	}	
	
}

int main()
{
	setlocale(LC_ALL,"");
	char resposta;
	while(tolower(resposta)!= 'n')
	{
		system("cls");
		int op;
		cout << "numero de linhas: ";
		cin >> op;
		criarTriangulo(op);
		cout << "\nDeseja criar outro triângulo?: [S/N]" <<endl;
		resposta = getch();
	}
	return 0;
}