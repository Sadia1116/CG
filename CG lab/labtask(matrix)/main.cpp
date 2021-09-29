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
    circle(4,8);          //head


    glPushMatrix();
    glColor3f(1,1,1);
    glTranslated(2,2,0);
    circle(1,2);         //left eye
    glPopMatrix();


    glPushMatrix();
    glColor3f(1,0,1);
    glTranslated(-2,2,0);
    circle(1,2);         //right eye
    glPopMatrix();

    glPushMatrix();
    glColor3f(1,1,0);
    glTranslated(0,0,0);
    circle(.5,4);       //nose
    glPopMatrix();

    glPushMatrix();
    glColor3f(0,1,1);
    glTranslated(0,-6,0);
    circle(1,1);         //mouth
    glPopMatrix();






/*


    /*
    glPushMatrix();
    glTranslated(-2,-3,0);
    glBegin(GL_POLYGON);

        glColor3f(0.80,0.35,0.27);
        glVertex2d(0,8);
        glColor3f(0.93,0.22,0.54);
        glVertex2d(3,4);
        glColor3f(1,0.75,0.14);
        glVertex2d(3,-4);
        glColor3f(0.18,0.54,0.38);
        glVertex2d(0,-8);
        glColor3f(0.22,0.38,0.80);
        glVertex2d(-3,-4);
        glColor3f(0.6,0.19,0.80);
        glVertex2d(-3,4);

        glEnd();

    glPopMatrix();
*/


    //glEnd();
    glFlush();
    //glutSwapBuffers();

}


int main()
{

    glutInitWindowSize(600,600);
    glutInitWindowPosition(10,10);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);

    glutCreateWindow("First Lab");

    init();
    glutDisplayFunc(myDisplay);
    glutMainLoop();

    return 0;
}

