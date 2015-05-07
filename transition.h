#ifndef TRANSITION_H
#define TRANSITION_H

#include <QRect>
#include <QPainter>
#include <QGraphicsSceneMouseEvent>
#include <QStyleOptionGraphicsItem>
#include <QGraphicsItem>
#include <QMessageBox>
#include <QPolygon>

#include "state.h"
#include "enumeration.h"
#include "transitioninstruction.h"

class GraphGraphicsScene;
class State;

class Transition : public QGraphicsItem {
public:
    Transition();
    ~Transition();

    void setBegin(QPointF);
    void updateBegin();
    void setEnd(QPointF);
    void updateEnd();
    QPointF begin() const;
    QPointF end() const;
    void setFrom(State *from);
    State *from();
    void setTo(State *to);
    void setDrawMode(DRAW_SHAPE m);

protected:
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    void mouseDoubleClickEvent(QGraphicsSceneMouseEvent *mouseEvent);
    void hoverEnterEvent(QGraphicsSceneHoverEvent *hoverEvent);
    void hoverLeaveEvent(QGraphicsSceneHoverEvent *hoverEvent);
    QRectF boundingRect() const;
    QPainterPath shape() const;

private:
    State *m_from; // cvor od koga krece linija
    State *m_to; // cvor do koga ide linija

    QPointF m_begin; // pocetak za isprekidanu liniju
    QPointF m_end; // kraj za isprekidanu liniju
    DRAW_SHAPE m_line;

    QList<QString > instructions;

    Qt::GlobalColor m_color;
};

#endif // TRANSITION_H
