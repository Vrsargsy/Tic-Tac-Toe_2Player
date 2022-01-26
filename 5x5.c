int a5[5][5];
void initMap5()
{
    for(int i=1; i<=5; i++)
        for (int j=1;j<=5;j++)
            a5[i][j]=0;
}


void draw_Map5()
{
    printf("Write number of row and column\n\n");
    printf ("  1 2 3 4 5\n");

    for(int i = 1; i <= 5; i++)
    {
        printf ("%d", i);
        for (int j = 1; j <= 5; j++)
        {
            if (a5[i][j]==0)    {printf("| ");};
            if (a5[i][j]==1)    {printf("|O");};
            if (a5[i][j]==2)    {printf("|X");};
        }
        printf ("|\n");
        printf ("____________\n");
    }
 }

void step5 (int n5)
{
    int player_input5;
    int column5;
    int row5;
    int check5 = 0;

    while (check5 == 0)
    {
        scanf("%d", &player_input5);
        column5 = player_input5 % 10;
        row5 = (player_input5 - column5) / 10;

        if (a5[row5][column5] == 0 && (player_input5 == 11 || player_input5 == 12 || player_input5 == 13 ||player_input5 == 14 || player_input5 == 15 || player_input5 == 21 \
        || player_input5 == 22 || player_input5 == 23 || player_input5 == 24 || player_input5 == 25 || player_input5 == 31 || player_input5 == 32 || player_input5 == 33 \
        || player_input5 == 34 || player_input5 == 35 || player_input5 == 41 || player_input5 == 42 || player_input5 == 43 || player_input5 == 44 || player_input5 == 45 \
        || player_input5 == 51 || player_input5 == 52 || player_input5 == 53 || player_input5 == 54 || player_input5 == 55))
            check5 = 1;
    }
    if (n5 == 1) a5[row5][column5] = 1;
    if (n5 == 2) a5[row5][column5] = 2;
        system("cls");
}

int game_check5()
{
    int res5 = 0;

    for (int i = 1; i <= 5; i++)            // O Rows                                // O
        if (a5[i][1] == 1 && a5[i][2] == 1 && a5[i][3] == 1 && a5[i][4] == 1 && a5[i][5] == 1) res5 = 1;

    for (int i = 1; i <= 5; i++)         // O Columns
    if (a5[1][i] == 1 && a5[2][i] == 1 && a5[3][i] == 1 && a5[4][i] == 1 && a5[5][i] == 1) res5 = 1;
                                    // O Diagonal
    if (a5[1][1]== 1 && a5[2][2] == 1 && a5[3][3] == 1 && a5[4][4] == 1 && a5[5][5] == 1)  res5 = 1;
    if (a5[1][5]== 1 && a5[2][4] == 1 && a5[3][3] == 1 && a5[4][2] == 1 && a5[5][1] == 1)  res5 = 1;

                                                                    // X
    for (int i = 1; i <= 5; i++)      // X Rows
        if (a5[i][1] == 2 && a5[i][2] == 2 && a5[i][3] == 2 && a5[i][4] == 2 && a5[i][5] == 2) res5 = 2;

                                // X Columns
    for (int i = 1; i <= 5; i++)
        if (a5[1][i] == 2 && a5[2][i] == 2 && a5[3][i] == 2 && a5[4][i] == 2 && a5[5][i] == 2) res5 = 2;

                                // X Diagonal
    if (a5[1][1]== 2 && a5[2][2] == 2 && a5[3][3] == 2 && a5[4][4] == 2 && a5[5][5] == 2)  res5 = 2;
    if (a5[1][5]== 2 && a5[2][4] == 2 && a5[3][3] == 2 && a5[4][2] == 2 && a5[5][1] == 2)  res5 = 2;

    return res5;     // If res == 2 X wins , res == 1 O wins , res == 0 Draw
}

