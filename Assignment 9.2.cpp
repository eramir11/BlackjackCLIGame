#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// NEW COMMENT

class Car
{
    private:
        int yearModel;                    // Holds the car's year model
        string make;                      // Holds the make of the car
        int speed;                        // Holds the car's current speed
    public:
        Car(int, string);                 // Constructor               
        
        // Mutators
        void accelerate();       
        void brake();
       
        // Accessors
        int getyearModel() const{        // Returns the car's year model.
            return yearModel; 
        }           
        string getMake() const{          // Returns the make of the car.
            return make;
        }
        int getSpeed() const{            // Returns the car's current speed.
            return speed;
        }
};   
Car::Car(int mYear, string mMake){
    yearModel = mYear;
    make = mMake;
    speed = 0;                          // Speed can be changed here
}

void Car::accelerate()
{
    speed += 5;
}

void Car::brake()
{
    speed -= 5;
}

int main()
{
    Car testCar(2009, "Jeep");

    cout << "The test car you are going to drive is a "
            << testCar.getMake() << " built in " << testCar.getyearModel() << ".\n\n";
    cout << "The engine is turned off, and your current speed is "
          << testCar.getSpeed() << " mp/h.\n\n";
   
    // Using the accelerate function
    cout << "The car is accelerating at 5 mp/h:\n";
    for (int accel = 0; accel < 5; accel++)
    {   
        testCar.accelerate();
        cout << "Your current speed is: " << setw(2) << testCar.getSpeed() << " mp/h\n";
    }

    // Using the brake function
    cout << "\nThe car slows down at 5 mp/h:\n";
    while(testCar.getSpeed() > 0)
    {
        testCar.brake();
        cout << "Your current speed is: " << setw(2) << testCar.getSpeed() << " mp/h\n";
    }

    return 0;
}