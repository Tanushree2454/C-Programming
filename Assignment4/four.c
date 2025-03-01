//  When an aircraft or an automobile is moving through the atmosphere, it must overcome a force
//  called drag that works against the motion of the vehicle. The drag force can be expressed as
//  F = 1
//  2CD× A× ρ× V2
//  where F is the force (in newtons), CD is the drag coefficient, A is the projected area of the
//  vehicle perpendicular to the velocity vector (in m2), is the density of the gas or fluid through
//  which the body is traveling (kg/m3 ), and V is the body’s velocity. The drag coefficient CD has
//  a complex derivation and is frequently an empirical quantity. Sometimes the drag coefficient
//  has its own dependencies on velocities: For an automobile, the range is from approximately
//  0.2 (for a very streamlined vehicle) through about 0.5. For simplicity, assume a streamlined
//  passenger vehicle is moving through air at sea level (where ρ = 1.23kg/m3 ). Write a program
//  that allows a user to input A and CD interactively and calls a function to compute and return
//  the drag force. Your program should call the drag force function repeatedly and display a table
//  showing the drag force for the input shape for a range of velocities from 0 m/s to 40 m/s in
//  increments of 5 m/s.
#include <stdio.h>

// Function to calculate drag force
void calculateDragForce(double *CD, double *A, double *rho, double *V, double *F) {
    *F = 0.5 * (*CD) * (*A) * (*rho) * (*V) * (*V); // Calculate drag force
}

int main() {
    double CD, A;
    double rho = 1.23; // Air density at sea level in kg/m^3
    double V, F;

    // Input drag coefficient and projected area
    printf("Enter the drag coefficient (CD): ");
    scanf("%lf", &CD);
    printf("Enter the projected area (A) in square meters: ");
    scanf("%lf", &A);

    // Display table header
    printf("\nVelocity (m/s)\tDrag Force (N)\n");
    printf("-------------------------------\n");

    // Loop through velocities from 0 to 40 m/s in increments of 5 m/s
    for (int i = 0; i <= 40; i += 5) {
        V = i; // Set velocity
        calculateDragForce(&CD, &A, &rho, &V, &F); // Call function to calculate drag force
        printf("%10d\t%10.2lf\n", i, F); // Print velocity and corresponding drag force
    }

    return 0;
}
