// Add brief description here

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
// Enter any other #includes that you deem necessary below


#define NUMROWS	 9    // map size
#define NUMCOLS  9    // map size
#define NUMWALKS 1000 // number of random walks
#define NUMSTEP  10   // number of steps in each walk
// Enter any other #defines as you deem necessary below


int main(void) {

    // Load the map
    char a[NUMROWS][NUMCOLS+1];

    int m, n;
    FILE* fp;
    fp = fopen("island_map.txt", "r");
    if (fp == NULL)
    {
        printf("map error!\n");
        exit(0);
    }
    for (m = 0; m < NUMROWS; m++)
    {
        for (n = 0; n < NUMCOLS; n++)
        {
            fscanf(fp, "%s", &a[m][n]);
        }
        fscanf(fp, "\n");
    }

    fclose(fp);

/*
    for (m = 0; m < 9; m++)
    {
        for (n = 0; n < 9; n++)
        {
            printf("%c", a[m][n]);//���
        }
        printf("\n");
    }*/
    int i, x = 1, y = 1;
    a[1][1] = 'o';
	int count=0;
	for (i = 0; i < 9; i++)
		puts(a[i]);

	char ch;
	int flag = 0;

	while (flag == 0)
	{
		ch = _getch();
		count++;
		if (ch == 's')
		{
			if (a[x + 1][y] != 'B')
			{
				a[x][y] = ' ';
				x++;
				a[x][y] = 'o';
				system("cls");
                for (i = 0; i < 9; i++)
                    puts(a[i]);
			}
			else
            {
                system("cls");
                printf("make it off the island\n");
                flag = 1;
                for (i = 0; i < 9; i++)
                    puts(a[i]);
            }
		}
		if (ch == 'w')
		{
			if (a[x - 1][y] != 'B')
			{
				a[x][y] = ' ';
				x--;
				a[x][y] = 'o';
				system("cls");
                for (i = 0; i < 9; i++)
                    puts(a[i]);
			}
			else
            {
                system("cls");
                printf("make it off the island\n");
                flag = 1;
                for (i = 0; i < 9; i++)
                    puts(a[i]);
            }
		}
		if (ch == 'a')
		{
			if (a[x][y - 1] != 'B')
			{
				a[x][y] = ' ';
				y--;
				a[x][y] = 'o';
				system("cls");
                for (i = 0; i < 9; i++)
                    puts(a[i]);
			}
			else
            {
                system("cls");
                printf("make it off the island\n");
                flag = 1;
                for (i = 0; i < 9; i++)
                    puts(a[i]);
            }
		}
		if (ch == 'd')
		{
			if (a[x][y + 1] != 'B')
			{
				a[x][y] = ' ';
				y++;
				a[x][y] = 'o';
				system("cls");
                for (i = 0; i < 9; i++)
                    puts(a[i]);
			}
			else
            {
                system("cls");
                printf("make it off the island\n");
                flag = 1;
                for (i = 0; i < 9; i++)
                    puts(a[i]);
            }
		}

		if (ch == 'q')
		{
			if (a[x - 1][y - 1] != 'B')
			{
				a[x][y] = ' ';
				x--;
				y--;
				a[x][y] = 'o';
				system("cls");
                for (i = 0; i < 9; i++)
                    puts(a[i]);
			}
			else
            {
                system("cls");
                printf("make it off the island\n");
                flag = 1;
                for (i = 0; i < 9; i++)
                    puts(a[i]);
            }
		}

		if (ch == 'e')
		{
			if (a[x - 1][y + 1] != 'B')
			{
				a[x][y] = ' ';
				x--;
				y++;
				a[x][y] = 'o';
				system("cls");
                for (i = 0; i < 9; i++)
                    puts(a[i]);
			}
			else
            {
                system("cls");
                printf("make it off the island\n");
                flag = 1;
                for (i = 0; i < 9; i++)
                    puts(a[i]);
            }
		}

		if (ch == 'z')
		{
			if (a[x + 1][y - 1] != 'B')
			{
				a[x][y] = ' ';
				x++;
				y--;
				a[x][y] = 'o';
				system("cls");
                for (i = 0; i < 9; i++)
                    puts(a[i]);
			}
			else
            {
                system("cls");
                printf("make it off the island\n");
                flag = 1;
                for (i = 0; i < 9; i++)
                    puts(a[i]);
            }
		}

		if (ch == 'x')
		{
			if (a[x + 1][y + 1] != 'B')
			{
				a[x][y] = ' ';
				x++;
				y++;
				a[x][y] = 'o';
				system("cls");
                for (i = 0; i < 9; i++)
                    puts(a[i]);
			}
			else
            {
                system("cls");
                printf("make it off the island\n");
                flag = 1;
                for (i = 0; i < 9; i++)
                    puts(a[i]);
            }
		}
	}


    // Perform random walks and calculate results
    
	printf("the total path lenth is %d", count);
	Sleep(5000);
	return 0;



    // Print results



    return 0;
}
