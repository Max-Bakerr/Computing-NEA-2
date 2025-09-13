#include <iostream>
#include <cmath>

struct Position{
    double x;
    double y;
};

struct Velocity{
    double x;
    double y;
};

struct Acceleration{
    double x;
    double y;
};

struct ResultantForce{
    double x;
    double y;
};

// think this is necessary, explained in front of notebook

class Planet{
    public:
        std::string name;
        double mass;
        Position position;
        Velocity velocity;
        Acceleration acceleration;
        bool trailPath;
        double radius;

    Planet(std::string name, double mass, Position position, Velocity velocity, Acceleration acceleration, bool trailPath){
        this->name = name;
        this->mass = mass;
        this->position = position;
        this->velocity = velocity;
        this->acceleration = acceleration;
        this->trailPath = trailPath;
    }

    int getRadius(int mass){
        radius = mass * 1;   // as mentioned in design, a constant, k, will decide the value for the radius. For now I am using 1 for simplicity.  
        //feel like this could be in the constructor, for version 2 maybe 
    }

    double distanceToPlanet(Position planet2){
        double distance;
        distance = sqrt(pow((planet2.x-position.x),2) + pow((planet2.y-position.y),2));
        return distance;
    }

    double applyGravitationalForce(double mass, double mass2, double distance){
        double Force;
        Force = (6.67 * pow(10,-11)) * ((mass*mass2) / pow(distance,2));
        return Force;
    }

    double calculateAngle(Position position, Position planet2){
        double Angle;
        Angle = atan(abs(position.x - planet2.x)/abs(position.y - planet2.y));
        return Angle;
    }

    double calculateResultantForce();

};