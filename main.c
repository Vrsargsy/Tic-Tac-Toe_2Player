#include <stdio.h>

int main (void)
{
   Start: printf("Select game mode:\n[1] 3x3\n[2] 5x5\n[3] 9x9\n");
    int mode;
    scanf("%d", &mode);
    system("cls");

    if(mode == 1)
    {
        int game = 0;
        initMap();
        draw_Map();

        while (game == 0)
        {
            step(2);
            draw_Map();
            game = game_check();
            if (game == 0)
            {
                step(1);
                draw_Map();
                game = game_check();
            }
        }

        if (game == 1)  printf ("Zero Won !\n");
        if (game == 2)  printf ("Cross Won !\n");
    }
    else if(mode == 2)
    {
        int game5 = 0;
        initMap5();
        draw_Map5();

        while (game5 == 0)
        {
            step5(2);
            draw_Map5();
            game5 = game_check5();
            if (game5 == 0)
            {
                step5(1);
                draw_Map5();
                game5 = game_check5();
            }
        }

        if (game5 == 1)  printf ("Zero Won !\n");
        if (game5 == 2)  printf ("Cross Won !\n");
    }
    else if(mode == 3)
    {
        int game9 = 0;
        initMap9();
        draw_Map9();

        while (game9 == 0)
        {
            step9(2);
            draw_Map9();
            game9 = game_check9();
            if (game9 == 0)
            {
                step9(1);
                draw_Map9();
                game9 = game_check9();
            }
        }

        if (game9 == 1)  printf ("Zero Won !\n");
        if (game9 == 2)  printf ("Cross Won !\n");
    }
    else
    {
        printf("Oops, you're wrong. Select one of the modes 1 2 3\n");
        goto Start;
    }
        getch();
}
