/*! \file ornlm.cpp
	\author Omar Ocegueda
	\brief Optimized (Blockwise) Rician-corrected Nonlocal Means filter. Addapted from Pierrick's code with some low level optimizations
*/
#ifndef ORNLM_H
#define ORNLM_H

/*! \brief Optimized (Blockwise) Rician-corrected Nonlocal Means filter
	\param v specifies the local volume to look for similar patches: (2*v+1)^3. A plausible value is v=3.
	\param f specifies the size of the patches: (2*f+1)^3. A plausible value is f=1.
	\param h specifies the amount of smoothing. Plausible values are between 3% and 20% of the maximum value in the image
*/
void ornlm(double *ima, int ndim, int *dims, int v, int f, double h, double *fima);


void Average_block(double *ima,int x,int y,int z,int neighborhoodsize,double *average, double weight, int* vol_size);
void Value_block(double *Estimate, double *Label,int x,int y,int z,int neighborhoodsize,double *average, double global_sum, int* vol_size, double hh);
double distance(double* ima,int x,int y,int z,int nx,int ny,int nz,int f,int sx,int sy,int sz);
#endif
