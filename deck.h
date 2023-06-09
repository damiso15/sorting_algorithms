#ifndef DECK_H
#define DECK_H


/* C Standard Library */
#include <stdlib.h>
#include <stdio.h>


/* Data Structure */
/**
 * enum kind_e - same kind
 *
 * @SPADE: spade
 * @HEART: heart
 * @CLUB: club
 * @DIAMOND: diamond
 */
typedef enum kind_e
{
	SPADE = 0,
	HEART,
	CLUB,
	DIAMOND
} kind_t;


/**
 * struct card_s - Playing card
 *
 * @value: Value of the card
 * From "Ace" to "King"
 * @kind: Kind of the card
 */
typedef struct card_s
{
	const char *value;
	const kind_t kind;
} card_t;


/**
 * struct deck_node_s - Deck of card
 *
 * @card: Pointer to the card of the node
 * @prev: Pointer to the previous node of the list
 * @next: Pointer to the next node of the list
 */
typedef struct deck_node_s
{
	const card_t *card;
	struct deck_node_s *prev;
	struct deck_node_s *next;
} deck_node_t;


/* Prototype */
void sort_deck(deck_node_t **deck);
void sort_suit(deck_node_t **deck);
void sort_val(deck_node_t **deck);
void swap(deck_node_t **deck, deck_node_t *card1, deck_node_t *card2);
int vcmp(const card_t *card1, const card_t *card2);

#endif
