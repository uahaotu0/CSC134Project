#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	// variables
	int gSpeed, pSpeed, cores, resolution;
	double multiplier, performanceScore;
	string resolutionString, quality;
	string title = "Computer Hardware Graphics Quality Recommendation Tool";
	

	cout << "Please enter the clock speed (in Megahertz) of your graphics card: ";
	cin >> gSpeed;
	

	if(gSpeed < 0)
	{
		cout << "Invalid graphics card speed entered. Program will terminate.";
		return 0;
	}
	

	cout << "Please enter the clock speed (in Megahertz) of your processor: ";
	cin >> pSpeed;
	

	if(pSpeed < 0)
	{
		cout << "Invalid processor speed entered. Program will terminate.";
		return 0;
	}
	

	cout << "Please enter the number cores of your processor: ";
	cin >> cores;
	

	if(cores < 0)
	{
		cout << "Invalid number of cores entered. Program will terminate.";
		return 0;
	}
	

	cout << "What is the resolution of your monitor? \n";
	cout << "\t 1. 1280 x 720 \n"; 
	cout << "\t 2. 1920 x 1080 \n";
	cout << "\t 3. 2560 x 1440 \n";
	cout << "\t 4. 3840 x 2160 \n";
	cout << "Please select from the options above: ";
	cin >> resolution;
	

	// string
	switch(resolution)
	{
		case 1: // 1280 x 720
			multiplier = 1;
			resolutionString = "1280 x 720";
			break;
		case 2: // 1920 x 1080
			multiplier = 0.75;
			resolutionString = "1920 x 1080";
			break;
		case 3: // 2560 x 1440
			multiplier = 0.55;
			resolutionString = "2560 x 1440";
			break;
		case 4: // 3840 x 2160
			multiplier = 0.35;
			resolutionString = "3840 x 2160";
			break;
		default:
			// error
			cout << "Invalid resolution menu choice. Program will terminate.";
			return 0;
			break;
	}
	

	performanceScore = ((5 * gSpeed) + (cores * pSpeed)) * multiplier;
	

	if(performanceScore > 17000)
	{
		quality = "Ultra";
	}
	else if(performanceScore > 15000 and performanceScore <= 17000)
	{
		quality = "High";
	}
	else if(performanceScore > 13000 and performanceScore <= 15000)
	{
		quality = "Medium";
	}
	else if(performanceScore > 11000 and performanceScore <= 13000)
	{
		quality = "Low";
	}
	else
	{
		quality = "Unable to Play";
	}
	

	cout << endl << endl << title << endl << endl;
	cout << setprecision(2) << showpoint << fixed;
	cout << "GPU Clock Speed: " << gSpeed << " MHz" << endl;
	cout << "CPU Clock Speed: " << pSpeed << " MHz" << endl;
	cout << "Number of cores: " << cores << endl;
	cout << "Monitor Resolution: " << resolutionString << endl;
	cout << "Performance Score: " << performanceScore << endl;
	cout << "Recommended Graphics Quality: " << quality << endl;
	
	system("pause");
}





