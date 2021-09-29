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
    glOrtho(-10,+10,-10,+10,-10,+10);

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
        //printf("Angle : %f , X-Axis : %f , Y-Axis : %f\n",angle,radiusX*cos(angle),radiusY*sin(angle));

    }
    glEnd();

}


void myDisplay()
{
    glClear(GL_COLOR_BUFFER_BIT);
     glPushMatrix();
        glTranslated(-5,0,0);
        glScaled(1.5,1.5,1.5);


    glPushMatrix();
        glTranslated(-5,0,0);
        glColor3f(0,1,0);
        glScaled(2,2,2);

        glBegin(GL_POLYGON);

        glVertex2d(1,0);
        glVertex2d(2,0);
        glVertex2d(1.5,1.5);



        glEnd();
        //------------------------------
        glPopMatrix();

        glPushMatrix();
        glTranslated(-4,0,0);
        glColor3f(0,1,0);
        glScaled(2,1,2);

        glBegin(GL_POLYGON);

        glVertex2d(1,0);
        glVertex2d(2,0);
        glVertex2d(1.5,1.5);



        glEnd();
        glPopMatrix();
        //-----------------------------------
        glPushMatrix();
        glTranslated(-3.5,0,0);
        glColor3f(0,1,0);
        glScaled(2.5,1.5,2);

        glBegin(GL_POLYGON);

        glVertex2d(1,0);
        glVertex2d(2,0);
        glVertex2d(1.5,1.5);



        glEnd();
        glPopMatrix();
        //-----------------------------------
         glPushMatrix();
        glTranslated(-2.5,0,0);
        glColor3f(0,1,0);
        glScaled(3,3,2);

        glBegin(GL_POLYGON);

        glVertex2d(1,0);
        glVertex2d(2,0);
        glVertex2d(1.5,1.5);



        glEnd();
        glPopMatrix();



        glEnd();
        glPopMatrix();
        //-----------------------------------***********
        glPushMatrix();
        glTranslated(3,0,0);
        glScaled(1.5,1.5,1.5);


    glPushMatrix();
        glTranslated(-5,0,0);
        glColor3f(0,1,0);
        glScaled(2,2,2);

        glBegin(GL_POLYGON);

        glVertex2d(1,0);
        glVertex2d(2,0);
        glVertex2d(1.5,1.5);



        glEnd();
        //------------------------------
        glPopMatrix();

        glPushMatrix();
        glTranslated(-4,0,0);
        glColor3f(0,1,0);
        glScaled(2,1,2);

        glBegin(GL_POLYGON);

        glVertex2d(1,0);
        glVertex2d(2,0);
        glVertex2d(1.5,1.5);



        glEnd();
        glPopMatrix();
        //-----------------------------------
        glPushMatrix();
        glTranslated(-3.5,0,0);
        glColor3f(0,1,0);
        glScaled(2.5,1.5,2);

        glBegin(GL_POLYGON);

        glVertex2d(1,0);
        glVertex2d(2,0);
        glVertex2d(1.5,1.5);



        glEnd();
        glPopMatrix();
        //-----------------------------------
         glPushMatrix();
        glTranslated(-2.5,0,0);
        glColor3f(0,1,0);
        glScaled(3,3,2);

        glBegin(GL_POLYGON);

        glVertex2d(1,0);
        glVertex2d(2,0);
        glVertex2d(1.5,1.5);



        glEnd();
        glPopMatrix();



        glEnd();
        glPopMatrix();








    glFlush();
    //glutSwapBuffers();

}






int main()
{

    glutInitWindowSize(800,800);
    glutInitWindowPosition(10,10);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);

    glutCreateWindow("hill");

    init();
    glutDisplayFunc(myDisplay);

    glutMainLoop();

    return 0;
}
