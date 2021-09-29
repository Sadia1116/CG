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
    glOrtho(-10,+10,-10,+10,-5,+5);

}

void circleP(float radiusX,float radiusY)
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

}

void circleL(float radiusX,float radiusY)
{
    int i=0;
    float angle= 0;

    glBegin(GL_LINE_LOOP);
    for(i=0;i<100;i++)
    {
        angle=2*PI*i/100;
        glVertex2d(radiusX*cos(angle),radiusY*sin(angle));
        printf("Angle : %f , X-Axis : %f , Y-Axis : %f\n",angle,radiusX*cos(angle),radiusY*sin(angle));

    }

}

void myDisplay()
{
    glClear(GL_COLOR_BUFFER_BIT);

        //------BackGround-------
        glPushMatrix();
        glTranslated(0,0,0);
        glBegin(GL_POLYGON);

        glColor3f(0,1,0);
        glVertex2d(8.5,6);
        glVertex2d(-8.5,6);
        glVertex2d(-8.5,-6);
        glVertex2d(8.5,-6);

        glEnd();
        glPopMatrix();


        //------SideAroundLines-------
        glPushMatrix();
        glTranslated(0,0,0);
        glBegin(GL_LINE_LOOP);

        glColor3f(1,1,1);
        glVertex2d(7,5);
        glVertex2d(-7,5);
        glVertex2d(-7,-5);
        glVertex2d(7,-5);

        glEnd();
        glPopMatrix();

        //------LEFTGoalBer-------
        glPushMatrix();
        glTranslated(-7.5,0,0);
        glBegin(GL_LINE_LOOP);

        glColor3f(1,1,1);
        glVertex2d(.5,1);
        glVertex2d(-.5,1);
        glVertex2d(-.5,-1);
        glVertex2d(.5,-1);

        glEnd();
        glPopMatrix();

        //------RightGoalBer-------
        glPushMatrix();
        glTranslated(7.5,0,0);
        glBegin(GL_LINE_LOOP);

        glColor3f(1,1,1);
        glVertex2d(.5,1);
        glVertex2d(-.5,1);
        glVertex2d(-.5,-1);
        glVertex2d(.5,-1);

        glEnd();
        glPopMatrix();

        //------LEFTGoalBerArea-------
        glPushMatrix();
        glTranslated(-6,0,0);
        glBegin(GL_LINE_LOOP);

        glColor3f(1,1,1);
        glVertex2d(1,2);
        glVertex2d(-1,2);
        glVertex2d(-1,-2);
        glVertex2d(1,-2);

        glEnd();
        glPopMatrix();

        //------RightGoalBerArea-------
        glPushMatrix();
        glTranslated(6,0,0);
        glBegin(GL_LINE_LOOP);

        glColor3f(1,1,1);
        glVertex2d(1,2);
        glVertex2d(-1,2);
        glVertex2d(-1,-2);
        glVertex2d(1,-2);

        glEnd();
        glPopMatrix();

        //------LeftDboXArea-------
        glPushMatrix();
        glTranslated(-5.5,0,0);
        glBegin(GL_LINE_LOOP);

        glColor3f(1,1,1);
        glVertex2d(1.5,3);
        glVertex2d(-1.5,3);
        glVertex2d(-1.5,-3);
        glVertex2d(1.5,-3);

        glEnd();
        glPopMatrix();

        //------RightDboXArea-------
        glPushMatrix();
        glTranslated(5.5,0,0);
        glBegin(GL_LINE_LOOP);

        glColor3f(1,1,1);
        glVertex2d(1.5,3);
        glVertex2d(-1.5,3);
        glVertex2d(-1.5,-3);
        glVertex2d(1.5,-3);

        glEnd();
        glPopMatrix();


        //------MiddleLine-------
        glPushMatrix();
        glTranslated(0,0,0);
        glBegin(GL_LINES);

        glColor3f(1,1,1);
        glVertex2d(0,5);
        glVertex2d(0,-5);

        glEnd();
        glPopMatrix();

        //------MiddleCircle-------
        glPushMatrix();
        glTranslated(0,0,0);
        circleL(1,1);
        glPopMatrix();
        glEnd();

        //------MiddleCirclePolygon-------
        glPushMatrix();
        glTranslated(0,0,0);
        circleP(0.12f,0.12f);
        glPopMatrix();
        glEnd();

        //------LeftGoalKeeper-------
        glPushMatrix();
        glTranslated(-4.5,0,0);
        circleP(0.12f,0.12f);
        glPopMatrix();
        glEnd();

        //------RIGHTGoalKeeper-------
        glPushMatrix();
        glTranslated(9,0,0);
        circleP(0.12f,0.12f);
        glPopMatrix();
        //glEnd();




    glEnd();
    glFlush();
    //glutSwapBuffers();

}


int main()
{

    glutInitWindowSize(1200,800);
    glutInitWindowPosition(10,10);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);

    glutCreateWindow("First Lab");

    init();
    glutDisplayFunc(myDisplay);
    glutMainLoop();

    return 0;
}
