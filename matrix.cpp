#include <iostream>
using namespace std;

int mat[3][3] = { 0 };
int* ptrmat[3][3] = { 0 };

int main()
{
	// kiiras
	for(int i = 0; i < 3; ++i)
		for(int j = 0; j < 3; ++j)
			cout << "mat[" << i << "][" << j << "]:" << mat[i][j] << endl;




	for(int i = 0; i < 3; ++i)
		for(int j = 0; j < 3; ++j)
			ptrmat[i][j] = &(mat[i][j]);
	
	
	
	
	for(int i = 0; i < 3; ++i)
		for(int j = 0; j < 3; ++j)
			*(ptrmat[i][j]) = 5;


	// kiiras
	for(int i = 0; i < 3; ++i)
		for(int j = 0; j < 3; ++j)
			cout << "mat[" << i << "][" << j << "]:" << mat[i][j] << endl;

	return 0;
}
