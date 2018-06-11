#pragma warning(disable:4996)
#include<stdio.h>
#define NUM_RANKS 13
#define NUM_SUITS 4
#define NUM_CARDS 5

int num_in_rank[NUM_RANKS + 1]; //배열 index는 1에서 13까지 쓰겠다는 것임.
int num_in_suit[NUM_SUITS];

void init_data()
{
	int rank, suit;
	for (rank = 0; rank < NUM_RANKS; rank++)
		num_in_rank[rank] = 0;
	for (suit = 0; suit < NUM_SUITS; suit++)
		num_in_suit[suit] = 0;
}
bool check_overlap(int flag[],int i)
{
	if(flag[i] == 1)
			return true;
	
	return false;
}
bool check_rank_input_error(char rank_ch)
{
	if(rank_ch == 'a' || 49 < rank_ch && rank_ch < 58 || 
		rank_ch == 't' || rank_ch == 'j' || rank_ch=='q' || rank_ch=='k')
			return false;
	getchar();
	printf("Out Of rank Range. Try again\n");
	return true;
}
bool check_suit_input_error(char suit_ch)
{
	if(suit_ch == 'c' || suit_ch == 'd' || suit_ch == 'h' || suit_ch =='s')
		return false;
	getchar();
	printf("Out Of suit_Range. Try again\n");
	return true;
}
void read_cards(void)
{
	char ch, rank_ch, suit_ch;
	int rank, suit;
	init_data();
	int cards_read = 0;
	int flag[52] = { 0 };

	while (cards_read < NUM_CARDS)
	{
		printf("Enter a card: ");
		scanf(" %c", &rank_ch);
		if (check_rank_input_error(rank_ch))
			continue;
			switch (rank_ch)
			{
			case 'a': rank = 1; break;
			case '2': rank = 2; break;
			case '3': rank = 3; break;
			case '4': rank = 4; break;
			case '5': rank = 5; break;
			case '6': rank = 6; break;
			case '7': rank = 7; break;
			case '8': rank = 8; break;
			case '9': rank = 9; break;
			case 't': rank = 10; break;
			case 'j': rank = 11; break;
			case 'q': rank = 12; break;
			case 'k': rank = 13; break;
			}
			
			scanf(" %c", &suit_ch);
			if (check_suit_input_error(suit_ch))
				continue;
			switch (suit_ch)
			{
			case 'c': suit = 0; break;
			case 'd': suit = 1; break;
			case 'h': suit = 2; break;
			case 's': suit = 3; break;
			}

			num_in_rank[rank]++;
			num_in_suit[suit]++;
			cards_read++;

			int idx = suit * 13 + rank;
			if (check_overlap(flag, idx))
			{
				printf("Same Card. Try again\n");
				num_in_rank[rank]--;
				num_in_suit[suit]--;
				cards_read--;
			}
			else
				flag[idx] = 1;
		}
}
int check_flush(int num_in_suit[]) //5장이 같은 문양이면 됨.
{
	for (int i = 0; i < NUM_SUITS; i++)
	{
		if (num_in_suit[i] == 5)
			return 1;
	}
	return 0;
}
int check_straight(int num_in_rank[]) //5장 숫자가 연속되면 됨.
{
	int straight = 0;
	for (int i = 1; i < 10; i++)
	{
		if(num_in_rank[i] == 1 && num_in_rank[i+1] == 1 && num_in_rank[i+2]
			&& num_in_rank[i+3] == 1 && num_in_rank[i+4] == 1)
				return 1;
	}
	return 0;
}
int check_four_cards(int num_in_rank[])
{
	for (int i = 1; i < NUM_RANKS + 1; i++)
	{
		if (num_in_rank[i] == 4)
			return 1;
	}
	return 0;
}
int check_three_cards(int num_in_rank[])
{
	for (int i = 1; i < NUM_RANKS + 1; i++)
	{
		if (num_in_rank[i] == 3)
			return 1;
	}
	return 0;
}
int check_pairs(int num_in_rank[])
{
	int count = 0;
	for (int i = 1; i < NUM_RANKS + 1; i++)
	{
		if (num_in_rank[i] == 2)
			count++;
	}
	if (count == 1) return 1;
	else if (count == 2) return 2;
	return 0;
}

void analyze_hand()
{
	if (check_flush(num_in_suit) == 1 && check_straight(num_in_rank) == 0)
		printf("Flush\n");
	else if (check_flush(num_in_suit) == 1 && check_straight(num_in_rank) == 1)
		printf("Straight Flush\n");
	else if (check_straight(num_in_rank) == 1 && check_flush(num_in_suit) == 0)
		printf("Straight\n");
	else if (check_four_cards(num_in_rank) == 1)
		printf("Four Cards\n");
	else if (check_three_cards(num_in_rank) == 1 && check_pairs(num_in_rank) == 1)
		printf("Full House\n");
	else if (check_three_cards(num_in_rank) == 1 && check_pairs(num_in_rank) == 0)
		printf("Three Cards\n");
	else if (check_three_cards(num_in_rank) == 0 && check_pairs(num_in_rank) == 1)
		printf("One Pairs\n");
	else if (check_pairs(num_in_rank) == 2)
		printf("Two Pairs\n");
	else
		printf("High Card\n");
}

int main()
{
	char ch;
	while (1)
	{
		read_cards();
		analyze_hand();
		
		printf("Play again ? ");
		scanf(" %c", &ch);
		if (ch != 'y' && ch != 'Y')
			break;
	}
	return 0;
}