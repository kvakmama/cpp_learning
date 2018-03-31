#include <stdio.h>
#ifndef LUSZI
#define LUSZI
#pragma message "Definialtuk LUSZI-t"
#endif	// LUSZI

#ifndef LUSZI
#define LUSZI_MEGINT
#pragma message "Definialtuk LUSZI_MEGINT-et"
#endif // LUSZI


#define O_EGY_CICA(cica) cica " egy cica\n"

#define CICA_PRINT(cica, fmt, ...) printf(cica " mondja: " fmt "\n", __VA_ARGS__)

int main()
{
	printf(O_EGY_CICA("Luszi"));
	// printf("Luszi egy cica\n");
	CICA_PRINT("Luszi", "%s", "MAJ");
	return 0;
}
