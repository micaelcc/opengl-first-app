#include "meucanvas.h"

MeuCanvas::MeuCanvas(QWidget * parent): QOpenGLWidget(parent){

}

void MeuCanvas::initializeGL(){
    glClearColor(1,1,1,1);
}

void MeuCanvas::paintGL(){
    glColor3f(1,0,0);
    glBegin(GL_TRIANGLES);
        glVertex2f(-0.5,-0.5);
        glVertex2f(0.5, -0.5);
        glVertex2f(0.0, 0.5);
    glEnd();
}
