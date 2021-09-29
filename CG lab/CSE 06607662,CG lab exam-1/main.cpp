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

void init()
{
    glClearColor(0.0f,0.0f,0.0f,0.0f);
    glOrtho(-5,+5,-10,+10,-5,+5);

}

void myDisplay()
{
    glClear(GL_COLOR_BUFFER_BIT);

        glPushMatrix();
        glTranslated(0,7,0);
        glBegin(GL_POLYGON);
        //ghor er uporer part


        glVertex2d(1,0);
        glVertex2d(1,-1);
        glVertex2d(-1,-1);
        glVertex2d(-1,0);

        glEnd();
        glPopMatrix();


        //ghor er 2ndpart

        glPushMatrix();
        glTranslated(0,6,0);
        glBegin(GL_POLYGON);


        glColor3f(0.22,0.38,0.80);
        glVertex2d(1,0);
        glColor3f(0.6,0.19,0.80);
        glVertex2d(1,-3);
        glColor3f(0.6,0.19,0.80);
        glVertex2d(-1,-3);
        glColor3f(0.6,0.19,0.80);
        glVertex2d(-1,0);

        glEnd();
        glPopMatrix();

         glPushMatrix();
        glTranslated(0,4,0);
        glBegin(GL_POLYGON);
        //ghor er 3rd part

        glColor3f(0.74,0.74,0.74);
        glVertex2d(1,0);
        glVertex2d(1,-1);
        glVertex2d(-1,-1);
        glVertex2d(-1,0);

        glEnd();
        glPopMatrix();

        //ghor er 4thpart

        glPushMatrix();
        glTranslated(0,3,0);
        glBegin(GL_POLYGON);


        glColor3f(0.22,0.38,0.80);
        glVertex2d(1,0);
        glColor3f(0.6,0.19,0.80);
        glVertex2d(1,-3);
        glColor3f(0.6,0.19,0.80);
        glVertex2d(-1,-3);
        glColor3f(0.6,0.19,0.80);
        glVertex2d(-1,0);

        glEnd();
        glPopMatrix();


        //ghor er janala

        glPushMatrix();
        glTranslated(-0.5,2,0);
        glBegin(GL_POLYGON);

        glColor3f(1,1,1);
        glVertex2d(0.1,0.2);
        //glColor3f(0.93,0.22,0.54);
        glVertex2d(-0.1,0.2);
        //glColor3f(1,0.75,0.14);
        glVertex2d(-0.1,-0.2);
        //glColor3f(0.18,0.54,0.38);
        glVertex2d(0.1,-0.2);


        glEnd();
        glPopMatrix();

        glPushMatrix();
        glTranslated(0.5,2,0);
        glBegin(GL_POLYGON);

        //ghor er janala

        glColor3f(1,1,1);
        glVertex2d(0.1,0.2);
        glVertex2d(-0.1,0.2);
        glVertex2d(-0.1,-0.2);
        glVertex2d(0.1,-0.2);


        glEnd();
        glPopMatrix();


        //ghor er dorja

        glPushMatrix();
        glTranslated(0,1,0);
        glBegin(GL_POLYGON);

        glColor3f(1,1,1);
        glVertex2d(0.2,0.85);

        glVertex2d(-0.2,0.85);
        glColor3f(1,0.75,0.14);
        glVertex2d(-0.2,-0.85);

        glVertex2d(0.2,-0.85);




        glEnd();

         glPopMatrix();

         glPushMatrix();
        glTranslated(0,0.5,0);
        glBegin(GL_POLYGON);
        //ghor er 3rd part

        glColor3f(0.74,0.74,0.74);
        glVertex2d(1,0);
        glVertex2d(1,-1);
        glVertex2d(-1,-1);
        glVertex2d(-1,0);

        glEnd();
        glPopMatrix();

         //ghor er 2ndpart

        glPushMatrix();
        glTranslated(0,0.01,0);
        glBegin(GL_POLYGON);


        glColor3f(0.22,0.38,0.80);
        glVertex2d(1,0);
        glColor3f(0.6,0.19,0.80);
        glVertex2d(1,-3);
        glColor3f(0.6,0.19,0.80);
        glVertex2d(-1,-3);
        glColor3f(0.6,0.19,0.80);
        glVertex2d(-1,0);

        glEnd();
        glPopMatrix();


         //ghor er janala

        glPushMatrix();
        glTranslated(-0.50,-1,0);
        glBegin(GL_POLYGON);

        glColor3f(1,1,1);
        glVertex2d(0.1,0.2);

        glVertex2d(-0.1,0.2);

        glVertex2d(-0.1,-0.2);

        glVertex2d(0.1,-0.2);


        glEnd();
        glPopMatrix();

        glPushMatrix();
        glTranslated(0.50,-1,0);
        glBegin(GL_POLYGON);

        //ghor er janala

        glColor3f(1,1,1);
        glVertex2d(0.1,0.2);
        glVertex2d(-0.1,0.2);
        glVertex2d(-0.1,-0.2);
        glVertex2d(0.1,-0.2);


        glEnd();
        glPopMatrix();


       //ghor er dorja

        glPushMatrix();
        glTranslated(0.0,-2,0);
        glBegin(GL_POLYGON);

        glColor3f(1,1,1);
        glVertex2d(0.2,0.85);

        glVertex2d(-0.2,0.85);
        glColor3f(1,0.75,0.14);
        glVertex2d(-0.2,-0.85);

        glVertex2d(0.2,-0.85);




        glEnd();


        glPopMatrix();

         glPushMatrix();
        glTranslated(0.0,-2.85,0);
        glBegin(GL_POLYGON);
        //ghor er 3rd part

        glColor3f(0.74,0.74,0.74);
        glVertex2d(1,0);
        glVertex2d(1,-1);
        glVertex2d(-1,-1);
        glVertex2d(-1,0);

        glEnd();
        glPopMatrix();

        glPushMatrix();
        glTranslated(0,-3.55,0);
        glBegin(GL_POLYGON);


        glColor3f(0.22,0.38,0.80);
        glVertex2d(1,0);
        glColor3f(0.6,0.19,0.80);
        glVertex2d(1,-3);
        glColor3f(0.6,0.19,0.80);
        glVertex2d(-1,-3);
        glColor3f(0.6,0.19,0.80);
        glVertex2d(-1,0);

        glEnd();


        glPopMatrix();

        glPushMatrix();
        glTranslated(0.0,-5.70,0);
        glBegin(GL_POLYGON);

        glColor3f(1,1,1);
        glVertex2d(0.4,0.85);

        glVertex2d(-0.4,0.85);
        glColor3f(1,0.75,0.14);
        glVertex2d(-0.4,-0.85);

        glVertex2d(0.4,-0.85);




        glEnd();




glFlush();

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
