#ifndef DEMOVIEWMODEL_H
#define DEMOVIEWMODEL_H

#include <QObject>

class DemoViewModel : public QObject
{
    Q_OBJECT
public:
    explicit DemoViewModel(QObject *parent = 0);

signals:

public slots:
};

#endif // DEMOVIEWMODEL_H