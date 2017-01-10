#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QObject>
#include <QThread>

class Worker : public QObject
{
    Q_OBJECT
    QThread workerThread;

public slots:
    void doWork(const QString &parameter) {
        // ...
        QString result = "work";
        emit resultReady(result);
    }

signals:
    void resultReady(const QString &result);
};

class myThread : public QObject
{
    Q_OBJECT

public:
    explicit myThread(QObject *parent = 0);

signals:

public slots:
};

#endif // MYTHREAD_H
