/*
 * triangle.h
 *
 *  Created on: Oct 10, 2017
 *      Author: cheyenne
 */

#ifndef TRIANGLE_H_
#define TRIANGLE_H_

class Triangle {
public:
	int s1;
	int s2;
	int s3;

	Triangle(int, int, int);
	virtual ~Triangle();
	void getType();

};




#endif /* TRIANGLE_H_ */
