/*
 * GLUT Shapes Demo
 *
 * Written by Nigel Stewart November 2003
 *
 * This program is test harness for the sphere, cone
 * and torus shapes in GLUT.
 *
 * Spinning wireframe and smooth shaded shapes are
 * displayed until the ESC or q key is pressed.  The
 * number of geometry stacks and slices can be adjusted
 * using the + and - keys.
 */

#include<windows.h>
#ifdef _APPLE_
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <stdlib.h>
#include<stdio.h>
#include<math.h>
#define PI 3.1416

void init()
{
    glClearColor(0.0f,0.0f,0.0f,0.0f);
    glOrtho(-5,+5,-10,+10,-5,+5);

}

void circle(float radiusX,float radiusY)
{
    int i=0;
    float angle= 0;

    glBegin(GL_POLYGON);
    for(i=0;i<100;i++)
    {
        angle=2*PI*i/100;
        glVertex2d(radiusX*cos(angle),radiusY*sin(angle));
        printf("Angle : %f , X-Axis : %f , Y-Axis : %f\n",angle,radiusX*cos(angle),radiusY*sin(angle));

    }

glEnd();
}

void myDisplay()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.80,0.35,0.27);
    circle(4,8);


    glPushMatrix();
    glColor3f(1,1,1);
    glTranslated(0,5,0);
    circle(1,2);
    glPopMatrix();



    glPushMatrix();
    glColor3f(1,1,0);
    glTranslated(0,0,0);
    circle(1,2);
    glPopMatrix();


glPushMatrix();
    glColor3f(1,0,1);
    glTranslated(0,-5,0);
    circle(1,2);
    glPopMatrix();




glPushMatrix();
    glColor3f(0,1,1);
    glTranslated(-2.5,0,0);
    circle(1,2);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0,1,1);
    glTranslated(2.5,0,0);
    circle(1,2);
    glPopMatrix();









    glFlush();
    //glutSwapBuffers();

}


int main()
{

    glutInitWindowSize(1100,700);
    glutInitWindowPosition(10,10);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);

    glutCreateWindow("First Lab");

    init();
    glutDisplayFunc(myDisplay);
    glutMainLoop();

    return 0;
}
