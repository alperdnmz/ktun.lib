#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	printf("\n\n\n\n\n\n\n\n\n"
	"\t\t\t\t\t******************************************\n"
	"\t\t\t\t\t* *   *  *     * ******   *     * *****  *\n"
	"\t\t\t\t\t* *  *   *     * *     *  *     * *    * *\n"
	"\t\t\t\t\t* * *    *     * *      * *     * *    * *\n"
	"\t\t\t\t\t* **     *     * *      * *     * *   *  *\n"
	"\t\t\t\t\t* **     *     * *      * *     * ***    *\n"
	"\t\t\t\t\t* * *    *     * *      * *     * *  *   *\n"
    "\t\t\t\t\t* *  *   *     * *     *  *     * *   *  *\n"
	"\t\t\t\t\t* *   *  ******* ******   ******* *    * *\n"
	"\t\t\t\t\t******************************************");
	for(;;)
	{
        printf("\a");
		system("COLOR 0");
		system("COLOR 1");
		system("COLOR 2");
		system("COLOR 3");
		system("COLOR 4");
		system("COLOR 5");
		system("COLOR 6");
		system("COLOR 7");
		system("COLOR 8");
		system("COLOR 9");
		printf("\a");
	}
	getch();
	return 0;
}
