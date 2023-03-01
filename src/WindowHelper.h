﻿#ifndef WINDOWHELPER_H
#define WINDOWHELPER_H

#include <QObject>
#include <QQuickWindow>
#include <QQuickItem>
#include <QWindow>
#include "FramelessView.h"

class WindowHelper : public QObject
{
    Q_OBJECT

public:
    explicit WindowHelper(QObject *parent = nullptr);

    Q_INVOKABLE void initWindow(FramelessView* window);
    Q_INVOKABLE void setTitle(const QString& text);
    Q_INVOKABLE void setMinimumSize(const QSize &size);
    Q_INVOKABLE void setMaximumSize(const QSize &size);

private:
    FramelessView* window;

};

#endif // WINDOWHELPER_H
