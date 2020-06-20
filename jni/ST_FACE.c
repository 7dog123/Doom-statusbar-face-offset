#include <stdio.h>

#define ST_FACESTRIDE 8
#define ST_NUMPAINFACES 5

int ST_calcPainOffset(int player_health)
{
    int		health;
    static int	lastcalc;
    static int	oldhealth = -1;
    
    health = player_health > 100 ? 100 : player_health;

    if (health != oldhealth)
    {
	lastcalc = ST_FACESTRIDE * (((100 - health) * ST_NUMPAINFACES) / 101);
	oldhealth = health;
    }
    return lastcalc;
}

int main()
{
	for (int health = 120; health > 0; health--)
	{
		printf ("%d health returns offset %d\n", health, ST_calcPainOffset(health));
	}
	return 0;
}
