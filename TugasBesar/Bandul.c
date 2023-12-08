#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>
void main() {
    FILE *fptr;
    FILE *fptr2;
    int i,npoints;
    double length,g,dt,omega[250],theta[250],time[250];
    /* Two output files – one measuring omega, one measuring theta */
    fptr=fopen("pendout.dat","w");
    fptr2=fopen("pendoutb.dat","w");
    /* Preset the parameters from the formula */
    length=1.0; /* Preset length of pendulum (l) */
    g=9.8; /* Preset acceleration of gravity (m/s^2) */
    npoints=250; /* Preset number of points in loop */
    dt=0.04; /* Preset time interval (s) */
    /* Clear storage arrays to zero */
    for(i=0;i<npoints;i++) {
        omega[i]=0.0;
        theta[i]=0.0;
        time[i]=0.0;
    }
    /* Preset initial theta and omega values */
    theta[0]=0.2;
    omega[0]=0.0;
    /* Euler method */
    /* 𝟂n+1 = 𝟂n + (-g / l )* 𝞱*dt */
    /* and */
    /* 𝞱n+1 = 𝞱n + 𝟂n*dt */
    for(i=0;i<npoints;i++) {
        omega[i+1]=omega[i]-(g/length)*theta[i]*dt;
        theta[i+1]=theta[i]+omega[i]*dt;
        time[i+1]=time[i]+dt;
        fprintf(fptr,"%lf\t%lf\n",time[i+1],theta[i+1]);
        fprintf(fptr2,"%lf\t%lf\n",time[i+1],omega[i+1]);
    }
    fclose(fptr);
    fclose(fptr2);
}