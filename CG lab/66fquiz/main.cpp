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

void init()
{
    glClearColor(0.0f,0.0f,0.0f,0.0f);
    glOrtho(-5,+5,-10,+10,-5,+5);

}

void myDisplay()
{
    glClear(GL_COLOR_BUFFER_BIT);

       //ghonok

        glPushMatrix();
        glTranslated(0,6,0);
        glBegin(GL_POLYGON);

         glColor3f(0.85,0.43,0.57);
           glVertex2d(0,0);
           glVertex2d(-2,0);
           glVertex2d(0,1);
           glVertex2d(2,1);

        glEnd();
        glPopMatrix();

 glPushMatrix();
        glTranslated(-2,4,0);
        glBegin(GL_POLYGON);

         glColor3f(0.6,0.8,0.35);
           glVertex2d(0,0);
           glVertex2d(2,0);
           glVertex2d(2,2);
           glVertex2d(0,2);

        glEnd();
        glPopMatrix();

        glPushMatrix();
        glTranslated(0,4,0);
        glBegin(GL_POLYGON);

         glColor3f(0.3,0.58,0.8);
           glVertex2d(0,0);
           glVertex2d(0,2);
           glVertex2d(2,3);
           glVertex2d(2,1);

        glEnd();
        glPopMatrix();


//piramid
        glPopMatrix();

        glPushMatrix();
        glTranslated(-3,-4,0);
        glBegin(GL_POLYGON);

         glColor3f(0,1,0);
           glVertex2d(0,0);
           glVertex2d(2,0);
           glVertex2d(1,5);


        glEnd();
        glPopMatrix();

        glPushMatrix();
        glTranslated(-3,-4,0);
        glBegin(GL_POLYGON);

         glColor3f(0.8,0.4,0.22);
           glVertex2d(2,0);
           glVertex2d(3,0);
           glVertex2d(1,5);


        glEnd();
        glPopMatrix();


//msgbox


         glPushMatrix();
        glTranslated(0,0,0);
        glBegin(GL_LINE_LOOP);
          glColor3f(1,1,1);

           glVertex2d(0,0);
           glVertex2d(2,0);
           glVertex2d(2,2);
           glVertex2d(1.6,2);
            glVertex2d(1.5,3);
             glVertex2d(1.2,2);

           glVertex2d(0,2);

        glEnd();
        glPopMatrix();



    glFlush();
    //glutSwapBuffers();

}


int main()
{

    glutInitWindowSize(1000,750);
    glutInitWindowPosition(10,10);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);

    glutCreateWindow("Class Test");

    init();
    glutDisplayFunc(myDisplay);
    glutMainLoop();

    return 0;
}
