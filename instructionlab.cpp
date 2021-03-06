#include "instructionlab.h"

InstructionLab *InstructionLab::s_instructionLab = NULL;

InstructionLab::InstructionLab() {

}

InstructionLab::~InstructionLab() {
    delete s_instructionLab;
    delete parent;
}

void InstructionLab::addToInstructionlab(Transition *transition) {
    /* dodavanje prelaza u vektor */
    m_transitions.push_back(transition);
}

void InstructionLab::removeTransition(Transition *transition) {
    /* brisanje prelaza iz vektora */
    m_transitions.removeOne(transition);
}

const QVector<Transition* > &InstructionLab::transitions() {
    return m_transitions;
}

void InstructionLab::setVectorInstruction(QVector<QString> &v) {
    m_instructionsAsString.clear();
    m_instructionsAsString = v;
}

InstructionLab* InstructionLab::instance() {
    /* klasa singelton */
    if(!s_instructionLab)
        s_instructionLab = new InstructionLab();
    return s_instructionLab;
}

void InstructionLab::setInVectorFromGraph() {
    for(Transition *t : m_transitions) {
        m_instructionsAsString.append(t->ispis());
    }
}



