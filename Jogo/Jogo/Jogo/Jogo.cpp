// Jogo.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>

#define MAX_NAME 50
#define INITIAL_PLAYER_ENERGY 100
#define INITIAL_PLAYER_ROOM 0

struct Player{
	char name[ MAX_NAME ];
	int energy;
	int room;
};

void InitializePlayer(struct Player *pPlayer);
void ListPlayer(struct Player player);

int _tmain(int argc, char* argv[])
{
	struct Player player;

	InitializePlayer(&player);
	ListPlayer(player);

	system("pause");

	return 0;
}

void InitializePlayer(struct Player *pPlayer) {
	printf("Aventureiro, qual o seu nome? \n");
	gets(pPlayer->name);
	pPlayer->energy = INITIAL_PLAYER_ENERGY;
	pPlayer->room = INITIAL_PLAYER_ROOM;
}

void ListPlayer(struct Player player) {
	printf("\nPlayer : %s\n", player.name);
	printf("Energy : %d\n", player.energy);
	printf("Room : %d\n", player.room);
}
