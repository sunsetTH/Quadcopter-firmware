#ifndef __MATRIX_H__
#define __MATRIX_H__

struct Matrix{
    float content[3][3];
};

struct Angle3D BodyToInertial(struct Angle3D *angle,struct Angle3D *currentAttitude);





#endif
