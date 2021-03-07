#include <QDebug>

#include "worker.h"

Worker::Worker(QObject *parent) : QObject(parent),
    m_firtsName("First Name")
{

}

QString Worker::firtsName() const
{
    qDebug() << "C++ Talking : " << __PRETTY_FUNCTION__ ;
    return m_firtsName;
}

void Worker::setFirtsName(QString firtsName)
{
    qDebug() << "C++ Talking : " << __PRETTY_FUNCTION__ ;

    if (m_firtsName == firtsName)
        return;

    m_firtsName = firtsName;
    emit firtsNameChanged(m_firtsName);
}
