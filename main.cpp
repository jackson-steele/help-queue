#include <iostream>
#include <string>

using namespace std;

int main()
{
  string origin = "Portland";
  string destination = "San Diego";
  string finalDestination = "Salt Lake City";
  string startDate = "November 10, 2018";
  string endDate = "November 14, 2018";
  double proposedBudget = 1500.00;
  int numPeople = 2;
  trip Trip;

  Trip.PlanTrip(origin, destination, finalDestination, startDate, endDate, proposedBudget, numPeople);
  Trip.ThinkAboutTrip();
  Trip.CheckIn("flight");
  Trip.PackBags();
  Trip.GoToAirport();
  Trip.Security();
  Trip.BoardPlane();
  Trip.Fly();
  Trip.LeaveAirport();
  Trip.CheckIn("hotel");
  Trip.ExploreCity();
  Trip.Dinner();
  Trip.Movie();
  Trip.Sleep();
  Trip.SundayMorning();
  Trip.Church();
  Trip.Temple();
  //Something else
  Trip.

  return 0;
}
