/*
 * GLUT Shapes Demo
 *
 * Written by Nigel Stewart November 2003
 **/
#include<windows.h>
#ifdef _APPLE_
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <stdlib.h>

void init()
{
    glClearColor(0.0f,0.0f,0.0f,0.0f);
    glOrtho(-5,+5,-10,+10,-5,+5);

}

void myDisplay()
{
    glClear(GL_COLOR_BUFFER_BIT);

        glPushMatrix();
        glTranslated(0,5,0);
        glBegin(GL_POLYGON);
        //ghor er chouni
        glColor3f(0.80,0.35,0.27);
        glVertex2d(-2,3);
        glColor3f(0.93,0.22,0.54);
        glVertex2d(2,3);
        glColor3f(1,0.75,0.14);
        glVertex2d(3,0);
        glColor3f(0.18,0.54,0.38);
        glVertex2d(-3,0);

        glEnd();
        glPopMatrix();


        //ghor er boundary

        glPushMatrix();
        glTranslated(0,5,0);
        glBegin(GL_POLYGON);


        glColor3f(0.22,0.38,0.80);
        glVertex2d(2,0);
        glColor3f(0.6,0.19,0.80);
        glVertex2d(2,-4);
        glColor3f(0.6,0.19,0.80);
        glVertex2d(-2,-4);
        glColor3f(0.6,0.19,0.80);
        glVertex2d(-2,0);

        glEnd();
        glPopMatrix();


        //ghor er janala

        glPushMatrix();
        glTranslated(-1.25,3,0);
        glBegin(GL_POLYGON);

        glColor3f(1,1,1);
        glVertex2d(0.25,0.5);
        //glColor3f(0.93,0.22,0.54);
        glVertex2d(-0.25,0.5);
        //glColor3f(1,0.75,0.14);
        glVertex2d(-0.25,-0.5);
        //glColor3f(0.18,0.54,0.38);
        glVertex2d(0.25,-0.5);


        glEnd();
        glPopMatrix();

        glPushMatrix();
        glTranslated(1.25,3,0);
        glBegin(GL_POLYGON);

        //ghor er janala

        glColor3f(1,1,1);
        glVertex2d(0.25,0.5);
        //glColor3f(0.93,0.22,0.54);
        glVertex2d(-0.25,0.5);
        //glColor3f(1,0.75,0.14);
        glVertex2d(-0.25,-0.5);
        //glColor3f(0.18,0.54,0.38);
        glVertex2d(0.25,-0.5);


        glEnd();
        glPopMatrix();


        //ghor er dorja

        glPushMatrix();
        glTranslated(0,3,0);
        glBegin(GL_POLYGON);

        glColor3f(1,0,1);
        glVertex2d(0.5,1.7);
        //glColor3f(0.93,0.22,0.54);
        glVertex2d(-0.5,1.7);
        glColor3f(1,0.75,0.14);
        glVertex2d(-0.5,-1.7);
        //glColor3f(0.18,0.54,0.38);
        glVertex2d(0.5,-1.7);




        glEnd();
        glPopMatrix();

        //ghor er shiri

         glPushMatrix();
        glTranslated(0,1,0);
        glBegin(GL_POLYGON);


        glColor3f(0.80,0.35,0.27);
        glVertex2d(1.5,0);
        glColor3f(0.80,0.35,0.27);
        glVertex2d(1.5,-1);
        glColor3f(0.80,0.35,0.27);
        glVertex2d(-1.5,-1);
        glColor3f(0.6,0.19,0.80);
        glVertex2d(-1.5,0);

        glEnd();


         glPopMatrix();
         glPushMatrix();
        glTranslated(0,-0.01,0);
        glBegin(GL_POLYGON);


        glColor3f(0.80,0.35,0.27);
        glVertex2d(0.5,0);
        glColor3f(0.80,0.35,0.27);
        glVertex2d(0.5,-1);
        glColor3f(0.80,0.35,0.27);
        glVertex2d(-0.5,-1);
        glColor3f(0.6,0.19,0.80);
        glVertex2d(-0.5,0);

        glEnd();
        glPopMatrix();

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
