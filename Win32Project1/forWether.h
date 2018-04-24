struct Period
{
	int *day;
	int *month;
	int *year;
};

struct Weather
{
	Period *period;
	int *mediumPoint;
	int *minPoint;
	int *maxPoint;
	int *nOfObserv;
};
