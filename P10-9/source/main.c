#include<stdio.h>
#include<stdlib.h>
#include<time.h>
struct card 
{
	char *SUit;
	char *FAce;
};
typedef struct card Card;
void filldeck(Card * const wdeck, const char *wface[], const char *wsuit);
void shuffle(Card * const wdeck);
void deal(const Card * const wdeck);
void main()
{
	Card deck[52];
	const char *suit[4] = { "Heart","Diamond","Club","Spades" };
	const char *face[13] = { "Ace","Deuce","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Jack","Queen","King" };
//	int deck[4][13] = { 0 };
	srand(time(0));
	filldeck(deck, face, suit);
	shuffle(deck);
	deal(deck);
	system("pause");
}
void filldeck(Card * const wdeck, const char *wface[], const char *wsuit[])
{
	int i;
	for (i = 0; i <= 51; i++)
	{
		wdeck[i].FAce = wface[i % 13];
		wdeck[i].SUit = wsuit[ i / 13];
		//printf("%5s of %-8s%s", wdeck[i].face, wdeck[i].suit, (i + 1) % 4 ? "  " : "\n");
	}
}
void shuffle(Card * const wdeck)
{
	int i, j;
	Card temp;
		for (i = 0; i <= 51; i++)
		{
			j = rand() % 52;
			temp = wdeck[i];
			wdeck[i] = wdeck[j];
			wdeck[j] = temp;
		}
    }
void deal(const Card * const wdeck)
{
	int i;
	for (i = 0; i <= 51; i++)
	{
		printf("%5s of %-8s%s", wdeck[i].FAce, wdeck[i].SUit, (i + 1) % 4 ? "  " : "\n");
	}
}