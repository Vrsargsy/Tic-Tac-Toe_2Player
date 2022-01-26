int a9[9][9];
void initMap9()
{
    for(int i = 1; i <= 9; i++)
        for (int j = 1; j <= 9 ; j++)
            a9[i][j] = 0;
}


void draw_Map9()
{
    printf("Write number of row and column\n\n");
    printf ("  1 2 3 4 5 6 7 8 9\n");

    for(int i = 1; i <= 9; i++)
    {
        printf ("%d", i);
        for (int j = 1; j <= 9; j++)
        {
            if (a9[i][j]==0)    {printf("| ");};
            if (a9[i][j]==1)    {printf("|O");};
            if (a9[i][j]==2)    {printf("|X");};
        }
        printf ("|\n");
        printf ("____________________\n");
    }
 }

void step9 (int n9)
{
    int player_input9;
    int column9;
    int row9;
    int check9 = 0;

    while (check9 == 0)
    {
        scanf("%d", &player_input9);
        column9 = player_input9 % 10;
        row9 = (player_input9 - column9) / 10;

        if (a9[row9][column9] == 0 && (player_input9 == 11 || player_input9 == 12 || player_input9 == 13 ||player_input9 == 14 || player_input9 == 15 || player_input9 == 16 \
        || player_input9 == 17 || player_input9 == 18 || player_input9 == 19 || player_input9 == 21 || player_input9 == 22 || player_input9 == 23 || player_input9 == 24 \
        || player_input9 == 25 || player_input9 == 26 || player_input9 == 27 || player_input9 == 28 || player_input9 == 29 || player_input9 == 31 || player_input9 == 32 \
        || player_input9 == 33 || player_input9 == 34 || player_input9 == 45 || player_input9 == 36 || player_input9 == 37 || player_input9 == 38 || player_input9 == 39 \
        || player_input9 == 41 || player_input9 == 42 || player_input9 == 43 || player_input9 == 44 || player_input9 == 45 || player_input9 == 46 || player_input9 == 47 \
        || player_input9 == 48 || player_input9 == 49 || player_input9 == 51 || player_input9 == 52 || player_input9 == 53 || player_input9 == 54 || player_input9 == 55 \
        || player_input9 == 56 || player_input9 == 57 || player_input9 == 58 || player_input9 == 59 || player_input9 == 61 || player_input9 == 62 || player_input9 == 63 \
        || player_input9 == 64 || player_input9 == 65 || player_input9 == 66 || player_input9 == 67 || player_input9 == 68 || player_input9 == 69 || player_input9 == 71 \
        || player_input9 == 72 || player_input9 == 73 || player_input9 == 74 || player_input9 == 75 || player_input9 == 76 || player_input9 == 77 || player_input9 == 78 \
        || player_input9 == 79 || player_input9 == 81 || player_input9 == 82 || player_input9 == 83 || player_input9 == 84 || player_input9 == 85 || player_input9 == 86 \
        || player_input9 == 87 || player_input9 == 88 || player_input9 == 89 || player_input9 == 91 || player_input9 == 92 || player_input9 == 93 || player_input9 == 94 \
        || player_input9 == 95 || player_input9 == 96 || player_input9 == 97 || player_input9 == 98 || player_input9 == 99))
            check9 = 1;
    }
    if (n9 == 1) a9[row9][column9] = 1;
    if (n9 == 2) a9[row9][column9] = 2;
        system("cls");
}

int game_check9()
{
    int res9 = 0;

    for (int i = 1; i <= 9; i++)            // O Rows                                // O
        if (a9[i][1] == 1 && a9[i][2] == 1 && a9[i][3] == 1 && a9[i][4] == 1 && a9[i][5] == 1 && a9[i][6] == 1 && a9[i][7] == 1 && a9[i][8] == 1 && a9[i][9] == 1) res9 = 1;

    for (int i = 1; i <= 9; i++)         // O Columns
        if (a9[1][i] == 1 && a9[2][i] == 1 && a9[3][i] == 1 && a9[4][i] == 1 && a9[5][i] == 1 && a9[6][i] == 1 && a9[7][i] == 1 && a9[8][i] == 1 && a9[9][i] == 1) res9 = 1;
                                    // O Diagonal
    if (a9[1][1] == 1 && a9[2][2] == 1 && a9[3][3] == 1 && a9[4][4] == 1 && a9[5][5] == 1 && a9[6][6] == 1 && a9[7][7] == 1 && a9[8][8] == 1 && a9[9][9] == 1) res9 = 1;
    if (a9[1][9]== 1 && a9[2][8] == 1 && a9[3][7] == 1 && a9[4][6] == 1 && a9[5][5] == 1 && a9[6][4] == 1 && a9[7][3] == 1 && a9[8][2] == 1 && a9[9][1] == 1)  res9 = 1;

                                                                    // X
    for (int i = 1; i <= 9; i++)      // X Rows
        if (a9[i][1] == 2 && a9[i][2] == 2 && a9[i][3] == 2 && a9[i][4] == 2 && a9[i][5] == 2 && a9[i][6] == 2 && a9[i][7] == 2 && a9[i][8] == 2 && a9[i][9] == 2) res9 = 2;

                                // X Columns
    for (int i = 1; i <= 9; i++)
        if (a9[1][i] == 2 && a9[2][i] == 2 && a9[3][i] == 2 && a9[4][i] == 2 && a9[5][i] == 2 && a9[6][i] == 2 && a9[7][i] == 2 && a9[8][i] == 2 && a9[9][i] == 2) res9 = 2;

                                // X Diagonal
    if (a9[1][1] == 2 && a9[2][2] == 2 && a9[3][3] == 2 && a9[4][4] == 2 && a9[5][5] == 2 && a9[6][6] == 2 && a9[7][7] == 2 && a9[8][8] == 2 && a9[9][9] == 2) res9 = 2;
    if (a9[1][9]== 2 && a9[2][8] == 2 && a9[3][7] == 2 && a9[4][6] == 2 && a9[5][5] == 2 && a9[6][4] == 2 && a9[7][3] == 2 && a9[8][2] == 2 && a9[9][1] == 2)  res9 = 2;

    return res9;     // If res == 2 X wins , res == 1 O wins , res == 0 Draw
}

