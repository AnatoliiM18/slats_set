#include "slat_set.h"

int main()
{
	SlatSet seat(400, 420, Slat{ 450 });
	seat.printSlatSet();

	return 0;
}
