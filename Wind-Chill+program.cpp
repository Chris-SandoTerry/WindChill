#include<iostream>
#include<cmath>

using namespace std;

int main()
{

	int wind= -1;
	double tempature = -999;
	double windChill = 0;
	
	while (!(wind >= 0 && wind <= 80))
	{
		cout << "please enter the wind speed. " << endl;
		cin >> wind;
	
	}
	
	while (!(tempature >= -20 && tempature <= 80))
	{
	
		cout << "Please enter the tempature. " << endl;
		cin >> tempature;
	
	
	}
		
    if (wind <= 4)  
	{


		windChill = tempature;




	}
	else if (wind > 45)
	{

		windChill = 1.6 * tempature - 55.0;

		



	}
	else 
	{

		windChill = 91.4 - (10.45 + 6.69 * sqrt(wind) - .447 * wind) * (91.4 - tempature) / 22;			
	}

	cout << "The wind chill will be " << windChill << " . " << endl;

	
     return 0;

}
