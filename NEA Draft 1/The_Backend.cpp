#include <iostream>
#include <cmath>
#include <vector>

// Constants
const double G = 6.67430e-11; // Gravitational constant (m^3 kg^-1 s^-2)
const double TIME_STEP = 0.01; // Time step for simulation (seconds)

// Structure to represent a celestial body
struct Body {
    double mass; // Mass of the body (kg)
    double x, y; // Position of the body (meters)
    double vx, vy; // Velocity of the body (meters/second)
};

// Function to calculate the gravitational force between two bodies
void calculateForce(const Body& a, const Body& b, double& fx, double& fy) {
    double dx = b.x - a.x;
    double dy = b.y - a.y;
    double distance = std::sqrt(dx * dx + dy * dy);
    if (distance == 0) return; // Avoid division by zero

    double force = (G * a.mass * b.mass) / (distance * distance);
    fx = force * (dx / distance);
    fy = force * (dy / distance);
}

// Function to update the position and velocity of a body
void updateBody(Body& body, double fx, double fy) {
    double ax = fx / body.mass;
    double ay = fy / body.mass;

    body.vx += ax * TIME_STEP;
    body.vy += ay * TIME_STEP;

    body.x += body.vx * TIME_STEP;
    body.y += body.vy * TIME_STEP;
}

int main() {
    // Create celestial bodies
    std::vector<Body> bodies = {
        {5.972e24, 0, 0, 0, 0}, // Earth
        {7.348e22, 384400000, 0, 0, 1022} // Moon
    };

    // Simulation loop
    for (int step = 0; step < 1000; ++step) {
        std::vector<std::pair<double, double>> forces(bodies.size(), {0, 0});

        // Calculate forces between all pairs of bodies
        for (size_t i = 0; i < bodies.size(); ++i) {
            for (size_t j = 0; j < bodies.size(); ++j) {
                if (i != j) {
                    double fx, fy;
                    calculateForce(bodies[i], bodies[j], fx, fy);
                    forces[i].first += fx;
                    forces[i].second += fy;
                }
            }
        }

        // Update bodies based on calculated forces
        for (size_t i = 0; i < bodies.size(); ++i) {
            updateBody(bodies[i], forces[i].first, forces[i].second);
        }

        // Output positions for visualization
        std::cout << "Step " << step << ":\n";
        for (const auto& body : bodies) {
            std::cout << "Body at (" << body.x << ", " << body.y << ")\n";
        }
    }

    return 0;
}