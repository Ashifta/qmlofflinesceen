#include "statusbarmodel.h"
#include <QtDebug>

StatusBarModel::StatusBarModel(QObject *parent) : QObject(parent)
{


    m_Timer.setInterval(1);
    connect(&m_Timer, &QTimer::timeout, this, &StatusBarModel::updateTime);
    m_Timer.start();
}

void StatusBarModel::updateTime()
{
    qDebug()<<"StatusBarModel::updateTime()";
    emit timeUpdated();
}

