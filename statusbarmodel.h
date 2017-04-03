#ifndef STATUSBARMODEL_H
#define STATUSBARMODEL_H

#include <QObject>
#include <QDateTime>
#include <QTimer>

class StatusBarModel : public QObject
{
    Q_OBJECT
public:
    explicit StatusBarModel(QObject *parent = 0);
    Q_INVOKABLE QString getCurrentTime() const {
        return QTime::currentTime().toString("hh:mm:ss.zzz");
    }

signals:
    void timeUpdated();


public slots:
    void updateTime();

private:
    QTimer m_Timer;
};

#endif // STATUSBARMODEL_H
