// a program to print the score card

#include <stdio.h>

struct batting_record
{
    char name[100];
    int runs, balls, minutes, fours, sixers;
    float strike_rate;
};

typedef struct batting_record CricketPlayer;

void input_batting_record(CricketPlayer *batsman)
{
    printf("Enter player name: ");
    scanf("%99s", batsman->name);

    printf("Enter runs scored: ");
    scanf("%d", &batsman->runs);

    printf("Enter balls faced: ");
    scanf("%d", &batsman->balls);

    printf("Enter batting time in minutes: ");
    scanf("%d", &batsman->minutes);

    printf("Enter number of fours: ");
    scanf("%d", &batsman->fours);

    printf("Enter number of sixes: ");
    scanf("%d", &batsman->sixers);
}

void input_team_records(int total_players, CricketPlayer team[])
{
    for(int i = 0; i < total_players; i++)
    {
        printf("\n--- Player %d Details ---\n", i + 1);
        input_batting_record(&team[i]);
    }
}

void calculate_player_strike_rate(CricketPlayer *batsman)
{
    if(batsman->balls > 0)
        batsman->strike_rate = batsman->runs * 100.0 / batsman->balls;
    else
        batsman->strike_rate = 0;
}

void calculate_team_strike_rates(int total_players, CricketPlayer team[])
{
    for(int i = 0; i < total_players; i++)
    {
        calculate_player_strike_rate(&team[i]);
    }
}

void display_batting_record(CricketPlayer batsman)
{
    printf("%-15s %5d %6d %8d %6d %6d %12.2f\n",
           batsman.name,
           batsman.runs,
           batsman.balls,
           batsman.minutes,
           batsman.fours,
           batsman.sixers,
           batsman.strike_rate);
}

void display_team_statistics(int total_players, CricketPlayer team[])
{
    printf("\n========== BATTING SCORECARD ==========\n");

    printf("%-15s %5s %6s %8s %6s %6s %12s\n",
           "Player", "Runs", "Balls", "Minutes",
           "Fours", "Sixes", "Strike Rate");

    for(int i = 0; i < total_players; i++)
    {
        display_batting_record(team[i]);
    }
}

int main()
{
    int total_players;

    printf("Enter total number of players: ");
    scanf("%d", &total_players);

    if(total_players <= 0)
    {
        printf("Invalid number of players.\n");
        return 0;
    }

    CricketPlayer team[total_players];

    input_team_records(total_players, team);
    calculate_team_strike_rates(total_players, team);
    display_team_statistics(total_players, team);

    return 0;
}
