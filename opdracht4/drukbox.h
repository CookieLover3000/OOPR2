#ifndef DRUKBOX_H
#define DRUKBOX_H

#include "afdrukker.h"
class QTextBrowser;
class Drukbox : public Afdrukker
{
public:
    Drukbox(QTextBrowser*);
    virtual void toonText(string);
    virtual void clearMedium();
private:
    QTextBrowser *browser;
};

#endif // DRUKBOX_H
