// Weather forcasting system

#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <cmath> //for the mathematical functions

using namespace std;

// Enumeration for weather conditions

enum class WeatherCondition
{
    SUNNY,
    CLOUDY,
    RAINY,
    SNOWY,
    WINDY
};

// Structure for daily weather data
struct DailyWeather
{
    string date;                // Date of the weather report
    double temperature;         // Temperature in Celsius
    double humidity;            // Humidity percentage
    WeatherCondition condition; // Weather condition

    // Constructor for DailyWeather
    DailyWeather(string d, double t, double h, WeatherCondition c)
        : date(d), temperature(t), humidity(h), condition(c) {}
};

//Base class for the weatherforacast
class Weatherforcast{
    protected:
     vector<DailyWeather> forecasts; //vector to store daily weather forcast

     public:
     //Function to add a daily weather foracast
     void addforecast(const DailyWeather& forecast){
        forecasts.push_back(forecast);

     }
      //functio to calcaulte average temperature
      double calculateAverageTemperature() const{
        if (forecasts.empty()) return 0.0;
        double totalTemp = 0.0;
        for (const auto& forecast :forecasts)
        {
            totalTemp += forecast.temperature;

        }
        return totalTemp /forecasts.size();
      }

      //Function to diaplay all forecasts
      void displayForecasts() const {
        cout<<"Weather Forecast: \n";
        for (const auto& forecast :forecasts){
            cout<<"Date: "<<forecast.date
            <<", Temparature: "<<forecast.temperature<<"°C"
            <<", Humidity: "<<forecast.humidity<<"%"
            <<", Condition: " <<getWeatherConditionString(forecast.condition) <<endl;
        }

      }

      //Function tp get string representation fo weather condition
      string getWeatherConditionString(WeatherCondition condition) const {
        switch (condition)
        {
        case WeatherCondition::SUNNY: return "Sunny";
        case WeatherCondition::CLOUDY: return "Cloudy";
        case WeatherCondition::RAINY: return "Rainy";
        case WeatherCondition::SNOWY: return "Snowy";
        case WeatherCondition::WINDY: return "Windy";
        default: return "Unknown";


      }
}


// Virtual destructor
virtual ~Weatherforcast(){}
};

//Derived class for extendedweatherforecast
class ExtendedweatherForecast : public Weatherforcast
{

    public:
    //Function t display  extended forecast summary
    void displayEntendedSummary() const {
        cout<<"===Extended Weather Summary ===\n";
        cout<<"Average Temperature: "<<fixed<< setprecision(2)<<calculateAverageTemperature()<<"°C\n";
        cout<<" Total Forecasts: "<<forecasts.size() <<endl;
    }
};

int main(){
    //Create an instance of entendedweatherforcast
    ExtendedweatherForecast myForecast;

    //Adding daily waether forecasts

    myForecast.addforecast(DailyWeather("2023-10-01", 25.0, 60.0, WeatherCondition::SUNNY));
    myForecast.addforecast(DailyWeather("2023-10-01", 25.0, 60.0, WeatherCondition::CLOUDY));
    myForecast.addforecast(DailyWeather("2023-10-01", 25.0, 60.0, WeatherCondition::RAINY));
    myForecast.addforecast(DailyWeather("2023-10-01", 25.0, 60.0, WeatherCondition::SNOWY));
    myForecast.addforecast(DailyWeather("2023-10-01", 25.0, 60.0, WeatherCondition::WINDY));

    //Display all forecasts
    myForecast.displayForecasts();
    cout<< endl;
    //Display extended summary
    myForecast.displayEntendedSummary();
    
    return 0;

}