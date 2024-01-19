#pragma once

// Don't forget to enable the exercise in the SudentConfiguration.h file !
#include "StudentConfiguration.h"
#ifdef COMPILE_EXERCICE_1

enum class TemperatureUnits
{
	CELSIUS,
	FAHRENHEIT,
	KELVIN
};

class Solution1 // Temperature converter
{
public:
	static double ConvertTemperature(double value, TemperatureUnits fromUnit, TemperatureUnits toUnit){
    switch (fromUnit) {
    case TemperatureUnits::CELSIUS:
        switch (toUnit) {
        case TemperatureUnits::FAHRENHEIT:
            return celsiusToFahrenheit(value);
        case TemperatureUnits::KELVIN:
            return celsiusToKelvin(value);
        default:
            return value; // Same unit, no conversion needed
        }

    case TemperatureUnits::FAHRENHEIT:
        switch (toUnit) {
        case TemperatureUnits::CELSIUS:
            return fahrenheitToCelsius(value);
        case TemperatureUnits::KELVIN:
            return fahrenheitToKelvin(value);
        default:
            return value; // Same unit, no conversion needed
        }

    case TemperatureUnits::KELVIN:
        switch (toUnit) {
        case TemperatureUnits::CELSIUS:
            return kelvinToCelsius(value);
        case TemperatureUnits::FAHRENHEIT:
            return kelvinToFahrenheit(value);
        default:
            return value; // Same unit, no conversion needed
        }

    default:
        return value; // Same unit, no conversion needed
    }
}

private:
    static double celsiusToFahrenheit(double celsius) {
        return (celsius * 9 / 5) + 32;
    }

    static double celsiusToKelvin(double celsius) {
        return celsius + 273.15;
    }

    static double fahrenheitToCelsius(double fahrenheit) {
        return (fahrenheit - 32) * 5 / 9;
    }

    static double fahrenheitToKelvin(double fahrenheit) {
        return (fahrenheit - 32) * 5 / 9 + 273.15;
    }

    static double kelvinToCelsius(double kelvin) {
        return kelvin - 273.15;
    }

    static double kelvinToFahrenheit(double kelvin) {
        return (kelvin - 273.15) * 9 / 5 + 32;
    }
};

#endif
