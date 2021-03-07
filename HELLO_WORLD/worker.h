#ifndef WORKER_H
#define WORKER_H

#include <QObject>

class Worker : public QObject
{
    Q_OBJECT

    Q_PROPERTY(QString firtsName READ firtsName WRITE setFirtsName NOTIFY firtsNameChanged)

public:
    explicit Worker(QObject *parent = nullptr);

    QString firtsName() const;

public slots:
    void setFirtsName(QString firtsName);

signals:

    void firtsNameChanged(QString firtsName);

private:

    QString m_firtsName;
};

#endif // WORKER_H
