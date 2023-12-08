/* pendme2.c */
/*
Euler-Cromer method
 */
#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>
void main() {
    FILE *fptr;
    FILE *fptr2;
    int i,npoints;
    double length,g,dt,omega[250],theta[250],time[250];
    /* Two output files – one measuring omega, one measuring theta */
    fptr=fopen("pendout2.dat","w");
    fptr2=fopen("pendout2b.dat","w");
    /* Preset the parameters from the formula */
    length=1.0; /* Preset length of pendulum (l) */
    g=9.8; /* Preset acceleration of gravity (m/s2) */

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
    /* Euler-Cromer method */
    /* 𝟂n+1 = 𝟂n + (-g / l )* 𝞱*dt */
    /* and */
    /* 𝞱n+1 = 𝞱n + 𝟂n+1*dt*/
    for(i=0;i<npoints;i++) {
        omega[i+1]=omega[i]-(g/length)*theta[i]*dt;
        theta[i+1]=theta[i]+omega[i+1]*dt;
        time[i+1]=time[i]+dt;
        printf("%lf %lf\n", time[i+1], theta[i+1]);
        printf("%lf %lf\n", time[i+1], omega[i+1]);
        fprintf(fptr,"%lf\t%lf\n",time[i+1],theta[i+1]);
        fprintf(fptr2,"%lf\t%lf\n",time[i+1],omega[i+1]);
    }
    fclose(fptr);
    fclose(fptr2);
    }