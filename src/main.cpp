/*
 * Created by Geoff on 7/27/2023
 */

#include <string>
#include "./headers/person.h"

using namespace std;

int
main()
{
	const int AGE = GetAge();
	printf("Hello, I am %d years old", AGE);
	return 0;
}

