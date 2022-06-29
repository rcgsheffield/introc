
#ifndef IO_UTIL_VEC_H
#define IO_UTIL_VEC_H
// vec.h: interface for the vec class.
//
//////////////////////////////////////////////////////////////////////


//#pragma once



#include <stdlib.h>

#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <float.h>


#include <iostream.h>
#include <fstream.h>
#include <iomanip.h>


// No max or min for C++
#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))



double logistic(double activation);
// will be changed to values much higher than these
const int ROWS = 64; //Number of rows (length of first pattern)
const int COLS = 64; //Number of colums (length of second pattern)
const int MAXVEC = 64; //Default size of vector


class matrix;



class vec  
{

	    friend ostream& operator<< (ostream& s, vec& v1);
        friend class matrix;
        friend istream& operator>> (istream& s, vec& v1);
		int n;
		float *v;

public:
	void unit();
	float dot(vec &v1);
	vec  cross(vec &v1);
	vec(int size=MAXVEC, int val=0); //constructor
	vec(const vec &v1); //copy-initializer
	virtual ~vec();


		int length();
		float distance(vec& A);
		vec& normalise();
		vec& normaliseon();
		vec& scale(vec& minvec, vec& maxvec);
		// dot product of vector and complement
		float d_logistic();
		float maxval();
		void add( vec *v1, float c=1);
		void multiply( float c);
		vec& garble(float noise);
		vec& operator=(const vec &v1); //vector assignment
		vec &operator+(const vec &v1);
		vec operator+(const float d);
		//vector additive-assignment
		vec& operator+=(const vec& v1);

		//vector multiply by constant
		vec& operator*=(float c);
		// vector transpose multiply needs access to v array
		int operator==(const vec& v1);
		float operator[](int x);
		int vec::maxindex();
		vec& getstr(char *s);
		void putstr(char *s);
		float get(int x);
		
		vec operator-(const vec& v1);	//subtraction
		vec operator-(const float d);   //subtraction
		float operator*(const vec& v1); //dot-product
		vec operator*(float c); //multiply by constant
		int operator !=(const  vec v1);
		vec& sigmoid();
		vec& set(int i, float f=0);
		vec& setvec(int size, float *pf);
		     int load (FILE *f);
		     int save (FILE *f);
	    ostream& write(ostream& s, vec& v1);
		istream& read(istream& s, vec& v1);


}; //vector class

#endif

