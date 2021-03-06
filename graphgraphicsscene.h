#ifndef GRAPHGRAPHICSSCENE_H
#define GRAPHGRAPHICSSCENE_H

#include "state.h"
#include "transition.h"
#include "enumeration.h"
#include "instructionlab.h"

#include <QGraphicsScene>
#include <QGraphicsSceneMouseEvent>
#include <QDebug>
#include <QObject>
#include <QDesktopWidget>

class State;
class Transition;
class InstructionLab;

class GraphGraphicsScene : public QGraphicsScene {

public:
    GraphGraphicsScene(QObject *parent = 0);

    void setMode(MODE);
    MODE mode() const;

public slots:
    void removeLast(State *node);

protected:
    void mousePressEvent(QGraphicsSceneMouseEvent *mouseEvent);
    void mouseMoveEvent(QGraphicsSceneMouseEvent *mouseEvent);
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *mouseEvent);

private:
    MODE m_mode;

    State *lastNode;
    State *node;
    Transition *transition;

    InstructionLab *instructionLab;
};

#endif // GRAPHGRAPHICSSCENE_H
