char* commission(int locks, int stocks, int barrels)
{
	char result[30];
	double lockPrice, stockPrice, barrelPrice;
	double lockSales, stockSales, barrelSales;
	double totalSales, commission;

	lockPrice = 45.0;
	stockPrice = 30.0;
	barrelPrice = 25.0;

	//
	lockSales = locks * lockPrice;
	stockSales = stocks * stockPrice;
	barrelSales = barrels * barrelPrice;
	totalSales = lockSales + stockSales + barrelSales;
	
	if (locks > 70 || locks < 1) {
		sprintf(result, "locks not in 1...70");
	}
	else if (stocks > 80 || stocks < 1) {

		sprintf(result, "stocks not in 1...80");
	}
	else if (barrels > 90 || barrels < 1) {

		sprintf(result, "barrels not in 1...90");
	}
	else if (totalSales > 1800.0) {
		commission = 1000.0 * 0.1 + 800.0 * 0.15 + (totalSales - 1800.0) * 0.2;
		sprintf(result, "$%lf", commission);
	}
	else if (totalSales > 1000.0) {
		commission = 1000.0 * 0.1 + (totalSales - 1000.0) * 0.15;
		sprintf(result, "$%lf", commission);
	}
	else {
		commission = totalSales * 0.1;
		sprintf(result, "$%lf", commission);
	}

	return result;
}
