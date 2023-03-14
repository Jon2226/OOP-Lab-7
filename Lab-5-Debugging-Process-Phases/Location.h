#pragma once

class Location {
private:
	double latitude;
	double longitude;
public:
	Location(double latitude, double longitude);
	double getLatitude();
	double getLongitude();
	void setLatitude(double latitude);
	void setLongitude(double longitude);
	double distanceFrom(Location& location);

};

