int a[3][3];
void initMap()
{
    for(int i = 1; i <= 3; i++)
        for (int j = 1;j <= 3;j++)
            a[i][j] = 0;
}


void draw_Map()
{
    printf("Write number of row and column\n\n");
    printf ("  1 2 3\n");

    for(int i = 1; i <= 3; i++)
    {
        printf ("%d", i);
        for (int j = 1; j <= 3; j++)
        {
            if (a[i][j]==0){printf("| ");};
            if (a[i][j]==1){printf("|O");};
            if (a[i][j]==2){printf("|X");};
        }
        printf ("|\n");
        printf ("________\n");
    }
 }

void step (int n)
{
    int player_input;
    int column;
    int row;
    int check = 0;

    while (check == 0)
    {
        scanf("%d", &player_input);
        column = player_input % 10;
        row = (player_input - column) / 10;

        if (a[row][column]==0 && (player_input == 11 || player_input == 12 || player_input == 13 || player_input == 21 \
        || player_input == 22 || player_input == 23 || player_input == 31 || player_input == 32 || player_input == 33 ))
            check = 1;
    }
    if (n == 1) a[row][column] = 1;
    if (n == 2) a[row][column] = 2;
                    system("cls");
}

int game_check()
{
    int res = 0;

    for (int i = 1; i <= 3; i++)            // O Rows                                // O
        if (a[i][1] == 1 && a[i][2] == 1 && a[i][3] == 1) res = 1;

    for (int i = 1; i <= 3; i++)         // O Columns
    if (a[1][i] == 1 && a[2][i] == 1 && a[3][i] == 1) res = 1;
                                    // O Diagonal
    if (a[1][1]== 1 && a[2][2] == 1 && a[3][3] == 1)  res = 1;
    if (a[1][3]== 1 && a[2][2] == 1 && a[3][1] == 1)  res = 1;

                                                                    // X
    for (int i = 1; i <= 3; i++)      // X Rows
        if (a[i][1] == 2 && a[i][2] == 2 && a[i][3] == 2) res = 2;

                                // X Columns
    for (int i = 1; i <= 3; i++)
        if (a[1][i] == 2 && a[2][i] == 2 && a[3][i] == 2) res = 2;

                                // X Diagonal
      if (a[1][1] == 2 && a[2][2] == 2 && a[3][3] == 2)  res = 2;
      if (a[1][3] == 2 && a[2][2] == 2 && a[3][1] == 2)  res = 2;
    return res;     // If res == 2 X wins , res == 1 O wins , res == 0 Draw
}
