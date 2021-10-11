#ifndef MEUCANVAS_H
#define MEUCANVAS_H

#include <QOpenGLWidget>

class MeuCanvas : public QOpenGLWidget{
    public:
        MeuCanvas(QWidget * parent);

        void initializeGL();
        void paintGL();
};

#endif // MEUCANVAS_H
