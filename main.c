#include <stdio.h>

int main(void)
{
int i;
char odpoved;
i = 0;
printf("Test hlavne mesta v jazyku C \n");
printf("Stlac ENTER pre pokracovanie");
printf("\n");
scanf("%c", &odpoved);
printf("1. otazka \n");
printf("Hlavne mesto Nemecka? \n");
printf("a. Berlin \n");
printf("b. Mnichov \n");
printf("c. Lipsko \n");
printf ("Tvoja odpoved je: \n");
scanf(" %c", &odpoved);
printf("\n");
if ((odpoved == 'A') || (odpoved == 'a'))
//odpoved = getchar();
{
      i = i + 1;
}

printf("2. otazka \n");
printf("Hlavne mesto Talianska? \n");
printf("a. Benatky \n");
printf("b. Rim \n");
printf("c. Milano \n");
printf ("Tvoja odpoved je: \n");
scanf(" %c", &odpoved);
printf("\n");
if ((odpoved == 'B') || (odpoved == 'b'))
//odpoved = getchar();
{
      i = i + 1;
}

printf("3. otazka \n");
printf("Hlavne mesto Holandska \n");
printf("a. Rotterdam \n");
printf("b. Amsterdam \n");
printf("c. Haag \n");
printf ("Tvoja odpoved je: \n");
scanf(" %c", &odpoved);
printf("\n");
if ((odpoved == 'B') || (odpoved == 'b'))
//odpoved = getchar();
{
      i = i + 1;
}

printf("4. otazka \n");
printf("Hlavne mesto Slovenska? \n");
printf("a. Bratislava \n");
printf("b. Zilina \n");
printf("c. Dunajska Streda \n");
printf ("Tvoja odpoved je: \n");
scanf(" %c", &odpoved);
printf("\n");
if ((odpoved == 'A') || (odpoved == 'a'))
//odpoved = getchar();
{
      i = i + 1;
}

printf("5. otazka \n");
printf("Hlavne mesto Slovinska? \n");
printf("a. Lublana \n");
printf("b. Piran \n");
printf("c. Bled \n");
printf ("Tvoja odpoved je: \n");
scanf(" %c", &odpoved);
printf("\n");
if ((odpoved == 'a') || (odpoved == 'A'))
//odpoved = getchar();
{
      i = i + 1;
}

printf("6. otazka \n");
printf("Hlavne mesto Svedska? \n");
printf("a. Kiruna \n");
printf("b. Stokholm \n");
printf("c. Goteborg \n");
printf ("Tvoja odpoved je: \n");
scanf(" %c", &odpoved);
printf("\n");
if ((odpoved == 'b') || (odpoved == 'B'))
//odpoved = getchar();
{
      i = i + 1;
}

printf("7. otazka \n");
printf("Hlavne mesto Norska? \n");
printf("a. Oslo \n");
printf("b. Kristiansand \n");
printf("c. Bergen \n");
printf ("Tvoja odpoved je: \n");
scanf(" %c", &odpoved);
printf("\n");
if ((odpoved == 'A') || (odpoved == 'a'))
//odpoved = getchar();
{
      i = i + 1;
}

printf("8. otazka \n");
printf("Hlavne mesto Rumunska ? \n");
printf("a. Bukurest \n");
printf("b. Sibiu \n");
printf("c. Kostanca \n");
printf ("Tvoja odpoved je: \n");
scanf(" %c", &odpoved);
printf("\n");
if ((odpoved == 'A') || (odpoved == 'a'))
//odpoved = getchar();
{
      i = i + 1;
}

printf("9. otazka \n");
printf("Hlavne mesto Rumunska ? \n");
printf("a. Pripiat \n");
printf("b. Kyjev \n");
printf("c. Lvov \n");
printf ("Tvoja odpoved je: \n");
scanf(" %c", &odpoved);
printf("\n");
if ((odpoved == 'b') || (odpoved == 'B'))
//odpoved = getchar();
{
      i = i + 1;
}

printf("10. otazka \n");
printf("Hlavne mesto Vatikanu ? \n");
printf("a. Vatikan \n");
printf("b. Martin \n");
printf("c. Levoca \n");
printf ("Tvoja odpoved je: \n");
scanf(" %c", &odpoved);
printf("\n");
if ((odpoved == 'A') || (odpoved == 'a'))
//odpoved = getchar();
{
      i = i + 1;
}
else i--; 
printf ("Tvoj pocet bodov je %d/10 \n", i);

      return 0;
}