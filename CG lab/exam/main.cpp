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
        glTranslated(cx,cy,0);
        glScaled(1,1,1);
        glRotated(angle,0,0,1);


        glPushMatrix();
        glScaled(1,1,1);
        glRotated(angle,0,0,1);
        glTranslated(2,2,0);

        glColor3f(1,0,0);
        circle(1,1);

        glPopMatrix();

        glPushMatrix();
        glScaled(1,1,1);
        glRotated(angle,0,0,1);
        glTranslated(-2,2,0);
        circle(1,1);
        glColor3f(1,0,0);

        glPopMatrix();

        glPushMatrix();
        glScaled(1,1,1);
        glRotated(angle,0,0,1);
        glTranslated(-2,-2,0);
        circle(1,1);
        glColor3f(1,0,0);

        glPopMatrix();

        glPushMatrix();
        glScaled(1,1,1);
        glRotated(angle,0,0,1);
        glTranslated(2,-2,0);
         circle(1,1);
        glColor3f(1,0,0);

        glPopMatrix();





       glEnd();
        /*glPushMatrix();
        glTranslated(cx,cy,0);
        glScaled(2,1,1);
        glRotated(angle,0,0,1);
        glColor3f(1,1,1);
        circle(2,2);
        glColor3f(1,0,0);
        glBegin(GL_LINES);
            glVertex2d(0,0);
            glVertex2d(2,0);

        glEnd();*/
         glBegin(GL_LINES);
            glVertex2d(2,-2);
            glVertex2d(-2,2);
             glEnd();
             glBegin(GL_LINES);
            glVertex2d(2,2);
            glVertex2d(-2,-2);
             glEnd();
        /*glBegin(GL_QUADS);

        glVertex2d(2,2);
        glVertex2d(-2,2);
        glVertex2d(-2,-2);
        glVertex2d(2,-2);



        glEnd();
        glPopMatrix();*/

    glFlush();
    //glutSwapBuffers();

}

void rotateC()
{
    angle=angle-0.005;
    cx=cx+0.0001;
    glutPostRedisplay();
}
void normalKey(unsigned char key, int x, int y)
{
    switch(key){

    case 'a':

        glutIdleFunc(rotateC);
        break;
        case 'b':
        glutIdleFunc(NULL);
        glutPostRedisplay();
        break;

    default:
        break;

}

}


void specialKey(int key,int x, int y)
{

    switch(key){

    case GLUT_KEY_LEFT:
        cx--;
        glutPostRedisplay();
        break;

    case GLUT_KEY_RIGHT:
        cx++;
        glutPostRedisplay();
        break;

    case GLUT_KEY_UP:
        cy++;
        glutPostRedisplay();
        break;

    case GLUT_KEY_DOWN:
        cy--;
        glutPostRedisplay();
        break;

        default:
        break;


    }

}
int main()
{

    glutInitWindowSize(800,800);
    glutInitWindowPosition(10,10);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);

    glutCreateWindow("after mid");

    init();
    glutDisplayFunc(myDisplay);
    glutSpecialFunc(specialKey);
    glutKeyboardFunc(normalKey);
    glutMainLoop();

    return 0;
}
