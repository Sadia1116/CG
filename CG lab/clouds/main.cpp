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

float cx=0, cy=0, angle=0;
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
 glTranslated(2,3,0);
        glScaled(1,1,1);

//......................................1st cloud
        glPushMatrix();
        glTranslated(0,-0.2,0);
        glBegin(GL_POLYGON);


        glVertex2d(0,0);
        glVertex2d(6,0);
        glVertex2d(3,2);




        glEnd();
        glPopMatrix();


        glPushMatrix();

        glTranslated(3,1.7,0);

        glColor3f(1,1,1);
        circle(0.8,0.8);

        glPopMatrix();

        glPushMatrix();


        glTranslated(0.1,0.5,0);
        circle(0.7,0.7);
        glColor3f(1,1,1);

        glPopMatrix();

         glPushMatrix();
        glTranslated(5.9,0.5,0);
        circle(0.7,0.7);
        glColor3f(1,1,1);

        glPopMatrix();

        glPushMatrix();
        glTranslated(1,0.5,0);
         circle(0.5,0.5);
        glColor3f(1,1,1);

        glPopMatrix();

        glPushMatrix();

        glTranslated(1.6,1,0);
         circle(0.5,0.5);
        glColor3f(1,1,1);

        glPopMatrix();


         glPushMatrix();

        glTranslated(2.4,1.1,0);
         circle(0.5,0.5);
        glColor3f(1,1,1);

        glPopMatrix();


         glPushMatrix();

        glTranslated(5,0.5,0);
         circle(0.5,0.5);
        glColor3f(1,1,1);

        glPopMatrix();

        glPushMatrix();

        glTranslated(4.5,1,0);
         circle(0.5,0.5);
        glColor3f(1,1,1);

        glPopMatrix();


         glPushMatrix();

        glTranslated(3.7,0.9,0);
         circle(0.5,0.5);
        glColor3f(1,1,1);

        glPopMatrix();

//...................................................2nd cloud



       glEnd();
       glTranslated(-3,-6,0);
        glScaled(1,1,1);
        glRotated(angle,0,0,1);

//......................................
        glPushMatrix();
        glTranslated(0,-0.2,0);
        glBegin(GL_POLYGON);


        glVertex2d(0,0);
        glVertex2d(6,0);
        glVertex2d(3,2);




        glEnd();
        glPopMatrix();


        glPushMatrix();

        glTranslated(3,1.7,0);

        glColor3f(1,1,1);
        circle(0.8,0.8);

        glPopMatrix();

        glPushMatrix();


        glTranslated(0.1,0.5,0);
        circle(0.7,0.7);
        glColor3f(1,1,1);

        glPopMatrix();

         glPushMatrix();
        glTranslated(5.9,0.5,0);
        circle(0.7,0.7);
        glColor3f(1,1,1);

        glPopMatrix();

        glPushMatrix();
        glTranslated(1,0.5,0);
         circle(0.5,0.5);
        glColor3f(1,1,1);

        glPopMatrix();

        glPushMatrix();

        glTranslated(1.6,1,0);
         circle(0.5,0.5);
        glColor3f(1,1,1);

        glPopMatrix();


         glPushMatrix();

        glTranslated(2.4,1.1,0);
         circle(0.5,0.5);
        glColor3f(1,1,1);

        glPopMatrix();


         glPushMatrix();

        glTranslated(5,0.5,0);
         circle(0.5,0.5);
        glColor3f(1,1,1);

        glPopMatrix();

        glPushMatrix();

        glTranslated(4.5,1,0);
         circle(0.5,0.5);
        glColor3f(1,1,1);

        glPopMatrix();


         glPushMatrix();

        glTranslated(3.7,0.9,0);
         circle(0.5,0.5);
        glColor3f(1,1,1);

        glPopMatrix();

//...................................................star
glTranslated(-1,-2,0);
        glScaled(0.12,0.12,1);

glPushMatrix();
glTranslated(-4,-5,0);

        glPushMatrix();
glTranslated(0,6,0);
         glBegin(GL_POLYGON);

         glColor3f(1,1,1);
           glVertex2d(1,0);
           glVertex2d(2,1);
            glVertex2d(2,2.8);
            glEnd();
        glPopMatrix();


  glPushMatrix();
glTranslated(0,6,0);
         glBegin(GL_POLYGON);

           glVertex2d(2,1);
           glVertex2d(2.8,0);
            glVertex2d(2,2.8);



           glEnd();
        glPopMatrix();

//.................................

glTranslated(0,8,0);
         glBegin(GL_POLYGON);

           glVertex2d(0.7,0);
           glVertex2d(2,-1);
            glVertex2d(3.4,0);



           glEnd();
        glPopMatrix();


       glEnd();










    glFlush();
    //glutSwapBuffers();

}

int main()
{

    glutInitWindowSize(800,800);
    glutInitWindowPosition(10,10);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);

    glutCreateWindow("clouds");

    init();
    glutDisplayFunc(myDisplay);

    glutMainLoop();

    return 0;
}
