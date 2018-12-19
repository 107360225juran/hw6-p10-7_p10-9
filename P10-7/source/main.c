#include<stdio.h>
#include<stdlib.h>
struct card
{
	char *suit;
	char *face;
};
main()
{
	struct card aCard;
	struct card *cardptr;
	cardptr = &aCard;
	cardptr->face = "Ace";
	cardptr->suit = "Spades";
	
	printf("%s%s%s\n%s%s%s\n%s%s%s\n", aCard.face, " of ", aCard.suit,
		cardptr->face, " of ", cardptr->suit, (*cardptr).face, " of ", (*cardptr).suit);
	system("pause");
}