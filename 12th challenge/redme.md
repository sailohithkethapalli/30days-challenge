Start.
Define ZONES = 5 and DAYS = 7.
Create usage[ZONES][DAYS] and dailyTarget[ZONES].
For each zone:- Ask for its daily target.
- If the target is below 100 or above 50,000 litres, ask again.
- For each of the 7 days, ask for the usage reading.
- If the reading is below 0 or above 50,000 litres, ask again.
For each zone:- Set weeklyTotal to 0.
- For each day, add that day’s usage to weeklyTotal.
- If the reading is greater than the zone’s daily target, display an alert for that day.
- Display the zone’s weekly total.
Stop.
