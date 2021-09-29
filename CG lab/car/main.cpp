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
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <stdlib.h>
#include<stdio.h>
#include<math.h>
#define PI 3.1416

float cx=0, cy=0, angle=0;
float Cx=0, Cy=0, angle=0;

void init()
{
    glClearColor(0.184314f, 0.184314f, 0.309804f,0.0f);
    glOrtho(-10,+10,-10,+10,-10,+10);

}

void CircleP(float radiusX,float radiusY)
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

void rotateC()
{
    if(cx<10){
    angle=angle-0.05;
    cx=cx+0.001;}
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
void CircleL(float radiusX,float radiusY)
{
    int i=0;
    float angle= 0;

    glBegin(GL_LINE_LOOP);
    for(i=0;i<100;i++)
    {
        angle=2*PI*i/100;
        glVertex2d(radiusX*cos(angle),radiusY*sin(angle));
        //printf("Angle : %f , X-Axis : %f , Y-Axis : %f\n",angle,radiusX*cos(angle),radiusY*sin(angle));

    }
    glEnd();

}


//...................for car
void CircleC(float radiusX,float radiusY)
{
    int i=0;
    float angle= 0;

    glBegin(GL_POLYGON);
    for(i=0;i<50;i++)
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


        //...........................................................car
         glPushMatrix();
         glTranslated(Cx,Cy,0);
        glTranslated(-9,-6,0);
        glScaled(1.5,1.5,1);
         glRotated(angle,0,0,1);


//.......................................body background
  glPushMatrix();
        glTranslated(1,0,0);
        glColor3f(1,0.3,0);

        glBegin(GL_POLYGON);
        glVertex2d(2,1.6);
        glVertex2d(1,0.1);
        glVertex2d(1,0);
        glVertex2d(5.5,0);
        glVertex2d(5.5,0.4);
        glVertex2d(4.5,1.6);

        glEnd();

        glPopMatrix();
        glPushMatrix();
        glTranslated(2.8,1.1,0);
        glRotated(60,0,0,1);

        glColor3f(1,0.3,0);//.........orange
        CircleC(1.2,0.3);
         glEnd();

        glPopMatrix();



        glPushMatrix();
        glTranslated(5.91,0.92,0);
        glRotated(305,0,0,1);

        glColor3f(1,0.3,0);//.........orange
        CircleC(0.8,0.3);
         glEnd();

        glPopMatrix();
//..............................................chaka
 //...................... chaker upore
         glPushMatrix();
        glTranslated(5.8,-0.2,0);

        glColor3f(0,0,0);//.........front
        CircleC(0.5,1);
         glEnd();

        glPopMatrix();
          glPushMatrix();
        glTranslated(2.8,-0.2,0);

        glColor3f(0,0,0);//.........black
        CircleC(0.5,1);
         glEnd();

        glPopMatrix();

 glPushMatrix();
        glTranslated(5.8,-0.1,0);

        glColor3f(0.4,0.4,0.4);//.........light black//............front
        CircleP(0.3,0.6);
         glEnd();

        glPopMatrix();
         glPushMatrix();
        glTranslated(2.8,-0.1,0);//.................back

        glColor3f(0.4,0.4,0.4);//.........light black
        CircleP(0.3,0.6);
         glEnd();

        glPopMatrix();
        //...............................caka r vitorer gol
         glPushMatrix();
        glTranslated(5.8,-0.1,0);
         glRotated(angle,0,0,1);

        glColor3f(0,0,0);//.........black//............front
        CircleP(0.2,0.4);
         glEnd();

        glPopMatrix();
         glPushMatrix();
        glTranslated(2.8,-0.1,0);//.................back
         glRotated(angle,0,0,1);

        glColor3f(0,0,0);//.........black
        CircleP(0.2,0.4);
         glEnd();

        glPopMatrix();
        //..........................................cross front chaka
        glPushMatrix();
        glTranslated(5.5,-0.42,0);
        glColor3f(1,1,1);

        glBegin(GL_LINES);

        glVertex2d(0.4,0);
        glVertex2d(0.2,0.65);

        glEnd();
        glPopMatrix();

         glPushMatrix();
        glTranslated(5.5,-0.42,0);
        glColor3f(1,1,1);

        glBegin(GL_LINES);

        glVertex2d(0.2,0);
        glVertex2d(0.4,0.65);

        glEnd();

        glPopMatrix();
         glPushMatrix();
        glTranslated(5.1,-0.1,0);
        glColor3f(1,1,1);

        glBegin(GL_LINES);

        glVertex2d(0.5,0);
        glVertex2d(0.9,0);

        glEnd();
        glPopMatrix();
        //................................cross back chaka

        glPushMatrix();
        glTranslated(2.5,-0.42,0);
        glColor3f(1,1,1);

        glBegin(GL_LINES);

        glVertex2d(0.4,0);
        glVertex2d(0.2,0.65);

        glEnd();

        glPopMatrix();

         glPushMatrix();
        glTranslated(2.5,-0.42,0);
        glColor3f(1,1,1);

        glBegin(GL_LINES);

        glVertex2d(0.2,0);
        glVertex2d(0.4,0.65);

        glEnd();
        glPopMatrix();
         glPushMatrix();
        glTranslated(2.1,-0.1,0);
        glColor3f(1,1,1);

        glBegin(GL_LINES);

        glVertex2d(0.5,0);
        glVertex2d(0.9,0);

        glEnd();

        glPopMatrix();


        //.........................looking glass


         glPushMatrix();
        glTranslated(4.2,1.7,0);
        glColor3f(1,1,1);

        glBegin(GL_POLYGON);

        glVertex2d(0.3,-0.1);
        glVertex2d(0.8,-0.1);
        glVertex2d(0.9,1);
        glVertex2d(0.5,0.9);

        glEnd();

        glPopMatrix();
        //.......................................back glass


       glPushMatrix();
        glTranslated(1.9,1.6,0);
        glColor3f(1,1,1);

        glBegin(GL_POLYGON);

        glVertex2d(1,0);
        glVertex2d(1.5,0);
        glVertex2d(1.5,1);

        glEnd();

        glPopMatrix();

        //.....................seat


         glPushMatrix();
        glTranslated(3.7,1.6,0);
        glColor3f(0,0.5,0);

        glBegin(GL_POLYGON);

        glVertex2d(-0.1,0);
        glVertex2d(0.1,0);
        glVertex2d(0.1,0.4);
        glVertex2d(-0.2,0.3);

        glEnd();

        glPopMatrix();


//........................................stearing
glPushMatrix();
        glTranslated(4.4,1.67,0);

        glColor3f(0,0,0);
        CircleP(0.1,0.07);
         glEnd();

        glPopMatrix();
        glEnd();

//...................................door

      glPushMatrix();
        glTranslated(3.6,0,0);
        glColor3f(0,0,0);

        glBegin(GL_LINE_LOOP);

        glVertex2d(0,0);
        glVertex2d(1.4,0);
        glVertex2d(1.4,1.6);
        glVertex2d(0,1.6);

        glEnd();

        glPopMatrix();
         glPushMatrix();
        glTranslated(3.7,1.5,0);
        glColor3f(0,0,0);

        glBegin(GL_POLYGON);

        glVertex2d(0,0);
        glVertex2d(0.1,0);
        glVertex2d(0.1,0.1);
        glVertex2d(0,0.1);

        glEnd();

        glPopMatrix();

        //...........................................head light

         glPushMatrix();
        glTranslated(5.75,5.9,0);
        glPushMatrix();
        glTranslated(0.75,-5.6,0);
        glRotated(270,0,0,1);

        glColor3f(1,1,0);//.........yellow
        CircleC(0.09,0.05);
         glEnd();

        glPopMatrix();
        glPushMatrix();
        glTranslated(0.75,-5.8,0);
        glRotated(270,0,0,1);

        glColor3f(1,1,0);//.........yellow
        CircleC(0.09,0.05);
         glEnd();
        glPopMatrix();
        glEnd();

        glPopMatrix();


        //...............................................driver
         glPushMatrix();
        glTranslated(8.8,-2.32,0);
        ////////////................head
        glPushMatrix();
        glTranslated(-4.8,4.7,0);

        glColor3f(1,0.89,0.76);
        CircleP(0.2,0.3);
         glEnd();

        glPopMatrix();
        glPushMatrix();
        glTranslated(-4.7,4.7,0);
        glRotated(90,0,0,1);


        glColor3f(0,0,0);
        CircleC(0.4,0.4);
         glEnd();

        glPopMatrix();
        //...............................body
         glPushMatrix();
        glTranslated(-4.8,3.9,0);

        glColor3f(0,0.93,0.93);
        CircleC(0.2,0.5);
         glEnd();

        glPopMatrix();
         glEnd();

        glPopMatrix();
        glEnd();

        glPopMatrix();



        //...........................................................bench
         glPushMatrix();
        glTranslated(-3,5,0);
        glScaled(0.8,0.5,1);

//.......................................body background
  glPushMatrix();
        glTranslated(1,0,0);
        glColor3f(1,1,1);

        glBegin(GL_POLYGON);
        glVertex2d(2,1.2);
        glVertex2d(1,0.1);
        glVertex2d(1,0);

        glVertex2d(5.5,0);
        glVertex2d(4.5,1.2);

        glEnd();

        glPopMatrix();

//................................................border
         glPushMatrix();
        glTranslated(2,-0.5,0);
        glColor3f(0.54,0.27,0.07);
        glScaled(1,1,1);


        glBegin(GL_POLYGON);
        glVertex2d(0,0);
        glVertex2d(4.47,0);
        glVertex2d(4.47,0.5);
        glVertex2d(0,0.5);


        glEnd();

        glPopMatrix();
        //..............................line

         glPushMatrix();
        glTranslated(2.53,0.68,0);
        glColor3f(0.54,0.27,0.07);
        glScaled(0.75,0.1,1);


        glBegin(GL_POLYGON);
        glVertex2d(0,0);
        glVertex2d(4.47,0);
        glVertex2d(4.47,0.5);
        glVertex2d(0,0.5);


        glEnd();

        glPopMatrix();
        //................................................back
        //................................lomba1

        glPushMatrix();
        glTranslated(3,1.2,0);
        glColor3f(0.54,0.27,0.07);
        glScaled(0.05,5,1);


        glBegin(GL_POLYGON);
        glVertex2d(0,0);
        glVertex2d(4.47,0);
        glVertex2d(4.47,0.5);
        glVertex2d(0,0.5);


        glEnd();

        glPopMatrix();

//.......................................................lomba2
         glPushMatrix();
        glTranslated(5.22,1.2,0);
        glColor3f(0.54,0.27,0.07);
        glScaled(0.05,5,1);


        glBegin(GL_POLYGON);
        glVertex2d(0,0);
        glVertex2d(4.47,0);
        glVertex2d(4.47,0.5);
        glVertex2d(0,0.5);


        glEnd();

        glPopMatrix();
        //........................................width
         glPushMatrix();
        glTranslated(2.7,3,0);
        glColor3f(0.54,0.27,0.07);
        glScaled(0.67,1,1);


        glBegin(GL_POLYGON);
        glVertex2d(0,0);
        glVertex2d(4.47,0);
        glVertex2d(4.47,0.5);
        glVertex2d(0,0.5);


        glEnd();

        glPopMatrix();



        //...............................
         //........................................width2nd
         glPushMatrix();
        glTranslated(2.7,1.8,0);
        glColor3f(0.54,0.27,0.07);
        glScaled(0.67,1,1);


        glBegin(GL_POLYGON);
        glVertex2d(0,0);
        glVertex2d(4.47,0);
        glVertex2d(4.47,0.5);
        glVertex2d(0,0.5);


        glEnd();

        glPopMatrix();



        //...............................pa
        //...........................................1st
        glPushMatrix();
        glTranslated(2.2,-2,0);
        glColor3f(0.54,0.27,0.07);
        glScaled(0.05,4,1);


        glBegin(GL_POLYGON);
        glVertex2d(0,0);
        glVertex2d(4.47,0);
        glVertex2d(4.47,0.5);
        glVertex2d(0,0.5);


        glEnd();

        glPopMatrix();


        //..........................2nd pa
        glPushMatrix();
        glTranslated(6,-2,0);
        glColor3f(0.54,0.27,0.07);
        glScaled(0.05,4,1);


        glBegin(GL_POLYGON);
        glVertex2d(0,0);
        glVertex2d(4.47,0);
        glVertex2d(4.47,0.5);
        glVertex2d(0,0.5);


        glEnd();

        glPopMatrix();


        //..........................


          glEnd();

        glPopMatrix();
        //.....................................grass
          glPushMatrix();
        glTranslated(-3,5,0);
        glScaled(0.5,1,1);

//.......................................body background
  glPushMatrix();
        glTranslated(-6.5,0,0);
        glColor3f(0.4,0.5,0.1);

        glBegin(GL_POLYGON);
        glVertex2d(1,0);
        glVertex2d(2,0);
        glVertex2d(1.5,1.2);



        glEnd();

        glPopMatrix();
        glPushMatrix();
        glTranslated(-6,0,0);
        glColor3f(0.4,0.5,0.1);

        glBegin(GL_POLYGON);
        glVertex2d(1,0);
        glVertex2d(2,0);
        glVertex2d(1.5,2);



        glEnd();


        glPopMatrix();
        glPushMatrix();
        glTranslated(-5.5,0,0);
        glColor3f(0.4,0.5,0.1);

        glBegin(GL_POLYGON);
        glVertex2d(1,0);
        glVertex2d(2,0);
        glVertex2d(1.5,1.5);



        glEnd();

        glPopMatrix();
         glEnd();

        glPopMatrix();
        //.................................................lamppost
         glPushMatrix();
        glTranslated(0,-5,0);
        glScaled(0.8,1,1);


         glPushMatrix();
        glTranslated(5.22,1.2,0);
        glColor3f(0,0,0);
        glScaled(0.02,2,1);


        glBegin(GL_POLYGON);
        glVertex2d(0,0);
        glVertex2d(4,0);
        glVertex2d(4,3);
        glVertex2d(0,3);


        glEnd();

        glPopMatrix();
        //........................................width
         glPushMatrix();
        glTranslated(4.5,6,0);
        glColor3f(0,0,0);
        glScaled(0.6,0.2,1);


        glBegin(GL_POLYGON);
        glVertex2d(0,0);
        glVertex2d(2.5,0);
        glVertex2d(2.5,0.5);
        glVertex2d(0,0.5);


        glEnd();

        glPopMatrix();
        //...........................................bulb holder1
         glPushMatrix();
        glTranslated(4,6,0);
        glColor3f(0,0,0);
        glScaled(0.3,0.3,1);


        glBegin(GL_POLYGON);
        glVertex2d(1,1);
        glVertex2d(2,0);
        glVertex2d(3,1);



        glEnd();

        glPopMatrix();

          //...........................................bulb holder2
         glPushMatrix();
        glTranslated(5.4,6,0);
        glColor3f(0,0,0);
        glScaled(0.3,0.3,1);


        glBegin(GL_POLYGON);
        glVertex2d(1,1);
        glVertex2d(2,0);
        glVertex2d(3,1);



        glEnd();

        glPopMatrix();

          //...........................................bulb holder3
         glPushMatrix();
        glTranslated(4.65,7,0);
        glColor3f(0,0,0);
        glScaled(0.3,0.3,1);


        glBegin(GL_POLYGON);
        glVertex2d(1,1);
        glVertex2d(2,0);
        glVertex2d(3,1);



        glEnd();

        glPopMatrix();
        //.....................................bulb1
        glPushMatrix();
        glTranslated(6,6.3,0);

        glColor3f(1,1,0);//.........front
        CircleC(0.3,1);
         glEnd();

        glPopMatrix();
         //.....................................bulb2
        glPushMatrix();
        glTranslated(4.6,6.3,0);

        glColor3f(1,1,0);//.........front
        CircleC(0.3,1);
         glEnd();

        glPopMatrix();
         //.....................................bulb3
        glPushMatrix();
        glTranslated(5.25,7.3,0);

        glColor3f(1,1,0);//.........front
        CircleC(0.3,1);
         glEnd();

        glPopMatrix();
        //........................................stand
         glPushMatrix();
        glTranslated(4.9,1,0);
        glColor3f(0,0,0);
        glScaled(0.3,0.6,1);


        glBegin(GL_POLYGON);
        glVertex2d(0,0);
        glVertex2d(2.5,0);
        glVertex2d(2.5,0.5);
        glVertex2d(0,0.5);


        glEnd();

        glPopMatrix();
 //........................................stand2
         glPushMatrix();
        glTranslated(4.79,-0.2,0);
        glColor3f(0.7,0.9,0.5);
        glScaled(0.35,0.6,1);


        glBegin(GL_POLYGON);
        glVertex2d(0,0);
        glVertex2d(3,0);
        glVertex2d(3,2);
        glVertex2d(0,2);


        glEnd();

        glPopMatrix();





         glEnd();

        glPopMatrix();



        glFlush();
    //glutSwapBuffers();

}


int main()
{

    glutInitWindowSize(glutGet(GLUT_SCREEN_WIDTH),glutGet(GLUT_SCREEN_HEIGHT));
    glutInitWindowPosition(10,10);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);

    glutCreateWindow("Final project");

    init();
    glutDisplayFunc(myDisplay);
    //glutSpecialFunc(specialKey);
    glutKeyboardFunc(normalKey);
    glutMainLoop();

    return 0;
}
